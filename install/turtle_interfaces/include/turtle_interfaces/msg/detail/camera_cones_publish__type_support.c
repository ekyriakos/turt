// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/CameraConesPublish.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/camera_cones_publish__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/camera_cones_publish__functions.h"
#include "turtle_interfaces/msg/detail/camera_cones_publish__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__CameraConesPublish__init(message_memory);
}

void CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_fini_function(void * message_memory)
{
  turtle_interfaces__msg__CameraConesPublish__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__CameraConesPublish, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_camera_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__CameraConesPublish, left_camera_cones),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_camera_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__CameraConesPublish, center_camera_cones),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_camera_cones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__CameraConesPublish, right_camera_cones),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "CameraConesPublish",  // message name
  4,  // number of fields
  sizeof(turtle_interfaces__msg__CameraConesPublish),
  CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_member_array,  // message members
  CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_type_support_handle = {
  0,
  &CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, CameraConesPublish)() {
  CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_type_support_handle.typesupport_identifier) {
    CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CameraConesPublish__rosidl_typesupport_introspection_c__CameraConesPublish_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
