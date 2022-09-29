// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/SlamInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__STRUCT_H_

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
// Member 'slam_statistics'
#include "turtle_interfaces/msg/detail/slam_statistics__struct.h"

// Struct defined in msg/SlamInfo in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__SlamInfo
{
  std_msgs__msg__Header header;
  turtle_interfaces__msg__SlamStatistics slam_statistics;
  bool localization_mode;
  uint32_t sensor_cone_count;
  uint32_t total_cone_count;
} turtle_interfaces__msg__SlamInfo;

// Struct for a sequence of turtle_interfaces__msg__SlamInfo.
typedef struct turtle_interfaces__msg__SlamInfo__Sequence
{
  turtle_interfaces__msg__SlamInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__SlamInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__STRUCT_H_
