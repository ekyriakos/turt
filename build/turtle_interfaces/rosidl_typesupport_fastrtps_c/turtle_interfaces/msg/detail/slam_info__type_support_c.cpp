// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/SlamInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/slam_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/slam_info__struct.h"
#include "turtle_interfaces/msg/detail/slam_info__functions.h"
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
#include "turtle_interfaces/msg/detail/slam_statistics__functions.h"  // slam_statistics

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
size_t get_serialized_size_turtle_interfaces__msg__SlamStatistics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_turtle_interfaces__msg__SlamStatistics(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, SlamStatistics)();


using _SlamInfo__ros_msg_type = turtle_interfaces__msg__SlamInfo;

static bool _SlamInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SlamInfo__ros_msg_type * ros_message = static_cast<const _SlamInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: slam_statistics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, SlamStatistics
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->slam_statistics, cdr))
    {
      return false;
    }
  }

  // Field name: localization_mode
  {
    cdr << (ros_message->localization_mode ? true : false);
  }

  // Field name: sensor_cone_count
  {
    cdr << ros_message->sensor_cone_count;
  }

  // Field name: total_cone_count
  {
    cdr << ros_message->total_cone_count;
  }

  return true;
}

static bool _SlamInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SlamInfo__ros_msg_type * ros_message = static_cast<_SlamInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: slam_statistics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, SlamStatistics
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->slam_statistics))
    {
      return false;
    }
  }

  // Field name: localization_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->localization_mode = tmp ? true : false;
  }

  // Field name: sensor_cone_count
  {
    cdr >> ros_message->sensor_cone_count;
  }

  // Field name: total_cone_count
  {
    cdr >> ros_message->total_cone_count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__SlamInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SlamInfo__ros_msg_type * ros_message = static_cast<const _SlamInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name slam_statistics

  current_alignment += get_serialized_size_turtle_interfaces__msg__SlamStatistics(
    &(ros_message->slam_statistics), current_alignment);
  // field.name localization_mode
  {
    size_t item_size = sizeof(ros_message->localization_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_cone_count
  {
    size_t item_size = sizeof(ros_message->sensor_cone_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_cone_count
  {
    size_t item_size = sizeof(ros_message->total_cone_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SlamInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__SlamInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__SlamInfo(
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
  // member: slam_statistics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_turtle_interfaces__msg__SlamStatistics(
        full_bounded, current_alignment);
    }
  }
  // member: localization_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sensor_cone_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_cone_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SlamInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__SlamInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SlamInfo = {
  "turtle_interfaces::msg",
  "SlamInfo",
  _SlamInfo__cdr_serialize,
  _SlamInfo__cdr_deserialize,
  _SlamInfo__get_serialized_size,
  _SlamInfo__max_serialized_size
};

static rosidl_message_type_support_t _SlamInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SlamInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, SlamInfo)() {
  return &_SlamInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
