// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef GPS__MSG__DETAIL__GPS__TRAITS_HPP_
#define GPS__MSG__DETAIL__GPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps/msg/detail/gps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gps
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPS & msg,
  std::ostream & out)
{
  out << "{";
  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPS & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPS & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gps

namespace rosidl_generator_traits
{

[[deprecated("use gps::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gps::msg::GPS & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps::msg::to_yaml() instead")]]
inline std::string to_yaml(const gps::msg::GPS & msg)
{
  return gps::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gps::msg::GPS>()
{
  return "gps::msg::GPS";
}

template<>
inline const char * name<gps::msg::GPS>()
{
  return "gps/msg/GPS";
}

template<>
struct has_fixed_size<gps::msg::GPS>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gps::msg::GPS>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gps::msg::GPS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPS__MSG__DETAIL__GPS__TRAITS_HPP_
