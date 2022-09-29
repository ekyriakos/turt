// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/OusterImu.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__STRUCT_H_

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
// Member 'acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/OusterImu in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__OusterImu
{
  std_msgs__msg__Header header;
  uint64_t imu_monotonic_time_stamp;
  uint64_t gyro_time_stamp;
  uint64_t accel_time_stamp;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 angular_velocity;
} turtle_interfaces__msg__OusterImu;

// Struct for a sequence of turtle_interfaces__msg__OusterImu.
typedef struct turtle_interfaces__msg__OusterImu__Sequence
{
  turtle_interfaces__msg__OusterImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__OusterImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__STRUCT_H_
