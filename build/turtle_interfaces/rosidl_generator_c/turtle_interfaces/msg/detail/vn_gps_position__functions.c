// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/VnGpsPosition.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/vn_gps_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
// Member `positionu`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
turtle_interfaces__msg__VnGpsPosition__init(turtle_interfaces__msg__VnGpsPosition * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__VnGpsPosition__fini(msg);
    return false;
  }
  // num_sats
  // fix
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    turtle_interfaces__msg__VnGpsPosition__fini(msg);
    return false;
  }
  // positionu
  if (!geometry_msgs__msg__Vector3__init(&msg->positionu)) {
    turtle_interfaces__msg__VnGpsPosition__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__msg__VnGpsPosition__fini(turtle_interfaces__msg__VnGpsPosition * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // num_sats
  // fix
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // positionu
  geometry_msgs__msg__Vector3__fini(&msg->positionu);
}

bool
turtle_interfaces__msg__VnGpsPosition__are_equal(const turtle_interfaces__msg__VnGpsPosition * lhs, const turtle_interfaces__msg__VnGpsPosition * rhs)
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
  // num_sats
  if (lhs->num_sats != rhs->num_sats) {
    return false;
  }
  // fix
  if (lhs->fix != rhs->fix) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // positionu
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->positionu), &(rhs->positionu)))
  {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__VnGpsPosition__copy(
  const turtle_interfaces__msg__VnGpsPosition * input,
  turtle_interfaces__msg__VnGpsPosition * output)
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
  // num_sats
  output->num_sats = input->num_sats;
  // fix
  output->fix = input->fix;
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // positionu
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->positionu), &(output->positionu)))
  {
    return false;
  }
  return true;
}

turtle_interfaces__msg__VnGpsPosition *
turtle_interfaces__msg__VnGpsPosition__create()
{
  turtle_interfaces__msg__VnGpsPosition * msg = (turtle_interfaces__msg__VnGpsPosition *)malloc(sizeof(turtle_interfaces__msg__VnGpsPosition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__VnGpsPosition));
  bool success = turtle_interfaces__msg__VnGpsPosition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__VnGpsPosition__destroy(turtle_interfaces__msg__VnGpsPosition * msg)
{
  if (msg) {
    turtle_interfaces__msg__VnGpsPosition__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__VnGpsPosition__Sequence__init(turtle_interfaces__msg__VnGpsPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__VnGpsPosition * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__VnGpsPosition *)calloc(size, sizeof(turtle_interfaces__msg__VnGpsPosition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__VnGpsPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__VnGpsPosition__fini(&data[i - 1]);
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
turtle_interfaces__msg__VnGpsPosition__Sequence__fini(turtle_interfaces__msg__VnGpsPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__VnGpsPosition__fini(&array->data[i]);
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

turtle_interfaces__msg__VnGpsPosition__Sequence *
turtle_interfaces__msg__VnGpsPosition__Sequence__create(size_t size)
{
  turtle_interfaces__msg__VnGpsPosition__Sequence * array = (turtle_interfaces__msg__VnGpsPosition__Sequence *)malloc(sizeof(turtle_interfaces__msg__VnGpsPosition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__VnGpsPosition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__VnGpsPosition__Sequence__destroy(turtle_interfaces__msg__VnGpsPosition__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__VnGpsPosition__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__VnGpsPosition__Sequence__are_equal(const turtle_interfaces__msg__VnGpsPosition__Sequence * lhs, const turtle_interfaces__msg__VnGpsPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__VnGpsPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__VnGpsPosition__Sequence__copy(
  const turtle_interfaces__msg__VnGpsPosition__Sequence * input,
  turtle_interfaces__msg__VnGpsPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__VnGpsPosition);
    turtle_interfaces__msg__VnGpsPosition * data =
      (turtle_interfaces__msg__VnGpsPosition *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__VnGpsPosition__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__VnGpsPosition__fini(&data[i]);
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
    if (!turtle_interfaces__msg__VnGpsPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
