// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/CameraStatus.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/camera_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__CameraStatus__init(turtle_interfaces__msg__CameraStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__CameraStatus__fini(msg);
    return false;
  }
  // left_camera
  // center_camera
  // right_camera
  return true;
}

void
turtle_interfaces__msg__CameraStatus__fini(turtle_interfaces__msg__CameraStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_camera
  // center_camera
  // right_camera
}

bool
turtle_interfaces__msg__CameraStatus__are_equal(const turtle_interfaces__msg__CameraStatus * lhs, const turtle_interfaces__msg__CameraStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // left_camera
  if (lhs->left_camera != rhs->left_camera) {
    return false;
  }
  // center_camera
  if (lhs->center_camera != rhs->center_camera) {
    return false;
  }
  // right_camera
  if (lhs->right_camera != rhs->right_camera) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__CameraStatus__copy(
  const turtle_interfaces__msg__CameraStatus * input,
  turtle_interfaces__msg__CameraStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // left_camera
  output->left_camera = input->left_camera;
  // center_camera
  output->center_camera = input->center_camera;
  // right_camera
  output->right_camera = input->right_camera;
  return true;
}

turtle_interfaces__msg__CameraStatus *
turtle_interfaces__msg__CameraStatus__create()
{
  turtle_interfaces__msg__CameraStatus * msg = (turtle_interfaces__msg__CameraStatus *)malloc(sizeof(turtle_interfaces__msg__CameraStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__CameraStatus));
  bool success = turtle_interfaces__msg__CameraStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__CameraStatus__destroy(turtle_interfaces__msg__CameraStatus * msg)
{
  if (msg) {
    turtle_interfaces__msg__CameraStatus__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__CameraStatus__Sequence__init(turtle_interfaces__msg__CameraStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__CameraStatus * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__CameraStatus *)calloc(size, sizeof(turtle_interfaces__msg__CameraStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__CameraStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__CameraStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_interfaces__msg__CameraStatus__Sequence__fini(turtle_interfaces__msg__CameraStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__CameraStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_interfaces__msg__CameraStatus__Sequence *
turtle_interfaces__msg__CameraStatus__Sequence__create(size_t size)
{
  turtle_interfaces__msg__CameraStatus__Sequence * array = (turtle_interfaces__msg__CameraStatus__Sequence *)malloc(sizeof(turtle_interfaces__msg__CameraStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__CameraStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__CameraStatus__Sequence__destroy(turtle_interfaces__msg__CameraStatus__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__CameraStatus__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__CameraStatus__Sequence__are_equal(const turtle_interfaces__msg__CameraStatus__Sequence * lhs, const turtle_interfaces__msg__CameraStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__CameraStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__CameraStatus__Sequence__copy(
  const turtle_interfaces__msg__CameraStatus__Sequence * input,
  turtle_interfaces__msg__CameraStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__CameraStatus);
    turtle_interfaces__msg__CameraStatus * data =
      (turtle_interfaces__msg__CameraStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__CameraStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__CameraStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__msg__CameraStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
