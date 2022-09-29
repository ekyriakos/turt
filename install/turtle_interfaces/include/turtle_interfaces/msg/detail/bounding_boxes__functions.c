// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/bounding_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `x`
// Member `y`
// Member `w`
// Member `h`
// Member `color`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
turtle_interfaces__msg__BoundingBoxes__init(turtle_interfaces__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // w
  if (!rosidl_runtime_c__double__Sequence__init(&msg->w, 0)) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // h
  if (!rosidl_runtime_c__double__Sequence__init(&msg->h, 0)) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // color
  if (!rosidl_runtime_c__double__Sequence__init(&msg->color, 0)) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // camera
  return true;
}

void
turtle_interfaces__msg__BoundingBoxes__fini(turtle_interfaces__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // w
  rosidl_runtime_c__double__Sequence__fini(&msg->w);
  // h
  rosidl_runtime_c__double__Sequence__fini(&msg->h);
  // color
  rosidl_runtime_c__double__Sequence__fini(&msg->color);
  // camera
}

bool
turtle_interfaces__msg__BoundingBoxes__are_equal(const turtle_interfaces__msg__BoundingBoxes * lhs, const turtle_interfaces__msg__BoundingBoxes * rhs)
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
  // x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // w
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->w), &(rhs->w)))
  {
    return false;
  }
  // h
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->h), &(rhs->h)))
  {
    return false;
  }
  // color
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // camera
  if (lhs->camera != rhs->camera) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__BoundingBoxes__copy(
  const turtle_interfaces__msg__BoundingBoxes * input,
  turtle_interfaces__msg__BoundingBoxes * output)
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
  // x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // w
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->w), &(output->w)))
  {
    return false;
  }
  // h
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->h), &(output->h)))
  {
    return false;
  }
  // color
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // camera
  output->camera = input->camera;
  return true;
}

turtle_interfaces__msg__BoundingBoxes *
turtle_interfaces__msg__BoundingBoxes__create()
{
  turtle_interfaces__msg__BoundingBoxes * msg = (turtle_interfaces__msg__BoundingBoxes *)malloc(sizeof(turtle_interfaces__msg__BoundingBoxes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__BoundingBoxes));
  bool success = turtle_interfaces__msg__BoundingBoxes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__BoundingBoxes__destroy(turtle_interfaces__msg__BoundingBoxes * msg)
{
  if (msg) {
    turtle_interfaces__msg__BoundingBoxes__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__BoundingBoxes__Sequence__init(turtle_interfaces__msg__BoundingBoxes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__BoundingBoxes * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__BoundingBoxes *)calloc(size, sizeof(turtle_interfaces__msg__BoundingBoxes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__BoundingBoxes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__BoundingBoxes__fini(&data[i - 1]);
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
turtle_interfaces__msg__BoundingBoxes__Sequence__fini(turtle_interfaces__msg__BoundingBoxes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__BoundingBoxes__fini(&array->data[i]);
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

turtle_interfaces__msg__BoundingBoxes__Sequence *
turtle_interfaces__msg__BoundingBoxes__Sequence__create(size_t size)
{
  turtle_interfaces__msg__BoundingBoxes__Sequence * array = (turtle_interfaces__msg__BoundingBoxes__Sequence *)malloc(sizeof(turtle_interfaces__msg__BoundingBoxes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__BoundingBoxes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__BoundingBoxes__Sequence__destroy(turtle_interfaces__msg__BoundingBoxes__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__BoundingBoxes__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__BoundingBoxes__Sequence__are_equal(const turtle_interfaces__msg__BoundingBoxes__Sequence * lhs, const turtle_interfaces__msg__BoundingBoxes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__BoundingBoxes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__BoundingBoxes__Sequence__copy(
  const turtle_interfaces__msg__BoundingBoxes__Sequence * input,
  turtle_interfaces__msg__BoundingBoxes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__BoundingBoxes);
    turtle_interfaces__msg__BoundingBoxes * data =
      (turtle_interfaces__msg__BoundingBoxes *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__BoundingBoxes__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__BoundingBoxes__fini(&data[i]);
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
    if (!turtle_interfaces__msg__BoundingBoxes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
