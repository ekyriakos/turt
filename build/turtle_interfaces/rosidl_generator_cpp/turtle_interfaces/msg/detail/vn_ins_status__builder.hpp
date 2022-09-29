// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnInsStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_INS_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_INS_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_ins_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnInsStatus_status
{
public:
  explicit Init_VnInsStatus_status(::turtle_interfaces::msg::VnInsStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnInsStatus status(::turtle_interfaces::msg::VnInsStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnInsStatus msg_;
};

class Init_VnInsStatus_header
{
public:
  Init_VnInsStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnInsStatus_status header(::turtle_interfaces::msg::VnInsStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnInsStatus_status(msg_);
  }

private:
  ::turtle_interfaces::msg::VnInsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnInsStatus>()
{
  return turtle_interfaces::msg::builder::Init_VnInsStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_INS_STATUS__BUILDER_HPP_
