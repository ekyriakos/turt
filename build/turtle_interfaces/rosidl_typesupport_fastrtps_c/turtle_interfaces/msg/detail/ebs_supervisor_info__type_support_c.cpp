// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__struct.h"
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__functions.h"
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


using _EbsSupervisorInfo__ros_msg_type = turtle_interfaces__msg__EbsSupervisorInfo;

static bool _EbsSupervisorInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EbsSupervisorInfo__ros_msg_type * ros_message = static_cast<const _EbsSupervisorInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: asmsstate
  {
    cdr << (ros_message->asmsstate ? true : false);
  }

  // Field name: tsmsout
  {
    cdr << (ros_message->tsmsout ? true : false);
  }

  // Field name: ebsstatus
  {
    cdr << ros_message->ebsstatus;
  }

  // Field name: ebsled
  {
    cdr << (ros_message->ebsled ? true : false);
  }

  // Field name: servicebrakestatus
  {
    cdr << ros_message->servicebrakestatus;
  }

  // Field name: initialchecked
  {
    cdr << (ros_message->initialchecked ? true : false);
  }

  // Field name: initialcheckstage
  {
    cdr << ros_message->initialcheckstage;
  }

  // Field name: monitortankpressure
  {
    cdr << (ros_message->monitortankpressure ? true : false);
  }

  // Field name: monitorbrakepressure
  {
    cdr << (ros_message->monitorbrakepressure ? true : false);
  }

  // Field name: monitorservocheck
  {
    cdr << (ros_message->monitorservocheck ? true : false);
  }

  // Field name: monitorapu
  {
    cdr << (ros_message->monitorapu ? true : false);
  }

  return true;
}

static bool _EbsSupervisorInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EbsSupervisorInfo__ros_msg_type * ros_message = static_cast<_EbsSupervisorInfo__ros_msg_type *>(untyped_ros_message);
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

  // Field name: asmsstate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->asmsstate = tmp ? true : false;
  }

  // Field name: tsmsout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tsmsout = tmp ? true : false;
  }

  // Field name: ebsstatus
  {
    cdr >> ros_message->ebsstatus;
  }

  // Field name: ebsled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ebsled = tmp ? true : false;
  }

  // Field name: servicebrakestatus
  {
    cdr >> ros_message->servicebrakestatus;
  }

  // Field name: initialchecked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->initialchecked = tmp ? true : false;
  }

  // Field name: initialcheckstage
  {
    cdr >> ros_message->initialcheckstage;
  }

  // Field name: monitortankpressure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->monitortankpressure = tmp ? true : false;
  }

  // Field name: monitorbrakepressure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->monitorbrakepressure = tmp ? true : false;
  }

  // Field name: monitorservocheck
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->monitorservocheck = tmp ? true : false;
  }

  // Field name: monitorapu
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->monitorapu = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__EbsSupervisorInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EbsSupervisorInfo__ros_msg_type * ros_message = static_cast<const _EbsSupervisorInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name asmsstate
  {
    size_t item_size = sizeof(ros_message->asmsstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tsmsout
  {
    size_t item_size = sizeof(ros_message->tsmsout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ebsstatus
  {
    size_t item_size = sizeof(ros_message->ebsstatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ebsled
  {
    size_t item_size = sizeof(ros_message->ebsled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servicebrakestatus
  {
    size_t item_size = sizeof(ros_message->servicebrakestatus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initialchecked
  {
    size_t item_size = sizeof(ros_message->initialchecked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initialcheckstage
  {
    size_t item_size = sizeof(ros_message->initialcheckstage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name monitortankpressure
  {
    size_t item_size = sizeof(ros_message->monitortankpressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name monitorbrakepressure
  {
    size_t item_size = sizeof(ros_message->monitorbrakepressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name monitorservocheck
  {
    size_t item_size = sizeof(ros_message->monitorservocheck);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name monitorapu
  {
    size_t item_size = sizeof(ros_message->monitorapu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EbsSupervisorInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__EbsSupervisorInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__EbsSupervisorInfo(
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
  // member: asmsstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tsmsout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ebsstatus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ebsled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: servicebrakestatus
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: initialchecked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: initialcheckstage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: monitortankpressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: monitorbrakepressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: monitorservocheck
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: monitorapu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EbsSupervisorInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__EbsSupervisorInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EbsSupervisorInfo = {
  "turtle_interfaces::msg",
  "EbsSupervisorInfo",
  _EbsSupervisorInfo__cdr_serialize,
  _EbsSupervisorInfo__cdr_deserialize,
  _EbsSupervisorInfo__get_serialized_size,
  _EbsSupervisorInfo__max_serialized_size
};

static rosidl_message_type_support_t _EbsSupervisorInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EbsSupervisorInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, EbsSupervisorInfo)() {
  return &_EbsSupervisorInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
