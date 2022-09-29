// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/Isabellen.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/isabellen__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__Isabellen__init(turtle_interfaces__msg__Isabellen * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__Isabellen__fini(msg);
    return false;
  }
  // idc
  // vdc
  // pdc
  // energy
  return true;
}

void
turtle_interfaces__msg__Isabellen__fini(turtle_interfaces__msg__Isabellen * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // idc
  // vdc
  // pdc
  // energy
}

bool
turtle_interfaces__msg__Isabellen__are_equal(const turtle_interfaces__msg__Isabellen * lhs, const turtle_interfaces__msg__Isabellen * rhs)
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
  // idc
  if (lhs->idc != rhs->idc) {
    return false;
  }
  // vdc
  if (lhs->vdc != rhs->vdc) {
    return false;
  }
  // pdc
  if (lhs->pdc != rhs->pdc) {
    return false;
  }
  // energy
  if (lhs->energy != rhs->energy) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__Isabellen__copy(
  const turtle_interfaces__msg__Isabellen * input,
  turtle_interfaces__msg__Isabellen * output)
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
  // idc
  output->idc = input->idc;
  // vdc
  output->vdc = input->vdc;
  // pdc
  output->pdc = input->pdc;
  // energy
  output->energy = input->energy;
  return true;
}

turtle_interfaces__msg__Isabellen *
turtle_interfaces__msg__Isabellen__create()
{
  turtle_interfaces__msg__Isabellen * msg = (turtle_interfaces__msg__Isabellen *)malloc(sizeof(turtle_interfaces__msg__Isabellen));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__Isabellen));
  bool success = turtle_interfaces__msg__Isabellen__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__Isabellen__destroy(turtle_interfaces__msg__Isabellen * msg)
{
  if (msg) {
    turtle_interfaces__msg__Isabellen__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__Isabellen__Sequence__init(turtle_interfaces__msg__Isabellen__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__Isabellen * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__Isabellen *)calloc(size, sizeof(turtle_interfaces__msg__Isabellen));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__Isabellen__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__Isabellen__fini(&data[i - 1]);
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
turtle_interfaces__msg__Isabellen__Sequence__fini(turtle_interfaces__msg__Isabellen__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__Isabellen__fini(&array->data[i]);
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

turtle_interfaces__msg__Isabellen__Sequence *
turtle_interfaces__msg__Isabellen__Sequence__create(size_t size)
{
  turtle_interfaces__msg__Isabellen__Sequence * array = (turtle_interfaces__msg__Isabellen__Sequence *)malloc(sizeof(turtle_interfaces__msg__Isabellen__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__Isabellen__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__Isabellen__Sequence__destroy(turtle_interfaces__msg__Isabellen__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__Isabellen__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__Isabellen__Sequence__are_equal(const turtle_interfaces__msg__Isabellen__Sequence * lhs, const turtle_interfaces__msg__Isabellen__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__Isabellen__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__Isabellen__Sequence__copy(
  const turtle_interfaces__msg__Isabellen__Sequence * input,
  turtle_interfaces__msg__Isabellen__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__Isabellen);
    turtle_interfaces__msg__Isabellen * data =
      (turtle_interfaces__msg__Isabellen *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__Isabellen__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__Isabellen__fini(&data[i]);
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
    if (!turtle_interfaces__msg__Isabellen__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
