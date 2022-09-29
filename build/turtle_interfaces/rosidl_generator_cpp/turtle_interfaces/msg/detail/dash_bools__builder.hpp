// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/DashBools.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DASH_BOOLS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DASH_BOOLS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/dash_bools__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_DashBools_greentsal
{
public:
  explicit Init_DashBools_greentsal(::turtle_interfaces::msg::DashBools & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::DashBools greentsal(::turtle_interfaces::msg::DashBools::_greentsal_type arg)
  {
    msg_.greentsal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::DashBools msg_;
};

class Init_DashBools_asbled
{
public:
  explicit Init_DashBools_asbled(::turtle_interfaces::msg::DashBools & msg)
  : msg_(msg)
  {}
  Init_DashBools_greentsal asbled(::turtle_interfaces::msg::DashBools::_asbled_type arg)
  {
    msg_.asbled = std::move(arg);
    return Init_DashBools_greentsal(msg_);
  }

private:
  ::turtle_interfaces::msg::DashBools msg_;
};

class Init_DashBools_enableout
{
public:
  explicit Init_DashBools_enableout(::turtle_interfaces::msg::DashBools & msg)
  : msg_(msg)
  {}
  Init_DashBools_asbled enableout(::turtle_interfaces::msg::DashBools::_enableout_type arg)
  {
    msg_.enableout = std::move(arg);
    return Init_DashBools_asbled(msg_);
  }

private:
  ::turtle_interfaces::msg::DashBools msg_;
};

class Init_DashBools_safestate
{
public:
  explicit Init_DashBools_safestate(::turtle_interfaces::msg::DashBools & msg)
  : msg_(msg)
  {}
  Init_DashBools_enableout safestate(::turtle_interfaces::msg::DashBools::_safestate_type arg)
  {
    msg_.safestate = std::move(arg);
    return Init_DashBools_enableout(msg_);
  }

private:
  ::turtle_interfaces::msg::DashBools msg_;
};

class Init_DashBools_buzzer
{
public:
  explicit Init_DashBools_buzzer(::turtle_interfaces::msg::DashBools & msg)
  : msg_(msg)
  {}
  Init_DashBools_safestate buzzer(::turtle_interfaces::msg::DashBools::_buzzer_type arg)
  {
    msg_.buzzer = std::move(arg);
    return Init_DashBools_safestate(msg_);
  }

private:
  ::turtle_interfaces::msg::DashBools msg_;
};

class Init_DashBools_header
{
public:
  Init_DashBools_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DashBools_buzzer header(::turtle_interfaces::msg::DashBools::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DashBools_buzzer(msg_);
  }

private:
  ::turtle_interfaces::msg::DashBools msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::DashBools>()
{
  return turtle_interfaces::msg::builder::Init_DashBools_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DASH_BOOLS__BUILDER_HPP_
