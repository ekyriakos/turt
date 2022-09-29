// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/ActuatorCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/actuator_cmd__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/actuator_cmd__functions.h"
#include "turtle_interfaces/msg/detail/actuator_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__ActuatorCmd__init(message_memory);
}

void ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_fini_function(void * message_memory)
{
  turtle_interfaces__msg__ActuatorCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__ActuatorCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__ActuatorCmd, throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__ActuatorCmd, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__ActuatorCmd, steering_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "ActuatorCmd",  // message name
  4,  // number of fields
  sizeof(turtle_interfaces__msg__ActuatorCmd),
  ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_member_array,  // message members
  ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_type_support_handle = {
  0,
  &ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, ActuatorCmd)() {
  ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_type_support_handle.typesupport_identifier) {
    ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActuatorCmd__rosidl_typesupport_introspection_c__ActuatorCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
