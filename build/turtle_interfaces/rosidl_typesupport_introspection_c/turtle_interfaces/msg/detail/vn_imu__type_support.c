// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/VnImu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/vn_imu__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/vn_imu__functions.h"
#include "turtle_interfaces/msg/detail/vn_imu__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `accel`
// Member `gyro`
#include "geometry_msgs/msg/vector3.h"
// Member `accel`
// Member `gyro`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VnImu__rosidl_typesupport_introspection_c__VnImu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__VnImu__init(message_memory);
}

void VnImu__rosidl_typesupport_introspection_c__VnImu_fini_function(void * message_memory)
{
  turtle_interfaces__msg__VnImu__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VnImu__rosidl_typesupport_introspection_c__VnImu_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__VnImu, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__VnImu, accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__VnImu, gyro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VnImu__rosidl_typesupport_introspection_c__VnImu_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "VnImu",  // message name
  3,  // number of fields
  sizeof(turtle_interfaces__msg__VnImu),
  VnImu__rosidl_typesupport_introspection_c__VnImu_message_member_array,  // message members
  VnImu__rosidl_typesupport_introspection_c__VnImu_init_function,  // function to initialize message memory (memory has to be allocated)
  VnImu__rosidl_typesupport_introspection_c__VnImu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VnImu__rosidl_typesupport_introspection_c__VnImu_message_type_support_handle = {
  0,
  &VnImu__rosidl_typesupport_introspection_c__VnImu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, VnImu)() {
  VnImu__rosidl_typesupport_introspection_c__VnImu_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  VnImu__rosidl_typesupport_introspection_c__VnImu_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  VnImu__rosidl_typesupport_introspection_c__VnImu_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!VnImu__rosidl_typesupport_introspection_c__VnImu_message_type_support_handle.typesupport_identifier) {
    VnImu__rosidl_typesupport_introspection_c__VnImu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VnImu__rosidl_typesupport_introspection_c__VnImu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
