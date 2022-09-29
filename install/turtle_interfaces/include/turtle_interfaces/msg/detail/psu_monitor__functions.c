// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/PsuMonitor.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/psu_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__PsuMonitor__init(turtle_interfaces__msg__PsuMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__PsuMonitor__fini(msg);
    return false;
  }
  // v_in
  // v_ignition
  // v3_3
  // v5_0
  // v12_0
  // temperature
  return true;
}

void
turtle_interfaces__msg__PsuMonitor__fini(turtle_interfaces__msg__PsuMonitor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // v_in
  // v_ignition
  // v3_3
  // v5_0
  // v12_0
  // temperature
}

bool
turtle_interfaces__msg__PsuMonitor__are_equal(const turtle_interfaces__msg__PsuMonitor * lhs, const turtle_interfaces__msg__PsuMonitor * rhs)
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
  // v_in
  if (lhs->v_in != rhs->v_in) {
    return false;
  }
  // v_ignition
  if (lhs->v_ignition != rhs->v_ignition) {
    return false;
  }
  // v3_3
  if (lhs->v3_3 != rhs->v3_3) {
    return false;
  }
  // v5_0
  if (lhs->v5_0 != rhs->v5_0) {
    return false;
  }
  // v12_0
  if (lhs->v12_0 != rhs->v12_0) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__PsuMonitor__copy(
  const turtle_interfaces__msg__PsuMonitor * input,
  turtle_interfaces__msg__PsuMonitor * output)
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
  // v_in
  output->v_in = input->v_in;
  // v_ignition
  output->v_ignition = input->v_ignition;
  // v3_3
  output->v3_3 = input->v3_3;
  // v5_0
  output->v5_0 = input->v5_0;
  // v12_0
  output->v12_0 = input->v12_0;
  // temperature
  output->temperature = input->temperature;
  return true;
}

turtle_interfaces__msg__PsuMonitor *
turtle_interfaces__msg__PsuMonitor__create()
{
  turtle_interfaces__msg__PsuMonitor * msg = (turtle_interfaces__msg__PsuMonitor *)malloc(sizeof(turtle_interfaces__msg__PsuMonitor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__PsuMonitor));
  bool success = turtle_interfaces__msg__PsuMonitor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__PsuMonitor__destroy(turtle_interfaces__msg__PsuMonitor * msg)
{
  if (msg) {
    turtle_interfaces__msg__PsuMonitor__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__PsuMonitor__Sequence__init(turtle_interfaces__msg__PsuMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__PsuMonitor * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__PsuMonitor *)calloc(size, sizeof(turtle_interfaces__msg__PsuMonitor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__PsuMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__PsuMonitor__fini(&data[i - 1]);
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
turtle_interfaces__msg__PsuMonitor__Sequence__fini(turtle_interfaces__msg__PsuMonitor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__PsuMonitor__fini(&array->data[i]);
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

turtle_interfaces__msg__PsuMonitor__Sequence *
turtle_interfaces__msg__PsuMonitor__Sequence__create(size_t size)
{
  turtle_interfaces__msg__PsuMonitor__Sequence * array = (turtle_interfaces__msg__PsuMonitor__Sequence *)malloc(sizeof(turtle_interfaces__msg__PsuMonitor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__PsuMonitor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__PsuMonitor__Sequence__destroy(turtle_interfaces__msg__PsuMonitor__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__PsuMonitor__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__PsuMonitor__Sequence__are_equal(const turtle_interfaces__msg__PsuMonitor__Sequence * lhs, const turtle_interfaces__msg__PsuMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__PsuMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__PsuMonitor__Sequence__copy(
  const turtle_interfaces__msg__PsuMonitor__Sequence * input,
  turtle_interfaces__msg__PsuMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__PsuMonitor);
    turtle_interfaces__msg__PsuMonitor * data =
      (turtle_interfaces__msg__PsuMonitor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__PsuMonitor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__PsuMonitor__fini(&data[i]);
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
    if (!turtle_interfaces__msg__PsuMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
