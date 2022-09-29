// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnGpsVelocity.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_gps_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnGpsVelocity_uncertainty
{
public:
  explicit Init_VnGpsVelocity_uncertainty(::turtle_interfaces::msg::VnGpsVelocity & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnGpsVelocity uncertainty(::turtle_interfaces::msg::VnGpsVelocity::_uncertainty_type arg)
  {
    msg_.uncertainty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsVelocity msg_;
};

class Init_VnGpsVelocity_vel
{
public:
  explicit Init_VnGpsVelocity_vel(::turtle_interfaces::msg::VnGpsVelocity & msg)
  : msg_(msg)
  {}
  Init_VnGpsVelocity_uncertainty vel(::turtle_interfaces::msg::VnGpsVelocity::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_VnGpsVelocity_uncertainty(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsVelocity msg_;
};

class Init_VnGpsVelocity_header
{
public:
  Init_VnGpsVelocity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnGpsVelocity_vel header(::turtle_interfaces::msg::VnGpsVelocity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnGpsVelocity_vel(msg_);
  }

private:
  ::turtle_interfaces::msg::VnGpsVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnGpsVelocity>()
{
  return turtle_interfaces::msg::builder::Init_VnGpsVelocity_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__BUILDER_HPP_
