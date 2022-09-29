// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__STRUCT_H_

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

// Struct defined in msg/ECUParams in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__ECUParams
{
  std_msgs__msg__Header header;
  float inverter_rpm_percentage;
  float inverter_i_rms_max;
  float inverter_i_rms_max_brake;
  float power_target_kw;
  float servo_start_speed;
  float regen_min_speed;
  bool ed_enable;
  bool tc_enable;
} turtle_interfaces__msg__ECUParams;

// Struct for a sequence of turtle_interfaces__msg__ECUParams.
typedef struct turtle_interfaces__msg__ECUParams__Sequence
{
  turtle_interfaces__msg__ECUParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__ECUParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__STRUCT_H_
