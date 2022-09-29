// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/DashBools.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtle_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "turtle_interfaces/msg/detail/dash_bools__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DashBools_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DashBools_type_support_ids_t;

static const _DashBools_type_support_ids_t _DashBools_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DashBools_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DashBools_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DashBools_type_support_symbol_names_t _DashBools_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtle_interfaces, msg, DashBools)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, DashBools)),
  }
};

typedef struct _DashBools_type_support_data_t
{
  void * data[2];
} _DashBools_type_support_data_t;

static _DashBools_type_support_data_t _DashBools_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DashBools_message_typesupport_map = {
  2,
  "turtle_interfaces",
  &_DashBools_message_typesupport_ids.typesupport_identifier[0],
  &_DashBools_message_typesupport_symbol_names.symbol_name[0],
  &_DashBools_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DashBools_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DashBools_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace turtle_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtle_interfaces, msg, DashBools)() {
  return &::turtle_interfaces::msg::rosidl_typesupport_c::DashBools_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
