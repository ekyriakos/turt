// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/SlamInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/slam_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_SlamInfo_total_cone_count
{
public:
  explicit Init_SlamInfo_total_cone_count(::turtle_interfaces::msg::SlamInfo & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::SlamInfo total_cone_count(::turtle_interfaces::msg::SlamInfo::_total_cone_count_type arg)
  {
    msg_.total_cone_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamInfo msg_;
};

class Init_SlamInfo_sensor_cone_count
{
public:
  explicit Init_SlamInfo_sensor_cone_count(::turtle_interfaces::msg::SlamInfo & msg)
  : msg_(msg)
  {}
  Init_SlamInfo_total_cone_count sensor_cone_count(::turtle_interfaces::msg::SlamInfo::_sensor_cone_count_type arg)
  {
    msg_.sensor_cone_count = std::move(arg);
    return Init_SlamInfo_total_cone_count(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamInfo msg_;
};

class Init_SlamInfo_localization_mode
{
public:
  explicit Init_SlamInfo_localization_mode(::turtle_interfaces::msg::SlamInfo & msg)
  : msg_(msg)
  {}
  Init_SlamInfo_sensor_cone_count localization_mode(::turtle_interfaces::msg::SlamInfo::_localization_mode_type arg)
  {
    msg_.localization_mode = std::move(arg);
    return Init_SlamInfo_sensor_cone_count(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamInfo msg_;
};

class Init_SlamInfo_slam_statistics
{
public:
  explicit Init_SlamInfo_slam_statistics(::turtle_interfaces::msg::SlamInfo & msg)
  : msg_(msg)
  {}
  Init_SlamInfo_localization_mode slam_statistics(::turtle_interfaces::msg::SlamInfo::_slam_statistics_type arg)
  {
    msg_.slam_statistics = std::move(arg);
    return Init_SlamInfo_localization_mode(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamInfo msg_;
};

class Init_SlamInfo_header
{
public:
  Init_SlamInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamInfo_slam_statistics header(::turtle_interfaces::msg::SlamInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SlamInfo_slam_statistics(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::SlamInfo>()
{
  return turtle_interfaces::msg::builder::Init_SlamInfo_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__BUILDER_HPP_
