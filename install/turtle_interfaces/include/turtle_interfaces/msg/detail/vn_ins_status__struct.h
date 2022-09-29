// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/VnInsStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_INS_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_INS_STATUS__STRUCT_H_

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

// Struct defined in msg/VnInsStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__VnInsStatus
{
  std_msgs__msg__Header header;
  uint16_t status;
} turtle_interfaces__msg__VnInsStatus;

// Struct for a sequence of turtle_interfaces__msg__VnInsStatus.
typedef struct turtle_interfaces__msg__VnInsStatus__Sequence
{
  turtle_interfaces__msg__VnInsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__VnInsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_INS_STATUS__STRUCT_H_
