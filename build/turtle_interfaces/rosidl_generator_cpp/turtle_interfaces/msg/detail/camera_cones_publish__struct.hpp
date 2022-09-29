// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/CameraConesPublish.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__CameraConesPublish __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__CameraConesPublish __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraConesPublish_
{
  using Type = CameraConesPublish_<ContainerAllocator>;

  explicit CameraConesPublish_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_camera_cones = 0;
      this->center_camera_cones = 0;
      this->right_camera_cones = 0;
    }
  }

  explicit CameraConesPublish_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_camera_cones = 0;
      this->center_camera_cones = 0;
      this->right_camera_cones = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_camera_cones_type =
    uint8_t;
  _left_camera_cones_type left_camera_cones;
  using _center_camera_cones_type =
    uint8_t;
  _center_camera_cones_type center_camera_cones;
  using _right_camera_cones_type =
    uint8_t;
  _right_camera_cones_type right_camera_cones;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_camera_cones(
    const uint8_t & _arg)
  {
    this->left_camera_cones = _arg;
    return *this;
  }
  Type & set__center_camera_cones(
    const uint8_t & _arg)
  {
    this->center_camera_cones = _arg;
    return *this;
  }
  Type & set__right_camera_cones(
    const uint8_t & _arg)
  {
    this->right_camera_cones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__CameraConesPublish
    std::shared_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__CameraConesPublish
    std::shared_ptr<turtle_interfaces::msg::CameraConesPublish_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraConesPublish_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_camera_cones != other.left_camera_cones) {
      return false;
    }
    if (this->center_camera_cones != other.center_camera_cones) {
      return false;
    }
    if (this->right_camera_cones != other.right_camera_cones) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraConesPublish_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraConesPublish_

// alias to use template instance with default allocator
using CameraConesPublish =
  turtle_interfaces::msg::CameraConesPublish_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__STRUCT_HPP_
