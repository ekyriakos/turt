// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/slam_statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
turtle_interfaces__msg__SlamStatistics__init(turtle_interfaces__msg__SlamStatistics * msg)
{
  if (!msg) {
    return false;
  }
  // chi2
  // num_vertices
  // num_edges
  // total_optimizer_time
  // hessian_dim
  // cholesky_nnz
  // num_iterations
  return true;
}

void
turtle_interfaces__msg__SlamStatistics__fini(turtle_interfaces__msg__SlamStatistics * msg)
{
  if (!msg) {
    return;
  }
  // chi2
  // num_vertices
  // num_edges
  // total_optimizer_time
  // hessian_dim
  // cholesky_nnz
  // num_iterations
}

bool
turtle_interfaces__msg__SlamStatistics__are_equal(const turtle_interfaces__msg__SlamStatistics * lhs, const turtle_interfaces__msg__SlamStatistics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // chi2
  if (lhs->chi2 != rhs->chi2) {
    return false;
  }
  // num_vertices
  if (lhs->num_vertices != rhs->num_vertices) {
    return false;
  }
  // num_edges
  if (lhs->num_edges != rhs->num_edges) {
    return false;
  }
  // total_optimizer_time
  if (lhs->total_optimizer_time != rhs->total_optimizer_time) {
    return false;
  }
  // hessian_dim
  if (lhs->hessian_dim != rhs->hessian_dim) {
    return false;
  }
  // cholesky_nnz
  if (lhs->cholesky_nnz != rhs->cholesky_nnz) {
    return false;
  }
  // num_iterations
  if (lhs->num_iterations != rhs->num_iterations) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__msg__SlamStatistics__copy(
  const turtle_interfaces__msg__SlamStatistics * input,
  turtle_interfaces__msg__SlamStatistics * output)
{
  if (!input || !output) {
    return false;
  }
  // chi2
  output->chi2 = input->chi2;
  // num_vertices
  output->num_vertices = input->num_vertices;
  // num_edges
  output->num_edges = input->num_edges;
  // total_optimizer_time
  output->total_optimizer_time = input->total_optimizer_time;
  // hessian_dim
  output->hessian_dim = input->hessian_dim;
  // cholesky_nnz
  output->cholesky_nnz = input->cholesky_nnz;
  // num_iterations
  output->num_iterations = input->num_iterations;
  return true;
}

turtle_interfaces__msg__SlamStatistics *
turtle_interfaces__msg__SlamStatistics__create()
{
  turtle_interfaces__msg__SlamStatistics * msg = (turtle_interfaces__msg__SlamStatistics *)malloc(sizeof(turtle_interfaces__msg__SlamStatistics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__SlamStatistics));
  bool success = turtle_interfaces__msg__SlamStatistics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__SlamStatistics__destroy(turtle_interfaces__msg__SlamStatistics * msg)
{
  if (msg) {
    turtle_interfaces__msg__SlamStatistics__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__SlamStatistics__Sequence__init(turtle_interfaces__msg__SlamStatistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__SlamStatistics * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__SlamStatistics *)calloc(size, sizeof(turtle_interfaces__msg__SlamStatistics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__SlamStatistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__SlamStatistics__fini(&data[i - 1]);
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
turtle_interfaces__msg__SlamStatistics__Sequence__fini(turtle_interfaces__msg__SlamStatistics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__SlamStatistics__fini(&array->data[i]);
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

turtle_interfaces__msg__SlamStatistics__Sequence *
turtle_interfaces__msg__SlamStatistics__Sequence__create(size_t size)
{
  turtle_interfaces__msg__SlamStatistics__Sequence * array = (turtle_interfaces__msg__SlamStatistics__Sequence *)malloc(sizeof(turtle_interfaces__msg__SlamStatistics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__SlamStatistics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__SlamStatistics__Sequence__destroy(turtle_interfaces__msg__SlamStatistics__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__SlamStatistics__Sequence__fini(array);
  }
  free(array);
}

bool
turtle_interfaces__msg__SlamStatistics__Sequence__are_equal(const turtle_interfaces__msg__SlamStatistics__Sequence * lhs, const turtle_interfaces__msg__SlamStatistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__msg__SlamStatistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__msg__SlamStatistics__Sequence__copy(
  const turtle_interfaces__msg__SlamStatistics__Sequence * input,
  turtle_interfaces__msg__SlamStatistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__msg__SlamStatistics);
    turtle_interfaces__msg__SlamStatistics * data =
      (turtle_interfaces__msg__SlamStatistics *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__msg__SlamStatistics__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtle_interfaces__msg__SlamStatistics__fini(&data[i]);
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
    if (!turtle_interfaces__msg__SlamStatistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
