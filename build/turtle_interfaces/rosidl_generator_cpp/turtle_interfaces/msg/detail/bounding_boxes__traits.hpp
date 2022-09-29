// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/bounding_boxes__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::BoundingBoxes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.w.size() == 0) {
      out << "w: []\n";
    } else {
      out << "w:\n";
      for (auto item : msg.w) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.h.size() == 0) {
      out << "h: []\n";
    } else {
      out << "h:\n";
      for (auto item : msg.h) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.color.size() == 0) {
      out << "color: []\n";
    } else {
      out << "color:\n";
      for (auto item : msg.color) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera: ";
    value_to_yaml(msg.camera, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::BoundingBoxes & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::BoundingBoxes>()
{
  return "turtle_interfaces::msg::BoundingBoxes";
}

template<>
inline const char * name<turtle_interfaces::msg::BoundingBoxes>()
{
  return "turtle_interfaces/msg/BoundingBoxes";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::BoundingBoxes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::BoundingBoxes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::msg::BoundingBoxes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__TRAITS_HPP_
