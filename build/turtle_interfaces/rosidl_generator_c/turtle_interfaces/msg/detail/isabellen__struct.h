// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/Isabellen.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__STRUCT_H_

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

// Struct defined in msg/Isabellen in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__Isabellen
{
  std_msgs__msg__Header header;
  float idc;
  float vdc;
  float pdc;
  float energy;
} turtle_interfaces__msg__Isabellen;

// Struct for a sequence of turtle_interfaces__msg__Isabellen.
typedef struct turtle_interfaces__msg__Isabellen__Sequence
{
  turtle_interfaces__msg__Isabellen * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__Isabellen__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__STRUCT_H_
