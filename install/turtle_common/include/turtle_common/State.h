/* Vehicle State Header
 *
 * Created by Dimosthenis Natsos and oogee*/

#ifndef VEHICLE_MODEL_STATE_H
#define VEHICLE_MODEL_STATE_H

#include <array>
#include <iostream>

//Structure of the current state
struct State {
    // coordinates
    double x, y;

    // longitudinal
    double v_x;

    // lateral
    double v_y;
    double psi;
    double psi_dot;

    State() {}
    State(double x, double y, double v_x, double v_y, double psi, double psi_dot) : x(x), y(y), v_x(v_x), v_y(v_y), psi(psi),
                                                                                    psi_dot(psi_dot) {}
};

//Printing Function: Prints the current State
inline std::ostream& operator << (std::ostream& o, const State& state) {
    o << "state[x: " << state.x << "\ty: " << state.y << "\tv_x: " << state.v_x << "\tv_y: " << state.v_y << "\tpsi: " << state.psi << "\tpsi_dot: " << state.psi_dot << "]" << std::endl;
    return o;
}

#endif //VEHICLE_MODEL_STATE_H
