// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/TsalSafeState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TSAL_SAFE_STATE__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__TSAL_SAFE_STATE__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/tsal_safe_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_TsalSafeState_safestate
{
public:
  explicit Init_TsalSafeState_safestate(::turtle_interfaces::msg::TsalSafeState & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::TsalSafeState safestate(::turtle_interfaces::msg::TsalSafeState::_safestate_type arg)
  {
    msg_.safestate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::TsalSafeState msg_;
};

class Init_TsalSafeState_header
{
public:
  Init_TsalSafeState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TsalSafeState_safestate header(::turtle_interfaces::msg::TsalSafeState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TsalSafeState_safestate(msg_);
  }

private:
  ::turtle_interfaces::msg::TsalSafeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::TsalSafeState>()
{
  return turtle_interfaces::msg::builder::Init_TsalSafeState_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TSAL_SAFE_STATE__BUILDER_HPP_
