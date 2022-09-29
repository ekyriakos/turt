// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/mpc_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stages_velocity`
// Member `stages_steering_angle`
// Member `stages_force`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
turtle_interfaces__msg__MPCInfo__init(turtle_interfaces__msg__MPCInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    turtle_interfaces__msg__MPCInfo__fini(msg);
    return false;
  }
  // mpc_was_used
  // delta_commanded
  // delta_desired
  // mpc_microseconds
  // mpc_milliseconds
  // solver_milliseconds
  // velocity_desired
  // vx_max
  // vx
  // spline_length
  // number_of_waypoints
  // throttle_brake
  // torque
  // stages_velocity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->stages_velocity, 0)) {
    turtle_interfaces__msg__MPCInfo__fini(msg);
    return false;
  }
  // stages_steering_angle
  if (!rosidl_runtime_c__float__Sequence__init(&msg->stages_steering_angle, 0)) {
    turtle_interfaces__msg__MPCInfo__fini(msg);
    return false;
  }
  // stages_force
  if (!rosidl_runtime_c__float__Sequence__init(&msg->stages_force, 0)) {
    turtle_interfaces__msg__MPCInfo__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__msg__MPCInfo__fini(turtle_interfaces__msg__MPCInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mpc_was_used
  // delta_commanded
  // delta_desired
  // mpc_microseconds
  // mpc_milliseconds
  // solver_milliseconds
  // velocity_desired
  // vx_max
  // vx
  // spline_length
  // number_of_waypoints
  // throttle_brake
  // torque
  // stages_velocity
  rosidl_runtime_c__float__Sequence__fini(&msg->stages_velocity);
  // stages_steering_angle
  rosidl_runtime_c__float__Sequence__fini(&msg->stages_steering_angle);
  // stages_force
  rosidl_runtime_c__float__Sequence__fini(&msg->stages_force);
}

bool
turtle_interfaces__msg__MPCInfo__are_equal(const turtle_interfaces__msg__MPCInfo * lhs, const turtle_interfaces__msg__MPCInfo * rhs)
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
  // mpc_was_used
  if (lhs->mpc_was_used != rhs->mpc_was_used) {
    return false;
  }
  // delta_commanded
  if (lhs->delta_commanded != rhs->delta_commanded) {
    return false;
  }
  // delta_desired
  if (lhs->delta_desired != rhs->delta_desired) {
    return false;
  }
  // mpc_microseconds
  if (lhs->mpc_microseconds != rhs->mpc_microseconds) {
    return false;
  }
  // mpc_milliseconds
  if (lhs->mpc_milliseconds != rhs->mpc_milliseconds) {
    return false;
  }
  // solver_milliseconds
  if (lhs->solver_milliseconds != rhs->solver_milliseconds) {
    return false;
  }
  // velocity_desired
  if (lhs->velocity_desired != rhs->velocity_desired) {
    return false;
  }
  // vx_max
  if (lhs->vx_max != rhs->vx_max) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // spline_length
  if (lhs->spline_length != rhs->spline_length) {
    return false;
  }
  // number_of_waypoints
  if (lhs->number_of_waypoints != rhs->number_of_waypoints) {
    return false;
  }
  // throttle_brake
  if (lhs->throttle_brake != rhs->throttle_brake) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // stages_velocity
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->stages_velocity), &(rhs->stages_velocity)))
  {
    return false;
  }
  // stages_steering_angle
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->stages_steering_angle), &(rhs->stages_steering_angle)))
  {
    return false;
  }
  // stages_force
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->stages_force), &(rhs->stages_force)))
  {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__MPCInfo__copy(
  const turtle_interfaces__msg__MPCInfo * input,
  turtle_interfaces__msg__MPCInfo * output)
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
  // mpc_was_used
  output->mpc_was_used = input->mpc_was_used;
  // delta_commanded
  output->delta_commanded = input->delta_commanded;
  // delta_desired
  output->delta_desired = input->delta_desired;
  // mpc_microseconds
  output->mpc_microseconds = input->mpc_microseconds;
  // mpc_milliseconds
  output->mpc_milliseconds = input->mpc_milliseconds;
  // solver_milliseconds
  output->solver_milliseconds = input->solver_milliseconds;
  // velocity_desired
  output->velocity_desired = input->velocity_desired;
  // vx_max
  output->vx_max = input->vx_max;
  // vx
  output->vx = input->vx;
  // spline_length
  output->spline_length = input->spline_length;
  // number_of_waypoints
  output->number_of_waypoints = input->number_of_waypoints;
  // throttle_brake
  output->throttle_brake = input->throttle_brake;
  // torque
  output->torque = input->torque;
  // stages_velocity
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->stages_velocity), &(output->stages_velocity)))
  {
    return false;
  }
  // stages_steering_angle
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->stages_steering_angle), &(output->stages_steering_angle)))
  {
    return false;
  }
  // stages_force
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->stages_force), &(output->stages_force)))
  {
    return false;
  }
  return true;
}

turtle_interfaces__msg__MPCInfo *
turtle_interfaces__msg__MPCInfo__create()
{
  turtle_interfaces__msg__MPCInfo * msg = (turtle_interfaces__msg__MPCInfo *)malloc(sizeof(turtle_interfaces__msg__MPCInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__MPCInfo));
  bool success = turtle_interfaces__msg__MPCInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__MPCInfo__destroy(turtle_interfaces__msg__MPCInfo * msg)
{
  if (msg) {
    turtle_interfaces__msg__MPCInfo__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__MPCInfo__Sequence__init(turtle_interfaces__msg__MPCInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__MPCInfo * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__MPCInfo *)calloc(size, sizeof(turtle_interfaces__msg__MPCInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__MPCInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__MPCInfo__fini(&data[i - 1]);
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
turtle_interfaces__msg__MPCInfo__Sequence__fini(turtle_interfaces__msg__MPCInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__MPCInfo__fini(&array->data[i]);
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

turtle_interfaces__msg__MPCInfo__Sequence *
turtle_interfaces__msg__MPCInfo__Sequence__create(size_t size)
{
  turtle_interfaces__msg__MPCInfo__Sequence * array = (turtle_interfaces__msg__MPCInfo__Sequence *)malloc(sizeof(turtle_interfaces__msg__MPCInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__MPCInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__MPCInfo__Sequence__destroy(turtle_interfaces__msg__MPCInfo__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__MPCInfo__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__MPCInfo__Sequence__are_equal(const turtle_interfaces__msg__MPCInfo__Sequence * lhs, const turtle_interfaces__msg__MPCInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__MPCInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__MPCInfo__Sequence__copy(
  const turtle_interfaces__msg__MPCInfo__Sequence * input,
  turtle_interfaces__msg__MPCInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__MPCInfo);
    turtle_interfaces__msg__MPCInfo * data =
      (turtle_interfaces__msg__MPCInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__MPCInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__MPCInfo__fini(&data[i]);
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
    if (!turtle_interfaces__msg__MPCInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
