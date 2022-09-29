// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/VnImu.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_IMU__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_IMU__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/vn_imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_VnImu_gyro
{
public:
  explicit Init_VnImu_gyro(::turtle_interfaces::msg::VnImu & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::VnImu gyro(::turtle_interfaces::msg::VnImu::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::VnImu msg_;
};

class Init_VnImu_accel
{
public:
  explicit Init_VnImu_accel(::turtle_interfaces::msg::VnImu & msg)
  : msg_(msg)
  {}
  Init_VnImu_gyro accel(::turtle_interfaces::msg::VnImu::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_VnImu_gyro(msg_);
  }

private:
  ::turtle_interfaces::msg::VnImu msg_;
};

class Init_VnImu_header
{
public:
  Init_VnImu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VnImu_accel header(::turtle_interfaces::msg::VnImu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VnImu_accel(msg_);
  }

private:
  ::turtle_interfaces::msg::VnImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::VnImu>()
{
  return turtle_interfaces::msg::builder::Init_VnImu_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_IMU__BUILDER_HPP_
