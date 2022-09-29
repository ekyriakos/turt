// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/VnGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__STRUCT_HPP_

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
// Member 'position'
// Member 'positionu'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__VnGpsPosition __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__VnGpsPosition __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VnGpsPosition_
{
  using Type = VnGpsPosition_<ContainerAllocator>;

  explicit VnGpsPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    positionu(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_sats = 0;
      this->fix = 0;
    }
  }

  explicit VnGpsPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    positionu(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_sats = 0;
      this->fix = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_sats_type =
    uint8_t;
  _num_sats_type num_sats;
  using _fix_type =
    uint8_t;
  _fix_type fix;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _positionu_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _positionu_type positionu;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num_sats(
    const uint8_t & _arg)
  {
    this->num_sats = _arg;
    return *this;
  }
  Type & set__fix(
    const uint8_t & _arg)
  {
    this->fix = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__positionu(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->positionu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__VnGpsPosition
    std::shared_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__VnGpsPosition
    std::shared_ptr<turtle_interfaces::msg::VnGpsPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VnGpsPosition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num_sats != other.num_sats) {
      return false;
    }
    if (this->fix != other.fix) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->positionu != other.positionu) {
      return false;
    }
    return true;
  }
  bool operator!=(const VnGpsPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VnGpsPosition_

// alias to use template instance with default allocator
using VnGpsPosition =
  turtle_interfaces::msg::VnGpsPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__STRUCT_HPP_
