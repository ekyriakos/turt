// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/InverterInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/inverter_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__InverterInfo__init(turtle_interfaces__msg__InverterInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__InverterInfo__fini(msg);
    return false;
  }
  // igbts_temp
  // irms_max
  // i_lim_in_use
  // motor_temp
  // irms
  // max_rpm
  return true;
}

void
turtle_interfaces__msg__InverterInfo__fini(turtle_interfaces__msg__InverterInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // igbts_temp
  // irms_max
  // i_lim_in_use
  // motor_temp
  // irms
  // max_rpm
}

bool
turtle_interfaces__msg__InverterInfo__are_equal(const turtle_interfaces__msg__InverterInfo * lhs, const turtle_interfaces__msg__InverterInfo * rhs)
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
  // igbts_temp
  if (lhs->igbts_temp != rhs->igbts_temp) {
    return false;
  }
  // irms_max
  if (lhs->irms_max != rhs->irms_max) {
    return false;
  }
  // i_lim_in_use
  if (lhs->i_lim_in_use != rhs->i_lim_in_use) {
    return false;
  }
  // motor_temp
  if (lhs->motor_temp != rhs->motor_temp) {
    return false;
  }
  // irms
  if (lhs->irms != rhs->irms) {
    return false;
  }
  // max_rpm
  if (lhs->max_rpm != rhs->max_rpm) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__InverterInfo__copy(
  const turtle_interfaces__msg__InverterInfo * input,
  turtle_interfaces__msg__InverterInfo * output)
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
  // igbts_temp
  output->igbts_temp = input->igbts_temp;
  // irms_max
  output->irms_max = input->irms_max;
  // i_lim_in_use
  output->i_lim_in_use = input->i_lim_in_use;
  // motor_temp
  output->motor_temp = input->motor_temp;
  // irms
  output->irms = input->irms;
  // max_rpm
  output->max_rpm = input->max_rpm;
  return true;
}

turtle_interfaces__msg__InverterInfo *
turtle_interfaces__msg__InverterInfo__create()
{
  turtle_interfaces__msg__InverterInfo * msg = (turtle_interfaces__msg__InverterInfo *)malloc(sizeof(turtle_interfaces__msg__InverterInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__InverterInfo));
  bool success = turtle_interfaces__msg__InverterInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__InverterInfo__destroy(turtle_interfaces__msg__InverterInfo * msg)
{
  if (msg) {
    turtle_interfaces__msg__InverterInfo__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__InverterInfo__Sequence__init(turtle_interfaces__msg__InverterInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__InverterInfo * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__InverterInfo *)calloc(size, sizeof(turtle_interfaces__msg__InverterInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__InverterInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__InverterInfo__fini(&data[i - 1]);
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
turtle_interfaces__msg__InverterInfo__Sequence__fini(turtle_interfaces__msg__InverterInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__InverterInfo__fini(&array->data[i]);
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

turtle_interfaces__msg__InverterInfo__Sequence *
turtle_interfaces__msg__InverterInfo__Sequence__create(size_t size)
{
  turtle_interfaces__msg__InverterInfo__Sequence * array = (turtle_interfaces__msg__InverterInfo__Sequence *)malloc(sizeof(turtle_interfaces__msg__InverterInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__InverterInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__InverterInfo__Sequence__destroy(turtle_interfaces__msg__InverterInfo__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__InverterInfo__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__InverterInfo__Sequence__are_equal(const turtle_interfaces__msg__InverterInfo__Sequence * lhs, const turtle_interfaces__msg__InverterInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__InverterInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__InverterInfo__Sequence__copy(
  const turtle_interfaces__msg__InverterInfo__Sequence * input,
  turtle_interfaces__msg__InverterInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__InverterInfo);
    turtle_interfaces__msg__InverterInfo * data =
      (turtle_interfaces__msg__InverterInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__InverterInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__InverterInfo__fini(&data[i]);
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
    if (!turtle_interfaces__msg__InverterInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
