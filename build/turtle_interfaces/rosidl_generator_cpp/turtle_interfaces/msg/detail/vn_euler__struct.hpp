// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/VnEuler.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_EULER__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_EULER__STRUCT_HPP_

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
// Member 'angle'
// Member 'accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__VnEuler __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__VnEuler __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VnEuler_
{
  using Type = VnEuler_<ContainerAllocator>;

  explicit VnEuler_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    angle(_init),
    accuracy(_init)
  {
    (void)_init;
  }

  explicit VnEuler_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    angle(_alloc, _init),
    accuracy(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angle_type angle;
  using _accuracy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accuracy_type accuracy;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__accuracy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::VnEuler_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::VnEuler_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::VnEuler_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::VnEuler_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__VnEuler
    std::shared_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__VnEuler
    std::shared_ptr<turtle_interfaces::msg::VnEuler_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VnEuler_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    return true;
  }
  bool operator!=(const VnEuler_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VnEuler_

// alias to use template instance with default allocator
using VnEuler =
  turtle_interfaces::msg::VnEuler_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_EULER__STRUCT_HPP_
