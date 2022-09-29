// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/cpu_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "turtle_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/cpu_status__struct.h"
#include "turtle_interfaces/msg/detail/cpu_status__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // core_temperatures, core_usage_percents, node_cpu_usage_percents
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // core_temperatures, core_usage_percents, node_cpu_usage_percents
#include "rosidl_runtime_c/string.h"  // core_temperature_names, node_cpu_usage_names
#include "rosidl_runtime_c/string_functions.h"  // core_temperature_names, node_cpu_usage_names
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


using _CpuStatus__ros_msg_type = turtle_interfaces__msg__CpuStatus;

static bool _CpuStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CpuStatus__ros_msg_type * ros_message = static_cast<const _CpuStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: cpu_usage_percent
  {
    cdr << ros_message->cpu_usage_percent;
  }

  // Field name: number_of_cores
  {
    cdr << ros_message->number_of_cores;
  }

  // Field name: core_usage_percents
  {
    size_t size = ros_message->core_usage_percents.size;
    auto array_ptr = ros_message->core_usage_percents.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: number_of_ros_nodes
  {
    cdr << ros_message->number_of_ros_nodes;
  }

  // Field name: node_cpu_usage_percents
  {
    size_t size = ros_message->node_cpu_usage_percents.size;
    auto array_ptr = ros_message->node_cpu_usage_percents.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: node_cpu_usage_names
  {
    size_t size = ros_message->node_cpu_usage_names.size;
    auto array_ptr = ros_message->node_cpu_usage_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: number_of_temperatures
  {
    cdr << ros_message->number_of_temperatures;
  }

  // Field name: core_temperatures
  {
    size_t size = ros_message->core_temperatures.size;
    auto array_ptr = ros_message->core_temperatures.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: core_temperature_names
  {
    size_t size = ros_message->core_temperature_names.size;
    auto array_ptr = ros_message->core_temperature_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _CpuStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CpuStatus__ros_msg_type * ros_message = static_cast<_CpuStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: cpu_usage_percent
  {
    cdr >> ros_message->cpu_usage_percent;
  }

  // Field name: number_of_cores
  {
    cdr >> ros_message->number_of_cores;
  }

  // Field name: core_usage_percents
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->core_usage_percents.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->core_usage_percents);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->core_usage_percents, size)) {
      fprintf(stderr, "failed to create array for field 'core_usage_percents'");
      return false;
    }
    auto array_ptr = ros_message->core_usage_percents.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: number_of_ros_nodes
  {
    cdr >> ros_message->number_of_ros_nodes;
  }

  // Field name: node_cpu_usage_percents
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->node_cpu_usage_percents.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->node_cpu_usage_percents);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->node_cpu_usage_percents, size)) {
      fprintf(stderr, "failed to create array for field 'node_cpu_usage_percents'");
      return false;
    }
    auto array_ptr = ros_message->node_cpu_usage_percents.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: node_cpu_usage_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->node_cpu_usage_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->node_cpu_usage_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->node_cpu_usage_names, size)) {
      fprintf(stderr, "failed to create array for field 'node_cpu_usage_names'");
      return false;
    }
    auto array_ptr = ros_message->node_cpu_usage_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'node_cpu_usage_names'\n");
        return false;
      }
    }
  }

  // Field name: number_of_temperatures
  {
    cdr >> ros_message->number_of_temperatures;
  }

  // Field name: core_temperatures
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->core_temperatures.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->core_temperatures);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->core_temperatures, size)) {
      fprintf(stderr, "failed to create array for field 'core_temperatures'");
      return false;
    }
    auto array_ptr = ros_message->core_temperatures.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: core_temperature_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->core_temperature_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->core_temperature_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->core_temperature_names, size)) {
      fprintf(stderr, "failed to create array for field 'core_temperature_names'");
      return false;
    }
    auto array_ptr = ros_message->core_temperature_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'core_temperature_names'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t get_serialized_size_turtle_interfaces__msg__CpuStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CpuStatus__ros_msg_type * ros_message = static_cast<const _CpuStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name cpu_usage_percent
  {
    size_t item_size = sizeof(ros_message->cpu_usage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_cores
  {
    size_t item_size = sizeof(ros_message->number_of_cores);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name core_usage_percents
  {
    size_t array_size = ros_message->core_usage_percents.size;
    auto array_ptr = ros_message->core_usage_percents.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_ros_nodes
  {
    size_t item_size = sizeof(ros_message->number_of_ros_nodes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name node_cpu_usage_percents
  {
    size_t array_size = ros_message->node_cpu_usage_percents.size;
    auto array_ptr = ros_message->node_cpu_usage_percents.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name node_cpu_usage_names
  {
    size_t array_size = ros_message->node_cpu_usage_names.size;
    auto array_ptr = ros_message->node_cpu_usage_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name number_of_temperatures
  {
    size_t item_size = sizeof(ros_message->number_of_temperatures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name core_temperatures
  {
    size_t array_size = ros_message->core_temperatures.size;
    auto array_ptr = ros_message->core_temperatures.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name core_temperature_names
  {
    size_t array_size = ros_message->core_temperature_names.size;
    auto array_ptr = ros_message->core_temperature_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CpuStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_turtle_interfaces__msg__CpuStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtle_interfaces
size_t max_serialized_size_turtle_interfaces__msg__CpuStatus(
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
  // member: cpu_usage_percent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_cores
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: core_usage_percents
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: number_of_ros_nodes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: node_cpu_usage_percents
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: node_cpu_usage_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: number_of_temperatures
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: core_temperatures
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: core_temperature_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CpuStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_turtle_interfaces__msg__CpuStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CpuStatus = {
  "turtle_interfaces::msg",
  "CpuStatus",
  _CpuStatus__cdr_serialize,
  _CpuStatus__cdr_deserialize,
  _CpuStatus__get_serialized_size,
  _CpuStatus__max_serialized_size
};

static rosidl_message_type_support_t _CpuStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CpuStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, CpuStatus)() {
  return &_CpuStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
