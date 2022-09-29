// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnUtcTime.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_UTC_TIME__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_UTC_TIME__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_utc_time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnUtcTime_time_stamp
{
public:
  explicit Init_VnUtcTime_time_stamp(::turtle_interfaces::msg::VnUtcTime & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnUtcTime time_stamp(::turtle_interfaces::msg::VnUtcTime::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnUtcTime msg_;
};

class Init_VnUtcTime_header
{
public:
  Init_VnUtcTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnUtcTime_time_stamp header(::turtle_interfaces::msg::VnUtcTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnUtcTime_time_stamp(msg_);
  }

private:
  ::turtle_interfaces::msg::VnUtcTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnUtcTime>()
{
  return turtle_interfaces::msg::builder::Init_VnUtcTime_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_UTC_TIME__BUILDER_HPP_
