// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/RosStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/ros_status__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/ros_status__functions.h"
#include "turtle_interfaces/msg/detail/ros_status__struct.h"


// Include directives for member types
// Member `node_names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RosStatus__rosidl_typesupport_introspection_c__RosStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__RosStatus__init(message_memory);
}

void RosStatus__rosidl_typesupport_introspection_c__RosStatus_fini_function(void * message_memory)
{
  turtle_interfaces__msg__RosStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_member_array[1] = {
  {
    "node_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__RosStatus, node_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "RosStatus",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__msg__RosStatus),
  RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_member_array,  // message members
  RosStatus__rosidl_typesupport_introspection_c__RosStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RosStatus__rosidl_typesupport_introspection_c__RosStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_type_support_handle = {
  0,
  &RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, RosStatus)() {
  if (!RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_type_support_handle.typesupport_identifier) {
    RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RosStatus__rosidl_typesupport_introspection_c__RosStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
