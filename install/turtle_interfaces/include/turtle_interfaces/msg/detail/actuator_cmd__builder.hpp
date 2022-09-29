// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/ActuatorCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/actuator_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActuatorCmd_steering_mode
{
public:
  explicit Init_ActuatorCmd_steering_mode(::turtle_interfaces::msg::ActuatorCmd & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::ActuatorCmd steering_mode(::turtle_interfaces::msg::ActuatorCmd::_steering_mode_type arg)
  {
    msg_.steering_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::ActuatorCmd msg_;
};

class Init_ActuatorCmd_steering
{
public:
  explicit Init_ActuatorCmd_steering(::turtle_interfaces::msg::ActuatorCmd & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmd_steering_mode steering(::turtle_interfaces::msg::ActuatorCmd::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_ActuatorCmd_steering_mode(msg_);
  }

private:
  ::turtle_interfaces::msg::ActuatorCmd msg_;
};

class Init_ActuatorCmd_throttle
{
public:
  explicit Init_ActuatorCmd_throttle(::turtle_interfaces::msg::ActuatorCmd & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmd_steering throttle(::turtle_interfaces::msg::ActuatorCmd::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_ActuatorCmd_steering(msg_);
  }

private:
  ::turtle_interfaces::msg::ActuatorCmd msg_;
};

class Init_ActuatorCmd_header
{
public:
  Init_ActuatorCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorCmd_throttle header(::turtle_interfaces::msg::ActuatorCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuatorCmd_throttle(msg_);
  }

private:
  ::turtle_interfaces::msg::ActuatorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::ActuatorCmd>()
{
  return turtle_interfaces::msg::builder::Init_ActuatorCmd_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__BUILDER_HPP_
