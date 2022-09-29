// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/ResStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/res_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_ResStatus_signal_strength
{
public:
  explicit Init_ResStatus_signal_strength(::turtle_interfaces::msg::ResStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::ResStatus signal_strength(::turtle_interfaces::msg::ResStatus::_signal_strength_type arg)
  {
    msg_.signal_strength = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::ResStatus msg_;
};

class Init_ResStatus_stop
{
public:
  explicit Init_ResStatus_stop(::turtle_interfaces::msg::ResStatus & msg)
  : msg_(msg)
  {}
  Init_ResStatus_signal_strength stop(::turtle_interfaces::msg::ResStatus::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_ResStatus_signal_strength(msg_);
  }

private:
  ::turtle_interfaces::msg::ResStatus msg_;
};

class Init_ResStatus_toggle
{
public:
  explicit Init_ResStatus_toggle(::turtle_interfaces::msg::ResStatus & msg)
  : msg_(msg)
  {}
  Init_ResStatus_stop toggle(::turtle_interfaces::msg::ResStatus::_toggle_type arg)
  {
    msg_.toggle = std::move(arg);
    return Init_ResStatus_stop(msg_);
  }

private:
  ::turtle_interfaces::msg::ResStatus msg_;
};

class Init_ResStatus_button
{
public:
  explicit Init_ResStatus_button(::turtle_interfaces::msg::ResStatus & msg)
  : msg_(msg)
  {}
  Init_ResStatus_toggle button(::turtle_interfaces::msg::ResStatus::_button_type arg)
  {
    msg_.button = std::move(arg);
    return Init_ResStatus_toggle(msg_);
  }

private:
  ::turtle_interfaces::msg::ResStatus msg_;
};

class Init_ResStatus_header
{
public:
  Init_ResStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResStatus_button header(::turtle_interfaces::msg::ResStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ResStatus_button(msg_);
  }

private:
  ::turtle_interfaces::msg::ResStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::ResStatus>()
{
  return turtle_interfaces::msg::builder::Init_ResStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__BUILDER_HPP_
