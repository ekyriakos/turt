/* Vehicle Parameters Header
 *
 * Created by Dimosthenis Natsos and oogee*/

#ifndef VEHICLE_MODEL_VEHICLEPARAMS_H
#define VEHICLE_MODEL_VEHICLEPARAMS_H

#include <array>
#include <iostream>

#include <yaml-cpp/yaml.h>

// Structure of the vehicle's parameters
struct VehicleParams {
    // vehicle
    double m;
    double L;
    double t;  // vehicle width
    double l_r;
    double I_z;  // Not used?
    double half_axle_z_off;

    // wheels
    double I_w;
    double r_eff;
    double max_brake_torque;

    // tires
    double g;

    // steering
    double SR;  // steering ratio

    // Transmission
    double GR;

    // Motor
    double max_motor_torque;
    double I_t;  // EMRAX 228 x2 moment of inertia

    // aero
    double c_d;
    double A;
    double rho;

    // rolling resistance
    double c_r0, c_r1, c_r2;

    // center of gravity height
    double cog_height;
    double Cl;
    double DF_PercentageFront;

    // powertrain
    double batt_max_charging_idc;
    double batt_min_vdc;
    double motor_k;
};

// creates a VehicleParams from a YAML configuration file
inline VehicleParams paramsFromFile(std::string path) {
    std::cout << "gonna open vehicle params file" << std::endl;
    YAML::Node yaml = YAML::LoadFile(path);
    VehicleParams params;
    std::cout << "gonna read vehicle params" << std::endl;
    params.m = yaml["m"].as<double>();
    params.L = yaml["L"].as<double>();
    params.t = yaml["t"].as<double>();
    params.l_r = yaml["l_r"].as<double>();
    params.I_z = yaml["I_z"].as<double>();
    params.I_w = yaml["I_w"].as<double>();
    params.r_eff = yaml["r_eff"].as<double>();
    params.max_brake_torque = yaml["max_brake_torque"].as<double>();
    params.rho = yaml["rho"].as<double>();
    params.A = yaml["A"].as<double>();
    params.c_d = yaml["c_d"].as<double>();
    params.c_r0 = yaml["c_r0"].as<double>();
    params.c_r1 = yaml["c_r1"].as<double>();
    params.c_r2 = yaml["c_r2"].as<double>();
    params.g = yaml["g"].as<double>();
    params.SR = yaml["SR"].as<double>();
    params.GR = yaml["GR"].as<double>();
    params.I_t = yaml["I_t"].as<double>();
    params.max_motor_torque = yaml["max_motor_torque"].as<double>();
    params.cog_height = yaml["cog_height"].as<double>();
    params.half_axle_z_off = yaml["half_axle_z_off"].as<double>();
    params.Cl = yaml["Cl"].as<double>();
    params.DF_PercentageFront = yaml["DF_PercentageFront"].as<double>();
    std::cout << "gonna read powertrain" << std::endl;
    params.batt_max_charging_idc = yaml["batt_max_charging_idc"].as<double>();
    params.batt_min_vdc = yaml["batt_min_vdc"].as<double>();
    params.motor_k = yaml["motor_k"].as<double>();
    std::cout << "done reading vehicle params" << std::endl;

    return params;
}

// Printing Function: Prints arrays any size(size_t) and any type (Type T)
template <typename T, std::size_t N>  // Template is used be able to pass an arbitrary size array to operator
std::ostream& operator<<(std::ostream& o, const std::array<T, N>& arr) {
    o << "[";
    for (const auto& e : arr)
        o << e << " ";
    o << "\b]";
    return o;
}

// Printing Function: Prints the parameters
inline std::ostream& operator<<(std::ostream& o, const VehicleParams& params) {
    o << "params[m: " << params.m << "\tI_z: " << params.I_z << "\tL: " << params.L << "\tl_r: " << params.l_r
      << "\tI_w: " << params.I_w << "\tr_eff: " << params.r_eff << "\tmax_brake_torque: " << params.max_brake_torque
      << params.SR << "\tGR: " << params.GR << "\tI_t: " << params.I_t
      << "\tmax_motor_torque: " << params.max_motor_torque << "\tc_d: " << params.c_d << "\tA: " << params.A
      << "\trho: " << params.rho << "\tc_r0: " << params.c_r0 << "\tc_r1: " << params.c_r1 << "\tc_r2: " << params.c_r2
      << "]" << std::endl;
    return o;
}

// Function to initialize the parameters as we want them
// Changes this parameters if needed
// TODO: DONT USE WITH THE SIMULATION
// void initParams(VehicleParams &vps) {
//     vps.m = 260;//Mass of the DV Thetis
//     vps.L = 2;
//     vps.l_r = 0.8;
//     vps.I_z = 2000;
//     vps.I_w = 2*0.3; //2 wheels moment of inertia
//     vps.r_eff = 0.26035;
//     vps.max_brake_torque = 1000;
//     vps.g = 5 * M_PI / 180;
//     vps.SR = 0.4;
//     vps.GR = 3.2;
//
//     vps.max_motor_torque = 360; //EMRAX 228 Tmax = 2*230 Nm I take the 80% (180Nm) due to torque losses on the
//     powertrain and tires and it seems accurate
//
//     vps.I_t = 2*0.0383; // EMRAX 228 datasheet
//     vps.c_d = 1.25;
//     vps.A = 1.2;
//     vps.rho = 1.225;
//     vps.c_r0 = 0.00;
//     vps.c_r1 = 0.02;
//     vps.c_r2 = 0.02;
////    vps.cog_height = 0.32;
//    vps.Cl = 2.34;
//    vps.DF_PercentageFront = 0.42;
//}

#endif  // VEHICLE_MODEL_VEHICLEPARAMS_H
