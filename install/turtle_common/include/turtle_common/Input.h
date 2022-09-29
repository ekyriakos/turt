/* Vehicle Input Header
 *
 * Created by Dimosthenis Natsos and oogee*/

#ifndef VEHICLE_MODEL_INPUT_H
#define VEHICLE_MODEL_INPUT_H

#include <array>
#include <iostream>

//Inputs Structure
struct Input {
    double throttle;
    double brake;
    double steering;

    //Constructor of Input
    //TODO: DONT USE WITH THE SIMULATION
//    Input(double throttle, double brake, double steering) : throttle(throttle), brake(brake), steering(steering) {}

    //Function to change the input
    //TODO: DONT USE WITH THE SIMULATION
//    void changeInput(double Thr, double Br, double St){
//        throttle = Thr;
//        brake = Br;
//        steering = St;
//    }
};

//Printing Function: Prints the inputs
inline std::ostream& operator << (std::ostream& o, const Input& input) {
    o << "input[throttle: " << input.throttle << "\tbrake: " << input.brake << "\tsteering: " << input.steering << "]" << std::endl;
    return o;
}

#endif //VEHICLE_MODEL_INPUT_H
