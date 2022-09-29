// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/state_machine_state__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/state_machine_state__functions.h"
#include "turtle_interfaces/msg/detail/state_machine_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__StateMachineState__init(message_memory);
}

void StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_fini_function(void * message_memory)
{
  turtle_interfaces__msg__StateMachineState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_member_array[2] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__StateMachineState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "setfinished",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__StateMachineState, setfinished),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "StateMachineState",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__msg__StateMachineState),
  StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_member_array,  // message members
  StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_init_function,  // function to initialize message memory (memory has to be allocated)
  StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_type_support_handle = {
  0,
  &StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, StateMachineState)() {
  if (!StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_type_support_handle.typesupport_identifier) {
    StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StateMachineState__rosidl_typesupport_introspection_c__StateMachineState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
