// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/RPM.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__RPM__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__RPM__STRUCT_H_

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

// Struct defined in msg/RPM in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__RPM
{
  std_msgs__msg__Header header;
  float left;
  float right;
} turtle_interfaces__msg__RPM;

// Struct for a sequence of turtle_interfaces__msg__RPM.
typedef struct turtle_interfaces__msg__RPM__Sequence
{
  turtle_interfaces__msg__RPM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__RPM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__RPM__STRUCT_H_
