// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ecu_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/ecu_params__struct.h"
#include "turtle_interfaces/msg/detail/ecu_params__functions.h"
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


using _ECUParams__ros_msg_type = turtle_interfaces__msg__ECUParams;

static bool _ECUParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ECUParams__ros_msg_type * ros_message = static_cast<const _ECUParams__ros_msg_type *>(untyped_ros_message);
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

  // Field name: inverter_rpm_percentage
  {
    cdr << ros_message->inverter_rpm_percentage;
  }

  // Field name: inverter_i_rms_max
  {
    cdr << ros_message->inverter_i_rms_max;
  }

  // Field name: inverter_i_rms_max_brake
  {
    cdr << ros_message->inverter_i_rms_max_brake;
  }

  // Field name: power_target_kw
  {
    cdr << ros_message->power_target_kw;
  }

  // Field name: servo_start_speed
  {
    cdr << ros_message->servo_start_speed;
  }

  // Field name: regen_min_speed
  {
    cdr << ros_message->regen_min_speed;
  }

  // Field name: ed_enable
  {
    cdr << (ros_message->ed_enable ? true : false);
  }

  // Field name: tc_enable
  {
    cdr << (ros_message->tc_enable ? true : false);
  }

  return true;
}

static bool _ECUParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ECUParams__ros_msg_type * ros_message = static_cast<_ECUParams__ros_msg_type *>(untyped_ros_message);
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

  // Field name: inverter_rpm_percentage
  {
    cdr >> ros_message->inverter_rpm_percentage;
  }

  // Field name: inverter_i_rms_max
  {
    cdr >> ros_message->inverter_i_rms_max;
  }

  // Field name: inverter_i_rms_max_brake
  {
    cdr >> ros_message->inverter_i_rms_max_brake;
  }

  // Field name: power_target_kw
  {
    cdr >> ros_message->power_target_kw;
  }

  // Field name: servo_start_speed
  {
    cdr >> ros_message->servo_start_speed;
  }

  // Field name: regen_min_speed
  {
    cdr >> ros_message->regen_min_speed;
  }

  // Field name: ed_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ed_enable = tmp ? true : false;
  }

  // Field name: tc_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tc_enable = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__ECUParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ECUParams__ros_msg_type * ros_message = static_cast<const _ECUParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name inverter_rpm_percentage
  {
    size_t item_size = sizeof(ros_message->inverter_rpm_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inverter_i_rms_max
  {
    size_t item_size = sizeof(ros_message->inverter_i_rms_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inverter_i_rms_max_brake
  {
    size_t item_size = sizeof(ros_message->inverter_i_rms_max_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_target_kw
  {
    size_t item_size = sizeof(ros_message->power_target_kw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_start_speed
  {
    size_t item_size = sizeof(ros_message->servo_start_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name regen_min_speed
  {
    size_t item_size = sizeof(ros_message->regen_min_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ed_enable
  {
    size_t item_size = sizeof(ros_message->ed_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tc_enable
  {
    size_t item_size = sizeof(ros_message->tc_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ECUParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__ECUParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__ECUParams(
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
  // member: inverter_rpm_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: inverter_i_rms_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: inverter_i_rms_max_brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: power_target_kw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_start_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: regen_min_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ed_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tc_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ECUParams__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__ECUParams(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ECUParams = {
  "turtle_interfaces::msg",
  "ECUParams",
  _ECUParams__cdr_serialize,
  _ECUParams__cdr_deserialize,
  _ECUParams__get_serialized_size,
  _ECUParams__max_serialized_size
};

static rosidl_message_type_support_t _ECUParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ECUParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, ECUParams)() {
  return &_ECUParams__type_support;
}

#if defined(__cplusplus)
}
#endif
