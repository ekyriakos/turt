// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/CoolingInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/cooling_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__CoolingInfo__init(turtle_interfaces__msg__CoolingInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__CoolingInfo__fini(msg);
    return false;
  }
  // pumpsignal
  // accufanspwm
  // hallfanpwm
  // chassisfans
  return true;
}

void
turtle_interfaces__msg__CoolingInfo__fini(turtle_interfaces__msg__CoolingInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pumpsignal
  // accufanspwm
  // hallfanpwm
  // chassisfans
}

bool
turtle_interfaces__msg__CoolingInfo__are_equal(const turtle_interfaces__msg__CoolingInfo * lhs, const turtle_interfaces__msg__CoolingInfo * rhs)
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
  // pumpsignal
  if (lhs->pumpsignal != rhs->pumpsignal) {
    return false;
  }
  // accufanspwm
  if (lhs->accufanspwm != rhs->accufanspwm) {
    return false;
  }
  // hallfanpwm
  if (lhs->hallfanpwm != rhs->hallfanpwm) {
    return false;
  }
  // chassisfans
  if (lhs->chassisfans != rhs->chassisfans) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__CoolingInfo__copy(
  const turtle_interfaces__msg__CoolingInfo * input,
  turtle_interfaces__msg__CoolingInfo * output)
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
  // pumpsignal
  output->pumpsignal = input->pumpsignal;
  // accufanspwm
  output->accufanspwm = input->accufanspwm;
  // hallfanpwm
  output->hallfanpwm = input->hallfanpwm;
  // chassisfans
  output->chassisfans = input->chassisfans;
  return true;
}

turtle_interfaces__msg__CoolingInfo *
turtle_interfaces__msg__CoolingInfo__create()
{
  turtle_interfaces__msg__CoolingInfo * msg = (turtle_interfaces__msg__CoolingInfo *)malloc(sizeof(turtle_interfaces__msg__CoolingInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__CoolingInfo));
  bool success = turtle_interfaces__msg__CoolingInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__CoolingInfo__destroy(turtle_interfaces__msg__CoolingInfo * msg)
{
  if (msg) {
    turtle_interfaces__msg__CoolingInfo__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__CoolingInfo__Sequence__init(turtle_interfaces__msg__CoolingInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__CoolingInfo * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__CoolingInfo *)calloc(size, sizeof(turtle_interfaces__msg__CoolingInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__CoolingInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__CoolingInfo__fini(&data[i - 1]);
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
turtle_interfaces__msg__CoolingInfo__Sequence__fini(turtle_interfaces__msg__CoolingInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__CoolingInfo__fini(&array->data[i]);
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

turtle_interfaces__msg__CoolingInfo__Sequence *
turtle_interfaces__msg__CoolingInfo__Sequence__create(size_t size)
{
  turtle_interfaces__msg__CoolingInfo__Sequence * array = (turtle_interfaces__msg__CoolingInfo__Sequence *)malloc(sizeof(turtle_interfaces__msg__CoolingInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__CoolingInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__CoolingInfo__Sequence__destroy(turtle_interfaces__msg__CoolingInfo__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__CoolingInfo__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__CoolingInfo__Sequence__are_equal(const turtle_interfaces__msg__CoolingInfo__Sequence * lhs, const turtle_interfaces__msg__CoolingInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__CoolingInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__CoolingInfo__Sequence__copy(
  const turtle_interfaces__msg__CoolingInfo__Sequence * input,
  turtle_interfaces__msg__CoolingInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__CoolingInfo);
    turtle_interfaces__msg__CoolingInfo * data =
      (turtle_interfaces__msg__CoolingInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__CoolingInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__CoolingInfo__fini(&data[i]);
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
    if (!turtle_interfaces__msg__CoolingInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
