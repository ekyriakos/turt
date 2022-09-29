// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/ResStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__STRUCT_H_

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

// Struct defined in msg/ResStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__ResStatus
{
  std_msgs__msg__Header header;
  bool button;
  bool toggle;
  bool stop;
  uint8_t signal_strength;
} turtle_interfaces__msg__ResStatus;

// Struct for a sequence of turtle_interfaces__msg__ResStatus.
typedef struct turtle_interfaces__msg__ResStatus__Sequence
{
  turtle_interfaces__msg__ResStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__ResStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__STRUCT_H_
