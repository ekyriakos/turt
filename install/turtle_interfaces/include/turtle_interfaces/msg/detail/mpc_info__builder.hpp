// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/mpc_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_MPCInfo_stages_force
{
public:
  explicit Init_MPCInfo_stages_force(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::MPCInfo stages_force(::turtle_interfaces::msg::MPCInfo::_stages_force_type arg)
  {
    msg_.stages_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_stages_steering_angle
{
public:
  explicit Init_MPCInfo_stages_steering_angle(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_stages_force stages_steering_angle(::turtle_interfaces::msg::MPCInfo::_stages_steering_angle_type arg)
  {
    msg_.stages_steering_angle = std::move(arg);
    return Init_MPCInfo_stages_force(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_stages_velocity
{
public:
  explicit Init_MPCInfo_stages_velocity(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_stages_steering_angle stages_velocity(::turtle_interfaces::msg::MPCInfo::_stages_velocity_type arg)
  {
    msg_.stages_velocity = std::move(arg);
    return Init_MPCInfo_stages_steering_angle(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_torque
{
public:
  explicit Init_MPCInfo_torque(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_stages_velocity torque(::turtle_interfaces::msg::MPCInfo::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_MPCInfo_stages_velocity(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_throttle_brake
{
public:
  explicit Init_MPCInfo_throttle_brake(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_torque throttle_brake(::turtle_interfaces::msg::MPCInfo::_throttle_brake_type arg)
  {
    msg_.throttle_brake = std::move(arg);
    return Init_MPCInfo_torque(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_number_of_waypoints
{
public:
  explicit Init_MPCInfo_number_of_waypoints(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_throttle_brake number_of_waypoints(::turtle_interfaces::msg::MPCInfo::_number_of_waypoints_type arg)
  {
    msg_.number_of_waypoints = std::move(arg);
    return Init_MPCInfo_throttle_brake(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_spline_length
{
public:
  explicit Init_MPCInfo_spline_length(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_number_of_waypoints spline_length(::turtle_interfaces::msg::MPCInfo::_spline_length_type arg)
  {
    msg_.spline_length = std::move(arg);
    return Init_MPCInfo_number_of_waypoints(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_vx
{
public:
  explicit Init_MPCInfo_vx(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_spline_length vx(::turtle_interfaces::msg::MPCInfo::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_MPCInfo_spline_length(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_vx_max
{
public:
  explicit Init_MPCInfo_vx_max(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_vx vx_max(::turtle_interfaces::msg::MPCInfo::_vx_max_type arg)
  {
    msg_.vx_max = std::move(arg);
    return Init_MPCInfo_vx(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_velocity_desired
{
public:
  explicit Init_MPCInfo_velocity_desired(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_vx_max velocity_desired(::turtle_interfaces::msg::MPCInfo::_velocity_desired_type arg)
  {
    msg_.velocity_desired = std::move(arg);
    return Init_MPCInfo_vx_max(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_solver_milliseconds
{
public:
  explicit Init_MPCInfo_solver_milliseconds(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_velocity_desired solver_milliseconds(::turtle_interfaces::msg::MPCInfo::_solver_milliseconds_type arg)
  {
    msg_.solver_milliseconds = std::move(arg);
    return Init_MPCInfo_velocity_desired(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_mpc_milliseconds
{
public:
  explicit Init_MPCInfo_mpc_milliseconds(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_solver_milliseconds mpc_milliseconds(::turtle_interfaces::msg::MPCInfo::_mpc_milliseconds_type arg)
  {
    msg_.mpc_milliseconds = std::move(arg);
    return Init_MPCInfo_solver_milliseconds(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_mpc_microseconds
{
public:
  explicit Init_MPCInfo_mpc_microseconds(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_mpc_milliseconds mpc_microseconds(::turtle_interfaces::msg::MPCInfo::_mpc_microseconds_type arg)
  {
    msg_.mpc_microseconds = std::move(arg);
    return Init_MPCInfo_mpc_milliseconds(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_delta_desired
{
public:
  explicit Init_MPCInfo_delta_desired(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_mpc_microseconds delta_desired(::turtle_interfaces::msg::MPCInfo::_delta_desired_type arg)
  {
    msg_.delta_desired = std::move(arg);
    return Init_MPCInfo_mpc_microseconds(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_delta_commanded
{
public:
  explicit Init_MPCInfo_delta_commanded(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_delta_desired delta_commanded(::turtle_interfaces::msg::MPCInfo::_delta_commanded_type arg)
  {
    msg_.delta_commanded = std::move(arg);
    return Init_MPCInfo_delta_desired(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_mpc_was_used
{
public:
  explicit Init_MPCInfo_mpc_was_used(::turtle_interfaces::msg::MPCInfo & msg)
  : msg_(msg)
  {}
  Init_MPCInfo_delta_commanded mpc_was_used(::turtle_interfaces::msg::MPCInfo::_mpc_was_used_type arg)
  {
    msg_.mpc_was_used = std::move(arg);
    return Init_MPCInfo_delta_commanded(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

class Init_MPCInfo_header
{
public:
  Init_MPCInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MPCInfo_mpc_was_used header(::turtle_interfaces::msg::MPCInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MPCInfo_mpc_was_used(msg_);
  }

private:
  ::turtle_interfaces::msg::MPCInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::MPCInfo>()
{
  return turtle_interfaces::msg::builder::Init_MPCInfo_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__BUILDER_HPP_
