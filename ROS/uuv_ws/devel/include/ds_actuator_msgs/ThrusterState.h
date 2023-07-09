// Generated by gencpp from file ds_actuator_msgs/ThrusterState.msg
// DO NOT EDIT!


#ifndef DS_ACTUATOR_MSGS_MESSAGE_THRUSTERSTATE_H
#define DS_ACTUATOR_MSGS_MESSAGE_THRUSTERSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_actuator_msgs
{
template <class ContainerAllocator>
struct ThrusterState_
{
  typedef ThrusterState_<ContainerAllocator> Type;

  ThrusterState_()
    : header()
    , ds_header()
    , thruster_name()
    , enable(false)
    , cmd_value(0.0)
    , actual_value(0.0)  {
    }
  ThrusterState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , thruster_name(_alloc)
    , enable(false)
    , cmd_value(0.0)
    , actual_value(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _thruster_name_type;
  _thruster_name_type thruster_name;

   typedef uint8_t _enable_type;
  _enable_type enable;

   typedef float _cmd_value_type;
  _cmd_value_type cmd_value;

   typedef float _actual_value_type;
  _actual_value_type actual_value;





  typedef boost::shared_ptr< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> const> ConstPtr;

}; // struct ThrusterState_

typedef ::ds_actuator_msgs::ThrusterState_<std::allocator<void> > ThrusterState;

typedef boost::shared_ptr< ::ds_actuator_msgs::ThrusterState > ThrusterStatePtr;
typedef boost::shared_ptr< ::ds_actuator_msgs::ThrusterState const> ThrusterStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator1> & lhs, const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.thruster_name == rhs.thruster_name &&
    lhs.enable == rhs.enable &&
    lhs.cmd_value == rhs.cmd_value &&
    lhs.actual_value == rhs.actual_value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator1> & lhs, const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_actuator_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "483fd13ac8d18748eabb10eb643a33cf";
  }

  static const char* value(const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x483fd13ac8d18748ULL;
  static const uint64_t static_value2 = 0xeabb10eb643a33cfULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_actuator_msgs/ThrusterState";
  }

  static const char* value(const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"string thruster_name\n"
"bool enable\n"
"\n"
"float32 cmd_value\n"
"float32 actual_value\n"
"\n"
"# Other status fields go here\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/DsHeader\n"
"# This is half our standard header for ds_msgs; see\n"
"# HEADERS.md for details\n"
"\n"
"# This header should ALWAYS be paired with a std_msgs/Header\n"
"# and should ALWAYS reference HEADERS.md.  If you're looking at this\n"
"# file to add headers to a type, you probably want to copy/paste\n"
"# the following block:\n"
"#\n"
"#     # The standard 2-part DsHeader block\n"
"#     # This allows both a standard ROS header and DS-specific header blocks\n"
"#     # See HEADERS.md in ds_core_msgs for details\n"
"#     std_msgs/Header header\n"
"#     ds_core_msgs/DsHeader ds_header\n"
"#\n"
"\n"
"# Time data was received or sent out (i/o time)\n"
"time io_time\n"
"\n"
"# Sensor source UUID\n"
"uint8[16] source_uuid\n"
"\n"
;
  }

  static const char* value(const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.thruster_name);
      stream.next(m.enable);
      stream.next(m.cmd_value);
      stream.next(m.actual_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ThrusterState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_actuator_msgs::ThrusterState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_actuator_msgs::ThrusterState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "thruster_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.thruster_name);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "cmd_value: ";
    Printer<float>::stream(s, indent + "  ", v.cmd_value);
    s << indent << "actual_value: ";
    Printer<float>::stream(s, indent + "  ", v.actual_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACTUATOR_MSGS_MESSAGE_THRUSTERSTATE_H