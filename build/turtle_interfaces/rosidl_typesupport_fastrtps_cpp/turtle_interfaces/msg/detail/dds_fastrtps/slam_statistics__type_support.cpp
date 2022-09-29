// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/slam_statistics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_interfaces/msg/detail/slam_statistics__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace turtle_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_serialize(
  const turtle_interfaces::msg::SlamStatistics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: chi2
  cdr << ros_message.chi2;
  // Member: num_vertices
  cdr << ros_message.num_vertices;
  // Member: num_edges
  cdr << ros_message.num_edges;
  // Member: total_optimizer_time
  cdr << ros_message.total_optimizer_time;
  // Member: hessian_dim
  cdr << ros_message.hessian_dim;
  // Member: cholesky_nnz
  cdr << ros_message.cholesky_nnz;
  // Member: num_iterations
  cdr << ros_message.num_iterations;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_interfaces::msg::SlamStatistics & ros_message)
{
  // Member: chi2
  cdr >> ros_message.chi2;

  // Member: num_vertices
  cdr >> ros_message.num_vertices;

  // Member: num_edges
  cdr >> ros_message.num_edges;

  // Member: total_optimizer_time
  cdr >> ros_message.total_optimizer_time;

  // Member: hessian_dim
  cdr >> ros_message.hessian_dim;

  // Member: cholesky_nnz
  cdr >> ros_message.cholesky_nnz;

  // Member: num_iterations
  cdr >> ros_message.num_iterations;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
get_serialized_size(
  const turtle_interfaces::msg::SlamStatistics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: chi2
  {
    size_t item_size = sizeof(ros_message.chi2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_vertices
  {
    size_t item_size = sizeof(ros_message.num_vertices);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_edges
  {
    size_t item_size = sizeof(ros_message.num_edges);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_optimizer_time
  {
    size_t item_size = sizeof(ros_message.total_optimizer_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hessian_dim
  {
    size_t item_size = sizeof(ros_message.hessian_dim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cholesky_nnz
  {
    size_t item_size = sizeof(ros_message.cholesky_nnz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_iterations
  {
    size_t item_size = sizeof(ros_message.num_iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
max_serialized_size_SlamStatistics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: chi2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: num_vertices
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_edges
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_optimizer_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hessian_dim
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cholesky_nnz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_iterations
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SlamStatistics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::SlamStatistics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SlamStatistics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_interfaces::msg::SlamStatistics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SlamStatistics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::SlamStatistics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SlamStatistics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SlamStatistics(full_bounded, 0);
}

static message_type_support_callbacks_t _SlamStatistics__callbacks = {
  "turtle_interfaces::msg",
  "SlamStatistics",
  _SlamStatistics__cdr_serialize,
  _SlamStatistics__cdr_deserialize,
  _SlamStatistics__get_serialized_size,
  _SlamStatistics__max_serialized_size
};

static rosidl_message_type_support_t _SlamStatistics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SlamStatistics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtle_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::msg::SlamStatistics>()
{
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_SlamStatistics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, msg, SlamStatistics)() {
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_SlamStatistics__handle;
}

#ifdef __cplusplus
}
#endif
