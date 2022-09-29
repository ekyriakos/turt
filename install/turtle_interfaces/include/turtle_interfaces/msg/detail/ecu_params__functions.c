// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ecu_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
turtle_interfaces__msg__ECUParams__init(turtle_interfaces__msg__ECUParams * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__ECUParams__fini(msg);
    return false;
  }
  // inverter_rpm_percentage
  // inverter_i_rms_max
  // inverter_i_rms_max_brake
  // power_target_kw
  // servo_start_speed
  // regen_min_speed
  // ed_enable
  // tc_enable
  return true;
}

void
turtle_interfaces__msg__ECUParams__fini(turtle_interfaces__msg__ECUParams * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // inverter_rpm_percentage
  // inverter_i_rms_max
  // inverter_i_rms_max_brake
  // power_target_kw
  // servo_start_speed
  // regen_min_speed
  // ed_enable
  // tc_enable
}

bool
turtle_interfaces__msg__ECUParams__are_equal(const turtle_interfaces__msg__ECUParams * lhs, const turtle_interfaces__msg__ECUParams * rhs)
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
  // inverter_rpm_percentage
  if (lhs->inverter_rpm_percentage != rhs->inverter_rpm_percentage) {
    return false;
  }
  // inverter_i_rms_max
  if (lhs->inverter_i_rms_max != rhs->inverter_i_rms_max) {
    return false;
  }
  // inverter_i_rms_max_brake
  if (lhs->inverter_i_rms_max_brake != rhs->inverter_i_rms_max_brake) {
    return false;
  }
  // power_target_kw
  if (lhs->power_target_kw != rhs->power_target_kw) {
    return false;
  }
  // servo_start_speed
  if (lhs->servo_start_speed != rhs->servo_start_speed) {
    return false;
  }
  // regen_min_speed
  if (lhs->regen_min_speed != rhs->regen_min_speed) {
    return false;
  }
  // ed_enable
  if (lhs->ed_enable != rhs->ed_enable) {
    return false;
  }
  // tc_enable
  if (lhs->tc_enable != rhs->tc_enable) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__ECUParams__copy(
  const turtle_interfaces__msg__ECUParams * input,
  turtle_interfaces__msg__ECUParams * output)
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
  // inverter_rpm_percentage
  output->inverter_rpm_percentage = input->inverter_rpm_percentage;
  // inverter_i_rms_max
  output->inverter_i_rms_max = input->inverter_i_rms_max;
  // inverter_i_rms_max_brake
  output->inverter_i_rms_max_brake = input->inverter_i_rms_max_brake;
  // power_target_kw
  output->power_target_kw = input->power_target_kw;
  // servo_start_speed
  output->servo_start_speed = input->servo_start_speed;
  // regen_min_speed
  output->regen_min_speed = input->regen_min_speed;
  // ed_enable
  output->ed_enable = input->ed_enable;
  // tc_enable
  output->tc_enable = input->tc_enable;
  return true;
}

turtle_interfaces__msg__ECUParams *
turtle_interfaces__msg__ECUParams__create()
{
  turtle_interfaces__msg__ECUParams * msg = (turtle_interfaces__msg__ECUParams *)malloc(sizeof(turtle_interfaces__msg__ECUParams));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__ECUParams));
  bool success = turtle_interfaces__msg__ECUParams__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__ECUParams__destroy(turtle_interfaces__msg__ECUParams * msg)
{
  if (msg) {
    turtle_interfaces__msg__ECUParams__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__ECUParams__Sequence__init(turtle_interfaces__msg__ECUParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__ECUParams * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__ECUParams *)calloc(size, sizeof(turtle_interfaces__msg__ECUParams));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__ECUParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__ECUParams__fini(&data[i - 1]);
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
turtle_interfaces__msg__ECUParams__Sequence__fini(turtle_interfaces__msg__ECUParams__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__ECUParams__fini(&array->data[i]);
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

turtle_interfaces__msg__ECUParams__Sequence *
turtle_interfaces__msg__ECUParams__Sequence__create(size_t size)
{
  turtle_interfaces__msg__ECUParams__Sequence * array = (turtle_interfaces__msg__ECUParams__Sequence *)malloc(sizeof(turtle_interfaces__msg__ECUParams__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__ECUParams__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__ECUParams__Sequence__destroy(turtle_interfaces__msg__ECUParams__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__ECUParams__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__ECUParams__Sequence__are_equal(const turtle_interfaces__msg__ECUParams__Sequence * lhs, const turtle_interfaces__msg__ECUParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__ECUParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__ECUParams__Sequence__copy(
  const turtle_interfaces__msg__ECUParams__Sequence * input,
  turtle_interfaces__msg__ECUParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__ECUParams);
    turtle_interfaces__msg__ECUParams * data =
      (turtle_interfaces__msg__ECUParams *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__ECUParams__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__ECUParams__fini(&data[i]);
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
    if (!turtle_interfaces__msg__ECUParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
