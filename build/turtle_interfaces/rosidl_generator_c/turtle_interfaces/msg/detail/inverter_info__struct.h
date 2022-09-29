// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/InverterInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__STRUCT_H_

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

// Struct defined in msg/InverterInfo in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__InverterInfo
{
  std_msgs__msg__Header header;
  float igbts_temp;
  float irms_max;
  float i_lim_in_use;
  float motor_temp;
  float irms;
  float max_rpm;
} turtle_interfaces__msg__InverterInfo;

// Struct for a sequence of turtle_interfaces__msg__InverterInfo.
typedef struct turtle_interfaces__msg__InverterInfo__Sequence
{
  turtle_interfaces__msg__InverterInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__InverterInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__STRUCT_H_
