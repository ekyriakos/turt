// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SlamStatistics in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__SlamStatistics
{
  double chi2;
  uint32_t num_vertices;
  uint32_t num_edges;
  double total_optimizer_time;
  uint32_t hessian_dim;
  uint32_t cholesky_nnz;
  uint32_t num_iterations;
} turtle_interfaces__msg__SlamStatistics;

// Struct for a sequence of turtle_interfaces__msg__SlamStatistics.
typedef struct turtle_interfaces__msg__SlamStatistics__Sequence
{
  turtle_interfaces__msg__SlamStatistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__SlamStatistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__STRUCT_H_
