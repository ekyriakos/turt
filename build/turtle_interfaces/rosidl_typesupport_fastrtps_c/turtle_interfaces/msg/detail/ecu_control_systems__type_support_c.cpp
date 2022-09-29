// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/ECUControlSystems.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ecu_control_systems__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/ecu_control_systems__struct.h"
#include "turtle_interfaces/msg/detail/ecu_control_systems__functions.h"
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


using _ECUControlSystems__ros_msg_type = turtle_interfaces__msg__ECUControlSystems;

static bool _ECUControlSystems__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ECUControlSystems__ros_msg_type * ros_message = static_cast<const _ECUControlSystems__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ed_active
  {
    cdr << (ros_message->ed_active ? true : false);
  }

  // Field name: tc_active
  {
    cdr << (ros_message->tc_active ? true : false);
  }

  // Field name: pl_active
  {
    cdr << (ros_message->pl_active ? true : false);
  }

  // Field name: regen_active
  {
    cdr << (ros_message->regen_active ? true : false);
  }

  return true;
}

static bool _ECUControlSystems__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ECUControlSystems__ros_msg_type * ros_message = static_cast<_ECUControlSystems__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ed_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ed_active = tmp ? true : false;
  }

  // Field name: tc_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tc_active = tmp ? true : false;
  }

  // Field name: pl_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pl_active = tmp ? true : false;
  }

  // Field name: regen_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->regen_active = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__ECUControlSystems(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ECUControlSystems__ros_msg_type * ros_message = static_cast<const _ECUControlSystems__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ed_active
  {
    size_t item_size = sizeof(ros_message->ed_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tc_active
  {
    size_t item_size = sizeof(ros_message->tc_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pl_active
  {
    size_t item_size = sizeof(ros_message->pl_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name regen_active
  {
    size_t item_size = sizeof(ros_message->regen_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ECUControlSystems__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__ECUControlSystems(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__ECUControlSystems(
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
  // member: ed_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tc_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pl_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: regen_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ECUControlSystems__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__ECUControlSystems(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ECUControlSystems = {
  "turtle_interfaces::msg",
  "ECUControlSystems",
  _ECUControlSystems__cdr_serialize,
  _ECUControlSystems__cdr_deserialize,
  _ECUControlSystems__get_serialized_size,
  _ECUControlSystems__max_serialized_size
};

static rosidl_message_type_support_t _ECUControlSystems__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ECUControlSystems,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, ECUControlSystems)() {
  return &_ECUControlSystems__type_support;
}

#if defined(__cplusplus)
}
#endif
