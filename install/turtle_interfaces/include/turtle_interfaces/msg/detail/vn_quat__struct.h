// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/VnQuat.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_QUAT__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_QUAT__STRUCT_H_

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
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

// Struct defined in msg/VnQuat in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__VnQuat
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion quaternion;
} turtle_interfaces__msg__VnQuat;

// Struct for a sequence of turtle_interfaces__msg__VnQuat.
typedef struct turtle_interfaces__msg__VnQuat__Sequence
{
  turtle_interfaces__msg__VnQuat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__VnQuat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_QUAT__STRUCT_H_
