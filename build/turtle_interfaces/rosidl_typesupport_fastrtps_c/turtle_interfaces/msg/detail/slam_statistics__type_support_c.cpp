// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/slam_statistics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/slam_statistics__struct.h"
#include "turtle_interfaces/msg/detail/slam_statistics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SlamStatistics__ros_msg_type = turtle_interfaces__msg__SlamStatistics;

static bool _SlamStatistics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SlamStatistics__ros_msg_type * ros_message = static_cast<const _SlamStatistics__ros_msg_type *>(untyped_ros_message);
  // Field name: chi2
  {
    cdr << ros_message->chi2;
  }

  // Field name: num_vertices
  {
    cdr << ros_message->num_vertices;
  }

  // Field name: num_edges
  {
    cdr << ros_message->num_edges;
  }

  // Field name: total_optimizer_time
  {
    cdr << ros_message->total_optimizer_time;
  }

  // Field name: hessian_dim
  {
    cdr << ros_message->hessian_dim;
  }

  // Field name: cholesky_nnz
  {
    cdr << ros_message->cholesky_nnz;
  }

  // Field name: num_iterations
  {
    cdr << ros_message->num_iterations;
  }

  return true;
}

static bool _SlamStatistics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SlamStatistics__ros_msg_type * ros_message = static_cast<_SlamStatistics__ros_msg_type *>(untyped_ros_message);
  // Field name: chi2
  {
    cdr >> ros_message->chi2;
  }

  // Field name: num_vertices
  {
    cdr >> ros_message->num_vertices;
  }

  // Field name: num_edges
  {
    cdr >> ros_message->num_edges;
  }

  // Field name: total_optimizer_time
  {
    cdr >> ros_message->total_optimizer_time;
  }

  // Field name: hessian_dim
  {
    cdr >> ros_message->hessian_dim;
  }

  // Field name: cholesky_nnz
  {
    cdr >> ros_message->cholesky_nnz;
  }

  // Field name: num_iterations
  {
    cdr >> ros_message->num_iterations;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__SlamStatistics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SlamStatistics__ros_msg_type * ros_message = static_cast<const _SlamStatistics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name chi2
  {
    size_t item_size = sizeof(ros_message->chi2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_vertices
  {
    size_t item_size = sizeof(ros_message->num_vertices);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_edges
  {
    size_t item_size = sizeof(ros_message->num_edges);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_optimizer_time
  {
    size_t item_size = sizeof(ros_message->total_optimizer_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hessian_dim
  {
    size_t item_size = sizeof(ros_message->hessian_dim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cholesky_nnz
  {
    size_t item_size = sizeof(ros_message->cholesky_nnz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_iterations
  {
    size_t item_size = sizeof(ros_message->num_iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SlamStatistics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__SlamStatistics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__SlamStatistics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: chi2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_vertices
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_edges
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_optimizer_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hessian_dim
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cholesky_nnz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_iterations
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SlamStatistics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__SlamStatistics(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SlamStatistics = {
  "turtle_interfaces::msg",
  "SlamStatistics",
  _SlamStatistics__cdr_serialize,
  _SlamStatistics__cdr_deserialize,
  _SlamStatistics__get_serialized_size,
  _SlamStatistics__max_serialized_size
};

static rosidl_message_type_support_t _SlamStatistics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SlamStatistics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, SlamStatistics)() {
  return &_SlamStatistics__type_support;
}

#if defined(__cplusplus)
}
#endif
