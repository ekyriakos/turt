// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/VnUtcTime.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_UTC_TIME__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_UTC_TIME__STRUCT_H_

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

// Struct defined in msg/VnUtcTime in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__VnUtcTime
{
  std_msgs__msg__Header header;
  uint64_t time_stamp;
} turtle_interfaces__msg__VnUtcTime;

// Struct for a sequence of turtle_interfaces__msg__VnUtcTime.
typedef struct turtle_interfaces__msg__VnUtcTime__Sequence
{
  turtle_interfaces__msg__VnUtcTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__VnUtcTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_UTC_TIME__STRUCT_H_
