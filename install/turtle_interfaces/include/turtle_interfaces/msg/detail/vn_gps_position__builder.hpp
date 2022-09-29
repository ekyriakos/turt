// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_gps_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnGpsPosition_positionu
{
public:
  explicit Init_VnGpsPosition_positionu(::turtle_interfaces::msg::VnGpsPosition & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnGpsPosition positionu(::turtle_interfaces::msg::VnGpsPosition::_positionu_type arg)
  {
    msg_.positionu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsPosition msg_;
};

class Init_VnGpsPosition_position
{
public:
  explicit Init_VnGpsPosition_position(::turtle_interfaces::msg::VnGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VnGpsPosition_positionu position(::turtle_interfaces::msg::VnGpsPosition::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_VnGpsPosition_positionu(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsPosition msg_;
};

class Init_VnGpsPosition_fix
{
public:
  explicit Init_VnGpsPosition_fix(::turtle_interfaces::msg::VnGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VnGpsPosition_position fix(::turtle_interfaces::msg::VnGpsPosition::_fix_type arg)
  {
    msg_.fix = std::move(arg);
    return Init_VnGpsPosition_position(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsPosition msg_;
};

class Init_VnGpsPosition_num_sats
{
public:
  explicit Init_VnGpsPosition_num_sats(::turtle_interfaces::msg::VnGpsPosition & msg)
  : msg_(msg)
  {}
  Init_VnGpsPosition_fix num_sats(::turtle_interfaces::msg::VnGpsPosition::_num_sats_type arg)
  {
    msg_.num_sats = std::move(arg);
    return Init_VnGpsPosition_fix(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsPosition msg_;
};

class Init_VnGpsPosition_header
{
public:
  Init_VnGpsPosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnGpsPosition_num_sats header(::turtle_interfaces::msg::VnGpsPosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnGpsPosition_num_sats(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnGpsPosition>()
{
  return turtle_interfaces::msg::builder::Init_VnGpsPosition_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__BUILDER_HPP_
