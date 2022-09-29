// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/OusterImu.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/ouster_imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_OusterImu_angular_velocity
{
public:
  explicit Init_OusterImu_angular_velocity(::turtle_interfaces::msg::OusterImu & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::OusterImu angular_velocity(::turtle_interfaces::msg::OusterImu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::OusterImu msg_;
};

class Init_OusterImu_acceleration
{
public:
  explicit Init_OusterImu_acceleration(::turtle_interfaces::msg::OusterImu & msg)
  : msg_(msg)
  {}
  Init_OusterImu_angular_velocity acceleration(::turtle_interfaces::msg::OusterImu::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_OusterImu_angular_velocity(msg_);
  }

private:
  ::turtle_interfaces::msg::OusterImu msg_;
};

class Init_OusterImu_accel_time_stamp
{
public:
  explicit Init_OusterImu_accel_time_stamp(::turtle_interfaces::msg::OusterImu & msg)
  : msg_(msg)
  {}
  Init_OusterImu_acceleration accel_time_stamp(::turtle_interfaces::msg::OusterImu::_accel_time_stamp_type arg)
  {
    msg_.accel_time_stamp = std::move(arg);
    return Init_OusterImu_acceleration(msg_);
  }

private:
  ::turtle_interfaces::msg::OusterImu msg_;
};

class Init_OusterImu_gyro_time_stamp
{
public:
  explicit Init_OusterImu_gyro_time_stamp(::turtle_interfaces::msg::OusterImu & msg)
  : msg_(msg)
  {}
  Init_OusterImu_accel_time_stamp gyro_time_stamp(::turtle_interfaces::msg::OusterImu::_gyro_time_stamp_type arg)
  {
    msg_.gyro_time_stamp = std::move(arg);
    return Init_OusterImu_accel_time_stamp(msg_);
  }

private:
  ::turtle_interfaces::msg::OusterImu msg_;
};

class Init_OusterImu_imu_monotonic_time_stamp
{
public:
  explicit Init_OusterImu_imu_monotonic_time_stamp(::turtle_interfaces::msg::OusterImu & msg)
  : msg_(msg)
  {}
  Init_OusterImu_gyro_time_stamp imu_monotonic_time_stamp(::turtle_interfaces::msg::OusterImu::_imu_monotonic_time_stamp_type arg)
  {
    msg_.imu_monotonic_time_stamp = std::move(arg);
    return Init_OusterImu_gyro_time_stamp(msg_);
  }

private:
  ::turtle_interfaces::msg::OusterImu msg_;
};

class Init_OusterImu_header
{
public:
  Init_OusterImu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OusterImu_imu_monotonic_time_stamp header(::turtle_interfaces::msg::OusterImu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OusterImu_imu_monotonic_time_stamp(msg_);
  }

private:
  ::turtle_interfaces::msg::OusterImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::OusterImu>()
{
  return turtle_interfaces::msg::builder::Init_OusterImu_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__BUILDER_HPP_
