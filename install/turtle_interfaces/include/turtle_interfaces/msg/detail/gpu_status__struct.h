// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/GpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__STRUCT_H_

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

// Struct defined in msg/GpuStatus in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__GpuStatus
{
  std_msgs__msg__Header header;
  bool gpu_status;
  int16_t cu_device;
  float free_memory;
  float used_memory;
  float total_memory;
  float temp_c;
  float speed_fan;
  float power_usage;
} turtle_interfaces__msg__GpuStatus;

// Struct for a sequence of turtle_interfaces__msg__GpuStatus.
typedef struct turtle_interfaces__msg__GpuStatus__Sequence
{
  turtle_interfaces__msg__GpuStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__GpuStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__STRUCT_H_
