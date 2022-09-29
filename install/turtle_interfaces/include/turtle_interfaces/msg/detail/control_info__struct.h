// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__STRUCT_H_

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

// Struct defined in msg/ControlInfo in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__ControlInfo
{
  std_msgs__msg__Header header;
  float lookahead_distance;
  float vx_desired;
  uint8_t lap;
  bool map_available;
  bool finalization_trigger;
  float seconds_to_cross_finish_line;
  float anti_delft_gain;
  float finish_dist_thresh;
  float vx;
  float seconds_passed_since_finalization_trigger;
  bool heading_condition;
  float startline_pose_heading;
} turtle_interfaces__msg__ControlInfo;

// Struct for a sequence of turtle_interfaces__msg__ControlInfo.
typedef struct turtle_interfaces__msg__ControlInfo__Sequence
{
  turtle_interfaces__msg__ControlInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__ControlInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__STRUCT_H_
