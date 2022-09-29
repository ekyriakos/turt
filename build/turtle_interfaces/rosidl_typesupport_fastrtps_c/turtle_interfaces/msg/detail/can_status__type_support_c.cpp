// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/CanStatus.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/can_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/can_status__struct.h"
#include "turtle_interfaces/msg/detail/can_status__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_turtle_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CanStatus__ros_msg_type = turtle_interfaces__msg__CanStatus;

static bool _CanStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CanStatus__ros_msg_type * ros_message = static_cast<const _CanStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: message_timeouts
  {
    cdr << ros_message->message_timeouts;
  }

  // Field name: sensor_errors
  {
    cdr << ros_message->sensor_errors;
  }

  // Field name: tx_berrors
  {
    cdr << ros_message->tx_berrors;
  }

  // Field name: rx_berrors
  {
    cdr << ros_message->rx_berrors;
  }

  // Field name: tx_terrors
  {
    cdr << ros_message->tx_terrors;
  }

  // Field name: rx_terrors
  {
    cdr << ros_message->rx_terrors;
  }

  // Field name: bus_errors
  {
    cdr << ros_message->bus_errors;
  }

  // Field name: restarts
  {
    cdr << ros_message->restarts;
  }

  // Field name: can_state
  {
    cdr << ros_message->can_state;
  }

  return true;
}

static bool _CanStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CanStatus__ros_msg_type * ros_message = static_cast<_CanStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: message_timeouts
  {
    cdr >> ros_message->message_timeouts;
  }

  // Field name: sensor_errors
  {
    cdr >> ros_message->sensor_errors;
  }

  // Field name: tx_berrors
  {
    cdr >> ros_message->tx_berrors;
  }

  // Field name: rx_berrors
  {
    cdr >> ros_message->rx_berrors;
  }

  // Field name: tx_terrors
  {
    cdr >> ros_message->tx_terrors;
  }

  // Field name: rx_terrors
  {
    cdr >> ros_message->rx_terrors;
  }

  // Field name: bus_errors
  {
    cdr >> ros_message->bus_errors;
  }

  // Field name: restarts
  {
    cdr >> ros_message->restarts;
  }

  // Field name: can_state
  {
    cdr >> ros_message->can_state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__CanStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CanStatus__ros_msg_type * ros_message = static_cast<const _CanStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name message_timeouts
  {
    size_t item_size = sizeof(ros_message->message_timeouts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_errors
  {
    size_t item_size = sizeof(ros_message->sensor_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_berrors
  {
    size_t item_size = sizeof(ros_message->tx_berrors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_berrors
  {
    size_t item_size = sizeof(ros_message->rx_berrors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_terrors
  {
    size_t item_size = sizeof(ros_message->tx_terrors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_terrors
  {
    size_t item_size = sizeof(ros_message->rx_terrors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bus_errors
  {
    size_t item_size = sizeof(ros_message->bus_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name restarts
  {
    size_t item_size = sizeof(ros_message->restarts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_state
  {
    size_t item_size = sizeof(ros_message->can_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CanStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__CanStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__CanStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: message_timeouts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sensor_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tx_berrors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rx_berrors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tx_terrors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rx_terrors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bus_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: restarts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CanStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__CanStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CanStatus = {
  "turtle_interfaces::msg",
  "CanStatus",
  _CanStatus__cdr_serialize,
  _CanStatus__cdr_deserialize,
  _CanStatus__get_serialized_size,
  _CanStatus__max_serialized_size
};

static rosidl_message_type_support_t _CanStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CanStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, CanStatus)() {
  return &_CanStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
