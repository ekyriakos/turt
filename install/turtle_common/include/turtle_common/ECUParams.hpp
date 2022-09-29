
#ifndef ECU_PARAMS_H
#define ECU_PARAMS_H

#define POWER_TARGET_DEF 10
#define I_MAX_RMS_DEF 10
#define MAX_RPM_DEF 10
#define ED2_GAIN_DEF 10
#define MAX_CHARGING_FACTOR_DEF 1.0
#define REGEN_MIN_SPEED_DEF 1.0
#define SERVO_MIN_SPEED_DEF 3.0

#include <array>
#include <iostream>

#include <yaml-cpp/yaml.h>

//Structure of the vehicle's parameters
struct ECUParams {

    // powertrain
    double power_target_kw;
    double inv_i_max_rms;
    double inv_max_rpm;
    double ed2_gain;
    double inverter_i_rms_max_charging_factor;
    double regen_min_speed, servo_min_speed;
};

// creates a VehicleParams from a YAML configuration file
inline ECUParams paramsFromYaml(std::string path) {
    YAML::Node yaml = YAML::LoadFile(path);
    ECUParams params;
    if (yaml["power_target_kw"])
        params.power_target_kw = yaml["power_target_kw"].as<double>();
    else {
        std::cout << "WARNING: power_target_kw parameter not found, defaults to " << POWER_TARGET_DEF << std::endl;
        params.power_target_kw = POWER_TARGET_DEF;
    }
    if (yaml["inv_i_max_rms"])
        params.inv_i_max_rms = yaml["inv_i_max_rms"].as<double>();
    else {
        std::cout << "WARNING: inv_i_max_rms parameter not found, defaults to " << I_MAX_RMS_DEF << std::endl;
        params.inv_i_max_rms = I_MAX_RMS_DEF;
    }
    if (yaml["inv_max_rpm"])
        params.inv_max_rpm = yaml["inv_max_rpm"].as<double>();
    else {
        std::cout << "WARNING: inv_max_rpm parameter not found, defaults to " << MAX_RPM_DEF << std::endl;
        params.inv_max_rpm = MAX_RPM_DEF;
    }
    if (yaml["ed2_gain"])
        params.ed2_gain = yaml["ed2_gain"].as<double>();
    else {
        std::cout << "WARNING: ed2_gain parameter not found, defaults to " << ED2_GAIN_DEF << std::endl;
        params.ed2_gain = ED2_GAIN_DEF;
    }
    if (yaml["inverter_i_rms_max_charging_factor"])
        params.inverter_i_rms_max_charging_factor = yaml["inverter_i_rms_max_charging_factor"].as<double>();
    else {
        std::cout << "WARNING: inverter_i_rms_max_charging_factor parameter not found, defaults to " <<
                                                MAX_CHARGING_FACTOR_DEF << std::endl;
        params.inverter_i_rms_max_charging_factor = MAX_CHARGING_FACTOR_DEF;
    }
    if (yaml["regen_min_speed"])
        params.regen_min_speed = yaml["regen_min_speed"].as<double>();
    else {
        std::cout << "WARNING: regen_min_speed parameter not found, defaults to " << REGEN_MIN_SPEED_DEF << std::endl;
        params.regen_min_speed = REGEN_MIN_SPEED_DEF;
    }
    if (yaml["servo_min_speed"])
        params.servo_min_speed = yaml["servo_min_speed"].as<double>();
    else {
        std::cout << "WARNING: servo_min_speed parameter not found, defaults to " << SERVO_MIN_SPEED_DEF << std::endl;
        params.servo_min_speed = SERVO_MIN_SPEED_DEF;
    }

    return params;
}

//Printing Function: Prints the parameters
inline std::ostream& operator << (std::ostream& o, const ECUParams& params) {
    o << "ECU params[power_target_kw: " << params.power_target_kw << "\tinv_i_max_rms: " << params.inv_i_max_rms << 
      "\tinv_max_rpm: " << params.inv_max_rpm << "\ted2_gain: " << params.ed2_gain <<
      "\tinverter_i_rms_max_charging_factor: " << params.inverter_i_rms_max_charging_factor <<
      "\tregen_min_speed: " << params.regen_min_speed <<
      "\tservo_min_speed: " << params.servo_min_speed;
    return o;
}

#endif
