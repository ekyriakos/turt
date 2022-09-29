/*
 * This is a header file of the mixed bicycle model with simple steering,
 * and 6 returned values for the state.
 * It doesn't contain delta as a value of the state
 *
 * Created by Dimosthenis Natsos on November 5 2020
 */

#ifndef MIXED_BICYCLE_MODEL_MIXED_BICYCLE_MODEL_H
#define MIXED_BICYCLE_MODEL_MIXED_BICYCLE_MODEL_H

#include <ostream>
#include <cassert>
#include <cmath>
#include <array>
#include <memory>

#include "Input.h"
#include "State.h"
#include "VehicleParams.h"
#include "ECUParams.hpp"

// returns torque by modeling powertrain and according to journey of torque
inline double powertrain(double throttle, State state, VehicleParams params, ECUParams ecu_params) {
    double omega_rear = params.GR * state.v_x / params.r_eff;
    double motor_torque = throttle * ecu_params.inv_i_max_rms * params.motor_k;

    // clamp between limits
    double max_torque =
        omega_rear > 10 ? 1000 * ecu_params.power_target_kw / omega_rear : ecu_params.inv_i_max_rms * params.motor_k;
    double regen_rpm_thresh = 10;
    // maximum regenerative torque
    double min_torque = omega_rear > 10 ? -params.batt_max_charging_idc * params.batt_min_vdc / omega_rear : 0;
    motor_torque = std::min(motor_torque, max_torque);
    motor_torque = std::max(motor_torque, min_torque);
    return motor_torque;
}

inline double torqueVectoringTorque(double delta, double vx, double r, VehicleParams params, ECUParams ecu_params) {
    double rkin = vx * std::sin(delta) / params.L;
    return (rkin - r) * ecu_params.ed2_gain;
}

class KinematicVehicleModel {
  private:
    State currentState;
    VehicleParams params;
    ECUParams ecu_params;
    double delta_current;

  public:
    explicit KinematicVehicleModel(VehicleParams params, ECUParams ecuParams)
      : currentState(0, 0, 0, 0, 0, 0), params(params), ecu_params(ecuParams), delta_current(0) {
        assert(params.m != 0 && params.L != 0 && params.l_r != 0);
    }

    KinematicVehicleModel(State initialState, VehicleParams params, ECUParams ecuParams)
      : currentState(initialState), params(params), ecu_params(ecuParams), delta_current(0) {
        assert(params.m != 0 && params.L != 0 && params.l_r != 0);
    }

    // This constructor to be used the first time where we have initial x ,y ,psi
    KinematicVehicleModel(double x, double y, double psi, VehicleParams params, ECUParams ecuParams)
      : currentState(x, y, 0, 0, psi, 0), params(params), ecu_params(ecuParams), delta_current(0) {
        assert(params.m != 0 && params.L != 0 && params.l_r != 0);
    }

    State x_dot(const State& state, const Input& input, double delta_dot) {
        assert(!(input.throttle > 1 || input.throttle < -1 || fabs(input.steering) > 1));
        State state_dot;

        double delta = input.steering * params.SR;

        // Calculating the new state derivatives
        state_dot.x = state.v_x * cos(state.psi) - state.v_y * sin(state.psi);
        state_dot.y = state.v_x * sin(state.psi) + state.v_y * cos(state.psi);
        state_dot.psi = state.psi_dot;
        // Longitudinal Model
        double T_motor = powertrain(input.throttle, state, params, ecu_params);

        // Keep Fload simple for now because F_yf has a strange behaviour, especially in slower velocities
        double F_load_eff = getLoad(state, input) /* + F_yf*sin(delta)*/ - params.m * state.psi_dot * state.v_y;
        double J_m = params.I_t * pow(params.GR, 2) + params.I_w + params.m * pow(params.r_eff, 2);
        state_dot.v_x = params.r_eff * (T_motor * params.GR - F_load_eff * params.r_eff) / J_m;
        //        double v_y_dot = (delta_dot * currentState.v_x / (pow(cos(delta),2)) + v_x_dot * tan(delta)) *
        //        params.l_r / params.L;//This leaves bug offset on v_y
        state_dot.v_y =
            (delta_dot * state.v_x + state_dot.v_x * delta) * params.l_r / params.L;  // Or this one for simplicity
        state_dot.psi_dot = state_dot.v_y / params.l_r;
        return state_dot;
    }

    State update(const Input& input, double dt) {
        this->currentState = predict(this->currentState, input, dt);
        return currentState;
    }

    State predict(const State& state, const Input& input, double dt) {
        State stateNext = state;
        double delta = input.steering * params.SR;
        double delta_dot = (delta - delta_current) / dt;  // THIS ID WRONG! delta should be contained in the state
        State state_dot = x_dot(state, input, delta_dot);

        // Updating state
        stateNext.x += state_dot.x * dt;
        stateNext.y += state_dot.y * dt;
        stateNext.psi += state_dot.psi * dt;
        stateNext.v_x += state_dot.v_x * dt;
        stateNext.v_y += state_dot.v_y * dt;
        stateNext.psi_dot += state_dot.psi_dot * dt;

        // Updating delta_current for the next time the model runs
        delta_current = input.steering * params.SR;

        // Prevent longitudinal speed from becoming negative
        /*if(stateNext.v_x < 0.00001) {
            stateNext.v_x = 0;
            stateNext.v_y = 0;
            stateNext.psi_dot = 0;
        }*/

        // Contain psi in [-pi,pi]
        //        if (currentState.psi > M_PI) {
        //            currentState.psi = currentState.psi - 2 * M_PI;
        //        }
        //        else if (currentState.psi < -M_PI) {
        //            currentState.psi = currentState.psi + 2 * M_PI;
        //        }

        return stateNext;
    }

    double getLoad(const State& state, const Input& input) const {
        // brake Force (only applied when input.throttle<0)
        double F_brake;
        if (input.throttle < 0)
            F_brake = -sign(state.v_x) * params.max_brake_torque * input.throttle / params.r_eff;
        else
            F_brake = 0;
        // Drag
        double F_aero = 0.5 * params.c_d * params.rho * params.A * state.v_x * state.v_x;
        // Rolling resistance, c_r0 here needs to be zero because of v_y_dot formula
        double R_x = params.c_r0 + params.c_r1 * fabs(state.v_x) + params.c_r2 * pow(state.v_x, 2);

        return F_brake + F_aero + R_x;
    }

    static int sign(double num) {
        if (num > 0)
            return 1;
        else if (num == 0)
            return 0;
        else
            return -1;
    }

    void setDeltaCurrent(double delta_curr) {
        this->delta_current = delta_curr;
    }

    double getDeltaCurrent() const {
        return delta_current;
    }

    void setState(State state) {
        currentState = state;
    }
    VehicleParams Params() const {
        return params;
    }
    State state() const {
        return currentState;
    };
};

class DynamicVehicleModel {
    // Variables
  private:
    State currentState;
    VehicleParams params;
    ECUParams ecu_params;
    static constexpr double GRAVITY = 9.81;
    //    double a_x;

  public:
    //**************************************** CONSTRUCTORS ***************************************

    /*Using explicit on the single variable constructors which avoids the call of the constructor with different
     * variable types other than VehicleParams
     */
    explicit DynamicVehicleModel(VehicleParams params, ECUParams ecuParams)
      : currentState(0, 0, 0, 0, 0, 0), params(params), ecu_params(ecuParams) /*,a_x(0)*/ {
        // Terminates the program if the statement below is false
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    DynamicVehicleModel(State initialState, VehicleParams params, ECUParams ecuParams)
      : currentState(initialState), params(params), ecu_params(ecuParams) /*,a_x(0)*/ {
        // Terminates the program if the statement below is false
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    // This constructor to be used the first time where we have initial x ,y ,psi
    DynamicVehicleModel(double x, double y, double psi, VehicleParams params, ECUParams ecuParams)
      : currentState(x, y, 0, 0, psi, 0), params(params), ecu_params(ecuParams) /*, a_x(0)*/ {
        // Terminates the program if the statement below is false
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    //**************************************** METHODS ********************************************

    State x_dot(const State& state, const Input& input) {
        assert(!(input.throttle > 1 || input.throttle < -1 || fabs(input.steering) > 1));
        State state_dot;

        double delta = params.SR * input.steering;
        double T_motor = powertrain(input.throttle, state, params, ecu_params);
        double l_f = params.L - params.l_r;

        double a_f = slipAngleFront(state, delta);
        double a_r = slipAngleRear(state);

        //        double factor = 0.15;// This is used to add a percentage of the longitudinal load transfer to the
        //        vehicle (keep it between 0% and 20%)
        double N_r = (params.m * GRAVITY * l_f /*+ (params.m * a_x * params.cog_height)*factor */) / params.L;
        double N_f = params.m * GRAVITY - N_r;

        // Adding down force
        N_f = N_f + getDownForce() * params.DF_PercentageFront;
        N_r = N_r + getDownForce() * (1 - params.DF_PercentageFront);

        // New tire model
        double F_yf = 2 * tireModel(a_f, N_f / 2.0, state.v_x);
        double F_yr = 2 * tireModel(a_r, N_r / 2.0, state.v_x);

        // longitudinal
        // Fload_effective fixes the spinning slip angles problem
        double F_load_eff = getLoad(state, input) + F_yf * sin(delta) - params.m * state.psi_dot * state.v_y;
        double J_m = params.I_t * pow(params.GR, 2) + params.I_w + params.m * pow(params.r_eff, 2);
        state_dot.v_x = params.r_eff * (T_motor * params.GR - F_load_eff * params.r_eff) / J_m;

        // lateral
        state_dot.v_y = (F_yr + F_yf * cos(delta) - params.m * state.v_x * state.psi_dot) / params.m;
        double tvTorque = torqueVectoringTorque(delta, state.v_x, state.psi_dot, params, ecu_params);
        state_dot.psi_dot = (F_yf * l_f * cos(delta) - F_yr * params.l_r + tvTorque) / params.I_z;

        // velocities
        state_dot.x = state.v_x * cos(state.psi) - state.v_y * sin(state.psi);
        state_dot.y = state.v_x * sin(state.psi) + state.v_y * cos(state.psi);
        state_dot.psi = state.psi_dot;
        return state_dot;
    }

    // Estimates the next state without updating the current state
    State predict(const State& state, const Input& input, double dt) {
        State stateNext = state;
        State state_dot = x_dot(currentState, input);
        // update
        stateNext.x += state_dot.x * dt;
        stateNext.y += state_dot.y * dt;
        stateNext.psi += state_dot.psi * dt;
        stateNext.v_x += state_dot.v_x * dt;
        stateNext.v_y += state_dot.v_y * dt;
        stateNext.psi_dot += state_dot.psi_dot * dt;
        //        a_x = v_x_dot;

        // Prevent longitudinal speed from becoming negative and zeroing v_y v_x
        // The only disadvantage is that it doesn't allow the vehicle to drift with v_x almost zero, but we dont want
        // that anyways
        /*if(stateNext.v_x < 0.00001){
            //The below makes it more smooth and realistic due to C++ inaccuracies
            stateNext.v_x = 0;
            //The ones below solve the spinning vehicle problem
            stateNext.v_y = 0;
            stateNext.psi_dot = 0;
        }*/

        // Contain psi in [-pi,pi]
        //        if (currentState.psi > M_PI) {
        //            currentState.psi = currentState.psi - 2 * M_PI;
        //        }
        //        else if (currentState.psi < -M_PI) {
        //            currentState.psi = currentState.psi + 2 * M_PI;
        //        }

        return stateNext;
    }

    // Estimates the next state and updates current state
    State update(const Input& input, double dt) {
        this->currentState = predict(this->currentState, input, dt);
        return currentState;
    }

    double getLoad(const State& state, const Input& input) const {
        // brake Force (only applied when input.throttle<0)
        double F_brake;
        if (input.throttle < 0)
            F_brake = -sign(state.v_x) * params.max_brake_torque * input.throttle / params.r_eff;
        else
            F_brake = 0;
        // Drag
        double F_aero = 0.5 * params.c_d * params.rho * params.A * state.v_x * state.v_x;
        // Rolling resistance, in this model we dont need to zero c_r0, but in the Kinematic we do.
        double R_x = params.c_r0 + params.c_r1 * fabs(state.v_x /*3.6*/) + params.c_r2 * pow(state.v_x /*3.6*/, 2);

        return F_brake + F_aero + R_x;
    }

    // Rear slip angle calculation
    double slipAngleRear(const State& state) const {
        if (fabs(state.v_x) > 0.01) {
            return -atan((state.v_y - params.l_r * state.psi_dot) / state.v_x);
        }
        return 0;
    }

    // Front slip angle calculation
    double slipAngleFront(const State& state, double delta) const {
        if (fabs(state.v_x) > 0.01) {
            return delta - atan((state.v_y + (params.L - params.l_r) * state.psi_dot) / state.v_x);
        }

        return 0;
    }

    // New tire model for 13 inch rim developed by Christos Papagiannis
    static double tireModel(double alpha, double Fz, double v_x) {
        alpha = rad2deg(alpha);  // Inputs in rad -> make it degrees
        Fz = Fz / 1000;          // Input in Newtons -> make in KN
        double camber = 0;

        // Lateral force
        // ai        Role
        double a0 = 1.5309415301550684;      // Shape factor		                                        1.2 .. 18 1.4
        double a1 = -400.00015511811023622;  // Load influence on lateral friction coefficient (*1000)   -80 .. +80 0
        double a2 = 2230.305511811023622;    // Lateral friction coefficient (*1000)		                900 .. 1700 1100
        double a10 =
            -111.008438488636287;         // Camber influence on horizontal shift		                -0.1 .. +0.1 0
        double a11 = 11.011796790292920;  // Vertical shift		                                    -200 .. +200 0
        double a12 = -0.043566982576991;  // Vertical shift at load = 0		                        -10 .. +10 0
        double a8 = 0.015379596200965;    // Load influence on horizontal shift		                -1 .. +1 0
        double a9 = -0.078706902542296;   // Horizontal shift at load = 0 and camber = 0		        -1 .. +1 0
        double a15 =
            0.156449649531983;          // Camber influence on lateral friction coefficient		    -0.01 .. +0.01 0
        double a3 = 13200.00;           // Change of stiffness with slip		                        500 .. 2000 1100
        double a4 = 47;                 // Change of progressivity of stiffness / load		        0 .. 50 10
        double a5 = 0.0;                // Camber influence on stiffness		                        -0.1 .. +0.1 0
        double a6 = 0.594000000000000;  // Curvature change with load		                        -2 .. +2 0
        double a7 = 0.402200000000000;  // Curvature factor		                                    -20 .. +1 -2

        double a13 = 10;  // Camber influence on vertical shift, load dependent		-10 .. +10 0
        double a14 = 0;   // Camber influence on vertical shift		                -15 .. +15 0
        double a16 =
            -0.316400000000000;  // Curvature change with camber		                        -0.1 .. +0.1 0
        double a17 = 0;          // Curvature shift

        double Cy = a0;                                                              // Shape factor
        double Hy = a8 * Fz + a9 + a10 * camber;                                     // Horizontal shift
        double Dy = Fz * (a1 * Fz + a2) * (1 - (a15 * pow(camber, 2)));              // Peak factor
        double BCDy = a3 * sin(atan(Fz / a4) * 2) * (1 - a5 * fabs(camber));         // Stiffness
        double By = BCDy / (Cy * Dy);                                                // Stiffness factor
        double Ey = (a6 * Fz + a7) * (1 - (a16 * camber + a17) * sign(alpha + Hy));  // Curvature factor
        double Vy = a11 * Fz + a12 + (a13 * Fz + a14) * camber * Fz;                 // Vertical shift

        // Use this if statement, otherwise the vehicle will start spinning when v_x = 0
        if (v_x < 0.1) {
            Hy = 0;
            Vy = 0;
        }

        // Returning the lateral force
        // This returns for positive slip angles negative lateral forces, following the Pacejka documentation
        return (Dy * sin(Cy * atan(By * (alpha + Hy) - Ey * atan(By * (alpha + Hy) - atan(By * (alpha + Hy))))) + Vy);
    }

    double getDownForce() const {
        return currentState.v_x * currentState.v_x * params.Cl;
    }

    static int sign(double num) {
        if (num > 0)
            return 1;
        else if (num == 0)
            return 0;
        else
            return -1;
    }

    // Converts rads to degrees
    static double rad2deg(double radian) {
        return (radian * 180 / M_PI);
    }

    void setState(State state) {
        currentState = state;
    }

    VehicleParams Params() const {
        return params;
    }
    State state() const {
        return currentState;
    };
};

class VehicleModel {
  private:
    State currentState;
    VehicleParams params;
    ECUParams ecu_params;
    double delta_current;
    double upperSpeedBoundary;
    double lowerSpeedBoundary;
    KinematicVehicleModel KinematicModel;
    DynamicVehicleModel DynamicModel;

  public:
    explicit VehicleModel(VehicleParams params, ECUParams ecuParams)
      : currentState(0, 0, 0, 0, 0, 0)
      , params(params)
      , ecu_params(ecuParams)
      , delta_current(0)
      , upperSpeedBoundary(5)
      , lowerSpeedBoundary(3)
      , KinematicModel(params, ecuParams)
      , DynamicModel(params, ecuParams) {
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    VehicleModel(State initialState, VehicleParams params, ECUParams ecuParams)
      : currentState(initialState)
      , params(params)
      , ecu_params(ecuParams)
      , delta_current(0)
      , upperSpeedBoundary(5)
      , lowerSpeedBoundary(3)
      , KinematicModel(initialState, params, ecuParams)
      , DynamicModel(initialState, params, ecuParams) {
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    VehicleModel(double x, double y, double psi, VehicleParams params, ECUParams ecuParams)
      : currentState(x, y, 0, 0, psi, 0)
      , params(params)
      , ecu_params(ecuParams)
      , delta_current(0)
      , upperSpeedBoundary(5)
      , lowerSpeedBoundary(3)
      , KinematicModel(x, y, psi, params, ecuParams)
      , DynamicModel(x, y, psi, params, ecuParams) {
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    VehicleModel(double x, double y, double psi, VehicleParams params, ECUParams ecuParams, double lowSpeedBoundary,
                 double highSpeedBoundary)
      : currentState(x, y, 0, 0, psi, 0)
      , params(params)
      , ecu_params(ecuParams)
      , delta_current(0)
      , upperSpeedBoundary(highSpeedBoundary)
      , lowerSpeedBoundary(lowSpeedBoundary)
      , KinematicModel(x, y, psi, params, ecuParams)
      , DynamicModel(x, y, psi, params, ecuParams) {
        assert(params.m != 0 && params.I_z != 0 && params.L != 0 && params.l_r != 0);
    }

    State predict(const State& state, const Input& input, double dt) {
        State stateNextKinematic = KinematicModel.predict(state, input, dt);
        State stateNextDynamic = DynamicModel.predict(state, input, dt);

        // state blend
        double lambda = std::min(
            std::max((currentState.v_x - lowerSpeedBoundary) / (upperSpeedBoundary - lowerSpeedBoundary), 0.0), 1.0);
        State stateNext;
        stateNext.x = (1 - lambda) * stateNextKinematic.x + lambda * stateNextDynamic.x;
        stateNext.y = (1 - lambda) * stateNextKinematic.y + lambda * stateNextDynamic.y;
        stateNext.v_x = (1 - lambda) * stateNextKinematic.v_x + lambda * stateNextDynamic.v_x;
        stateNext.v_y = (1 - lambda) * stateNextKinematic.v_y + lambda * stateNextDynamic.v_y;
        stateNext.psi = (1 - lambda) * stateNextKinematic.psi + lambda * stateNextDynamic.psi;
        stateNext.psi_dot = (1 - lambda) * stateNextKinematic.psi_dot + lambda * stateNextDynamic.psi_dot;

        if (stateNext.psi > M_PI) {
            stateNext.psi = stateNext.psi - 2 * M_PI;
        } else if (stateNext.psi < -M_PI) {
            stateNext.psi = stateNext.psi + 2 * M_PI;
        }

        delta_current = input.steering * params.SR;
        return stateNext;
    }

    State update(Input input, double dt) {
        this->currentState = predict(this->currentState, input, dt);
        KinematicModel.setState(this->currentState);
        DynamicModel.setState(this->currentState);
        return currentState;
    }

    VehicleParams Params() const {
        return params;
    }

    State state() const {
        return currentState;
    }

    double getDeltaCurrent() const {
        return delta_current;
    }
};

typedef std::unique_ptr<VehicleModel> VehicleModelPtr;

#endif  // MIXED_BICYCLE_MODEL_MIXED_BICYCLE_MODEL_H
