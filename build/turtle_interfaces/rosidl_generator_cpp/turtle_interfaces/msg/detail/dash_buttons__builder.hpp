// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/DashButtons.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/dash_buttons__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_DashButtons_cooling_button
{
public:
  explicit Init_DashButtons_cooling_button(::turtle_interfaces::msg::DashButtons & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::DashButtons cooling_button(::turtle_interfaces::msg::DashButtons::_cooling_button_type arg)
  {
    msg_.cooling_button = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::DashButtons msg_;
};

class Init_DashButtons_adact
{
public:
  explicit Init_DashButtons_adact(::turtle_interfaces::msg::DashButtons & msg)
  : msg_(msg)
  {}
  Init_DashButtons_cooling_button adact(::turtle_interfaces::msg::DashButtons::_adact_type arg)
  {
    msg_.adact = std::move(arg);
    return Init_DashButtons_cooling_button(msg_);
  }

private:
  ::turtle_interfaces::msg::DashButtons msg_;
};

class Init_DashButtons_start
{
public:
  explicit Init_DashButtons_start(::turtle_interfaces::msg::DashButtons & msg)
  : msg_(msg)
  {}
  Init_DashButtons_adact start(::turtle_interfaces::msg::DashButtons::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_DashButtons_adact(msg_);
  }

private:
  ::turtle_interfaces::msg::DashButtons msg_;
};

class Init_DashButtons_enabletoggle
{
public:
  explicit Init_DashButtons_enabletoggle(::turtle_interfaces::msg::DashButtons & msg)
  : msg_(msg)
  {}
  Init_DashButtons_start enabletoggle(::turtle_interfaces::msg::DashButtons::_enabletoggle_type arg)
  {
    msg_.enabletoggle = std::move(arg);
    return Init_DashButtons_start(msg_);
  }

private:
  ::turtle_interfaces::msg::DashButtons msg_;
};

class Init_DashButtons_header
{
public:
  Init_DashButtons_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DashButtons_enabletoggle header(::turtle_interfaces::msg::DashButtons::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DashButtons_enabletoggle(msg_);
  }

private:
  ::turtle_interfaces::msg::DashButtons msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::DashButtons>()
{
  return turtle_interfaces::msg::builder::Init_DashButtons_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__BUILDER_HPP_
