// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/CameraConesPublish.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__STRUCT_H_

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

// Struct defined in msg/CameraConesPublish in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__CameraConesPublish
{
  std_msgs__msg__Header header;
  uint8_t left_camera_cones;
  uint8_t center_camera_cones;
  uint8_t right_camera_cones;
} turtle_interfaces__msg__CameraConesPublish;

// Struct for a sequence of turtle_interfaces__msg__CameraConesPublish.
typedef struct turtle_interfaces__msg__CameraConesPublish__Sequence
{
  turtle_interfaces__msg__CameraConesPublish * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__CameraConesPublish__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__STRUCT_H_
