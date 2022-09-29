// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/VnGpsVelocity.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__STRUCT_H_

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
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/VnGpsVelocity in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__VnGpsVelocity
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 vel;
  float uncertainty;
} turtle_interfaces__msg__VnGpsVelocity;

// Struct for a sequence of turtle_interfaces__msg__VnGpsVelocity.
typedef struct turtle_interfaces__msg__VnGpsVelocity__Sequence
{
  turtle_interfaces__msg__VnGpsVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__VnGpsVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__STRUCT_H_
