// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/BrakeLight.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__BRAKE_LIGHT__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__BRAKE_LIGHT__STRUCT_H_

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

// Struct defined in msg/BrakeLight in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__BrakeLight
{
  std_msgs__msg__Header header;
  bool brakelight;
} turtle_interfaces__msg__BrakeLight;

// Struct for a sequence of turtle_interfaces__msg__BrakeLight.
typedef struct turtle_interfaces__msg__BrakeLight__Sequence
{
  turtle_interfaces__msg__BrakeLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__BrakeLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__BRAKE_LIGHT__STRUCT_H_
