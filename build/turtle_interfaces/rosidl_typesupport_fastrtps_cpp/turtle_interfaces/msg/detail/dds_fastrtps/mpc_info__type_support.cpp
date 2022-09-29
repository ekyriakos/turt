// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/mpc_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "turtle_interfaces/msg/detail/mpc_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace turtle_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_serialize(
  const turtle_interfaces::msg::MPCInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: mpc_was_used
  cdr << ros_message.mpc_was_used;
  // Member: delta_commanded
  cdr << ros_message.delta_commanded;
  // Member: delta_desired
  cdr << ros_message.delta_desired;
  // Member: mpc_microseconds
  cdr << ros_message.mpc_microseconds;
  // Member: mpc_milliseconds
  cdr << ros_message.mpc_milliseconds;
  // Member: solver_milliseconds
  cdr << ros_message.solver_milliseconds;
  // Member: velocity_desired
  cdr << ros_message.velocity_desired;
  // Member: vx_max
  cdr << ros_message.vx_max;
  // Member: vx
  cdr << ros_message.vx;
  // Member: spline_length
  cdr << ros_message.spline_length;
  // Member: number_of_waypoints
  cdr << ros_message.number_of_waypoints;
  // Member: throttle_brake
  cdr << ros_message.throttle_brake;
  // Member: torque
  cdr << ros_message.torque;
  // Member: stages_velocity
  {
    cdr << ros_message.stages_velocity;
  }
  // Member: stages_steering_angle
  {
    cdr << ros_message.stages_steering_angle;
  }
  // Member: stages_force
  {
    cdr << ros_message.stages_force;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  turtle_interfaces::msg::MPCInfo & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: mpc_was_used
  cdr >> ros_message.mpc_was_used;

  // Member: delta_commanded
  cdr >> ros_message.delta_commanded;

  // Member: delta_desired
  cdr >> ros_message.delta_desired;

  // Member: mpc_microseconds
  cdr >> ros_message.mpc_microseconds;

  // Member: mpc_milliseconds
  cdr >> ros_message.mpc_milliseconds;

  // Member: solver_milliseconds
  cdr >> ros_message.solver_milliseconds;

  // Member: velocity_desired
  cdr >> ros_message.velocity_desired;

  // Member: vx_max
  cdr >> ros_message.vx_max;

  // Member: vx
  cdr >> ros_message.vx;

  // Member: spline_length
  cdr >> ros_message.spline_length;

  // Member: number_of_waypoints
  cdr >> ros_message.number_of_waypoints;

  // Member: throttle_brake
  cdr >> ros_message.throttle_brake;

  // Member: torque
  cdr >> ros_message.torque;

  // Member: stages_velocity
  {
    cdr >> ros_message.stages_velocity;
  }

  // Member: stages_steering_angle
  {
    cdr >> ros_message.stages_steering_angle;
  }

  // Member: stages_force
  {
    cdr >> ros_message.stages_force;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
get_serialized_size(
  const turtle_interfaces::msg::MPCInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: mpc_was_used
  {
    size_t item_size = sizeof(ros_message.mpc_was_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_commanded
  {
    size_t item_size = sizeof(ros_message.delta_commanded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_desired
  {
    size_t item_size = sizeof(ros_message.delta_desired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mpc_microseconds
  {
    size_t item_size = sizeof(ros_message.mpc_microseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mpc_milliseconds
  {
    size_t item_size = sizeof(ros_message.mpc_milliseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: solver_milliseconds
  {
    size_t item_size = sizeof(ros_message.solver_milliseconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_desired
  {
    size_t item_size = sizeof(ros_message.velocity_desired);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx_max
  {
    size_t item_size = sizeof(ros_message.vx_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx
  {
    size_t item_size = sizeof(ros_message.vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spline_length
  {
    size_t item_size = sizeof(ros_message.spline_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_waypoints
  {
    size_t item_size = sizeof(ros_message.number_of_waypoints);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_brake
  {
    size_t item_size = sizeof(ros_message.throttle_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque
  {
    size_t item_size = sizeof(ros_message.torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stages_velocity
  {
    size_t array_size = ros_message.stages_velocity.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.stages_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stages_steering_angle
  {
    size_t array_size = ros_message.stages_steering_angle.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.stages_steering_angle[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stages_force
  {
    size_t array_size = ros_message.stages_force.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.stages_force[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_interfaces
max_serialized_size_MPCInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: mpc_was_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: delta_commanded
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_desired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mpc_microseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mpc_milliseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: solver_milliseconds
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity_desired
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vx_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: spline_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: number_of_waypoints
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stages_velocity
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stages_steering_angle
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stages_force
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MPCInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::MPCInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MPCInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<turtle_interfaces::msg::MPCInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MPCInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const turtle_interfaces::msg::MPCInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MPCInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MPCInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _MPCInfo__callbacks = {
  "turtle_interfaces::msg",
  "MPCInfo",
  _MPCInfo__cdr_serialize,
  _MPCInfo__cdr_deserialize,
  _MPCInfo__get_serialized_size,
  _MPCInfo__max_serialized_size
};

static rosidl_message_type_support_t _MPCInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MPCInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace turtle_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::msg::MPCInfo>()
{
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_MPCInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, msg, MPCInfo)() {
  return &turtle_interfaces::msg::typesupport_fastrtps_cpp::_MPCInfo__handle;
}

#ifdef __cplusplus
}
#endif
