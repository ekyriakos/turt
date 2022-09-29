// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/GpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/gpu_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_GpuStatus_power_usage
{
public:
  explicit Init_GpuStatus_power_usage(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::GpuStatus power_usage(::turtle_interfaces::msg::GpuStatus::_power_usage_type arg)
  {
    msg_.power_usage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_speed_fan
{
public:
  explicit Init_GpuStatus_speed_fan(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_power_usage speed_fan(::turtle_interfaces::msg::GpuStatus::_speed_fan_type arg)
  {
    msg_.speed_fan = std::move(arg);
    return Init_GpuStatus_power_usage(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_temp_c
{
public:
  explicit Init_GpuStatus_temp_c(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_speed_fan temp_c(::turtle_interfaces::msg::GpuStatus::_temp_c_type arg)
  {
    msg_.temp_c = std::move(arg);
    return Init_GpuStatus_speed_fan(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_total_memory
{
public:
  explicit Init_GpuStatus_total_memory(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_temp_c total_memory(::turtle_interfaces::msg::GpuStatus::_total_memory_type arg)
  {
    msg_.total_memory = std::move(arg);
    return Init_GpuStatus_temp_c(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_used_memory
{
public:
  explicit Init_GpuStatus_used_memory(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_total_memory used_memory(::turtle_interfaces::msg::GpuStatus::_used_memory_type arg)
  {
    msg_.used_memory = std::move(arg);
    return Init_GpuStatus_total_memory(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_free_memory
{
public:
  explicit Init_GpuStatus_free_memory(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_used_memory free_memory(::turtle_interfaces::msg::GpuStatus::_free_memory_type arg)
  {
    msg_.free_memory = std::move(arg);
    return Init_GpuStatus_used_memory(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_cu_device
{
public:
  explicit Init_GpuStatus_cu_device(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_free_memory cu_device(::turtle_interfaces::msg::GpuStatus::_cu_device_type arg)
  {
    msg_.cu_device = std::move(arg);
    return Init_GpuStatus_free_memory(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_gpu_status
{
public:
  explicit Init_GpuStatus_gpu_status(::turtle_interfaces::msg::GpuStatus & msg)
  : msg_(msg)
  {}
  Init_GpuStatus_cu_device gpu_status(::turtle_interfaces::msg::GpuStatus::_gpu_status_type arg)
  {
    msg_.gpu_status = std::move(arg);
    return Init_GpuStatus_cu_device(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

class Init_GpuStatus_header
{
public:
  Init_GpuStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpuStatus_gpu_status header(::turtle_interfaces::msg::GpuStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GpuStatus_gpu_status(msg_);
  }

private:
  ::turtle_interfaces::msg::GpuStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::GpuStatus>()
{
  return turtle_interfaces::msg::builder::Init_GpuStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__BUILDER_HPP_
