// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/VnGpsVelocity.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__STRUCT_HPP_

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
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__VnGpsVelocity __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__VnGpsVelocity __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VnGpsVelocity_
{
  using Type = VnGpsVelocity_<ContainerAllocator>;

  explicit VnGpsVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uncertainty = 0.0f;
    }
  }

  explicit VnGpsVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uncertainty = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_type vel;
  using _uncertainty_type =
    float;
  _uncertainty_type uncertainty;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__uncertainty(
    const float & _arg)
  {
    this->uncertainty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__VnGpsVelocity
    std::shared_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__VnGpsVelocity
    std::shared_ptr<turtle_interfaces::msg::VnGpsVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VnGpsVelocity_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->uncertainty != other.uncertainty) {
      return false;
    }
    return true;
  }
  bool operator!=(const VnGpsVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VnGpsVelocity_

// alias to use template instance with default allocator
using VnGpsVelocity =
  turtle_interfaces::msg::VnGpsVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_VELOCITY__STRUCT_HPP_
