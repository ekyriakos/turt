// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'stages_velocity'
// Member 'stages_steering_angle'
// Member 'stages_force'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MPCInfo in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__MPCInfo
{
  std_msgs__msg__Header header;
  uint8_t mpc_was_used;
  float delta_commanded;
  float delta_desired;
  float mpc_microseconds;
  float mpc_milliseconds;
  float solver_milliseconds;
  float velocity_desired;
  float vx_max;
  float vx;
  float spline_length;
  uint8_t number_of_waypoints;
  float throttle_brake;
  float torque;
  rosidl_runtime_c__float__Sequence stages_velocity;
  rosidl_runtime_c__float__Sequence stages_steering_angle;
  rosidl_runtime_c__float__Sequence stages_force;
} turtle_interfaces__msg__MPCInfo;

// Struct for a sequence of turtle_interfaces__msg__MPCInfo.
typedef struct turtle_interfaces__msg__MPCInfo__Sequence
{
  turtle_interfaces__msg__MPCInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__MPCInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__STRUCT_H_
