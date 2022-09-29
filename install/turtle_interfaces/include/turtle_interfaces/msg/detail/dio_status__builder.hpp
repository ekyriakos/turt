// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/DioStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/dio_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_DioStatus_di_state
{
public:
  explicit Init_DioStatus_di_state(::turtle_interfaces::msg::DioStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::DioStatus di_state(::turtle_interfaces::msg::DioStatus::_di_state_type arg)
  {
    msg_.di_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::DioStatus msg_;
};

class Init_DioStatus_do_state
{
public:
  explicit Init_DioStatus_do_state(::turtle_interfaces::msg::DioStatus & msg)
  : msg_(msg)
  {}
  Init_DioStatus_di_state do_state(::turtle_interfaces::msg::DioStatus::_do_state_type arg)
  {
    msg_.do_state = std::move(arg);
    return Init_DioStatus_di_state(msg_);
  }

private:
  ::turtle_interfaces::msg::DioStatus msg_;
};

class Init_DioStatus_header
{
public:
  Init_DioStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioStatus_do_state header(::turtle_interfaces::msg::DioStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioStatus_do_state(msg_);
  }

private:
  ::turtle_interfaces::msg::DioStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::DioStatus>()
{
  return turtle_interfaces::msg::builder::Init_DioStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__BUILDER_HPP_
