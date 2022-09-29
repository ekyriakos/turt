// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/VnGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__STRUCT_H_

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
// Member 'position'
// Member 'positionu'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/VnGpsPosition in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__VnGpsPosition
{
  std_msgs__msg__Header header;
  uint8_t num_sats;
  uint8_t fix;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 positionu;
} turtle_interfaces__msg__VnGpsPosition;

// Struct for a sequence of turtle_interfaces__msg__VnGpsPosition.
typedef struct turtle_interfaces__msg__VnGpsPosition__Sequence
{
  turtle_interfaces__msg__VnGpsPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__VnGpsPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__STRUCT_H_
