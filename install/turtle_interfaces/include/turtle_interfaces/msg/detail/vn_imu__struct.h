// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/VnImu.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_IMU__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_IMU__STRUCT_H_

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
// Member 'accel'
// Member 'gyro'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/VnImu in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__VnImu
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 accel;
  geometry_msgs__msg__Vector3 gyro;
} turtle_interfaces__msg__VnImu;

// Struct for a sequence of turtle_interfaces__msg__VnImu.
typedef struct turtle_interfaces__msg__VnImu__Sequence
{
  turtle_interfaces__msg__VnImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__VnImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_IMU__STRUCT_H_
