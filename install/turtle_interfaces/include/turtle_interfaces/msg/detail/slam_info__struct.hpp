// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/SlamInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'slam_statistics'
#include "turtle_interfaces/msg/detail/slam_statistics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__SlamInfo __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__SlamInfo __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SlamInfo_
{
  using Type = SlamInfo_<ContainerAllocator>;

  explicit SlamInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    slam_statistics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->localization_mode = false;
      this->sensor_cone_count = 0ul;
      this->total_cone_count = 0ul;
    }
  }

  explicit SlamInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    slam_statistics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->localization_mode = false;
      this->sensor_cone_count = 0ul;
      this->total_cone_count = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _slam_statistics_type =
    turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>;
  _slam_statistics_type slam_statistics;
  using _localization_mode_type =
    bool;
  _localization_mode_type localization_mode;
  using _sensor_cone_count_type =
    uint32_t;
  _sensor_cone_count_type sensor_cone_count;
  using _total_cone_count_type =
    uint32_t;
  _total_cone_count_type total_cone_count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__slam_statistics(
    const turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> & _arg)
  {
    this->slam_statistics = _arg;
    return *this;
  }
  Type & set__localization_mode(
    const bool & _arg)
  {
    this->localization_mode = _arg;
    return *this;
  }
  Type & set__sensor_cone_count(
    const uint32_t & _arg)
  {
    this->sensor_cone_count = _arg;
    return *this;
  }
  Type & set__total_cone_count(
    const uint32_t & _arg)
  {
    this->total_cone_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::SlamInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::SlamInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::SlamInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::SlamInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__SlamInfo
    std::shared_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__SlamInfo
    std::shared_ptr<turtle_interfaces::msg::SlamInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SlamInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->slam_statistics != other.slam_statistics) {
      return false;
    }
    if (this->localization_mode != other.localization_mode) {
      return false;
    }
    if (this->sensor_cone_count != other.sensor_cone_count) {
      return false;
    }
    if (this->total_cone_count != other.total_cone_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const SlamInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SlamInfo_

// alias to use template instance with default allocator
using SlamInfo =
  turtle_interfaces::msg::SlamInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__STRUCT_HPP_
