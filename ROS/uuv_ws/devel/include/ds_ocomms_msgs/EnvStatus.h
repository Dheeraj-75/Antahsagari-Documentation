// Generated by gencpp from file ds_ocomms_msgs/EnvStatus.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_ENVSTATUS_H
#define DS_OCOMMS_MSGS_MESSAGE_ENVSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_ocomms_msgs
{
template <class ContainerAllocator>
struct EnvStatus_
{
  typedef EnvStatus_<ContainerAllocator> Type;

  EnvStatus_()
    : header()
    , ds_header()
    , rel_humidity(0.0)
    , air_temp(0.0)  {
    }
  EnvStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , rel_humidity(0.0)
    , air_temp(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef float _rel_humidity_type;
  _rel_humidity_type rel_humidity;

   typedef float _air_temp_type;
  _air_temp_type air_temp;





  typedef boost::shared_ptr< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> const> ConstPtr;

}; // struct EnvStatus_

typedef ::ds_ocomms_msgs::EnvStatus_<std::allocator<void> > EnvStatus;

typedef boost::shared_ptr< ::ds_ocomms_msgs::EnvStatus > EnvStatusPtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::EnvStatus const> EnvStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.rel_humidity == rhs.rel_humidity &&
    lhs.air_temp == rhs.air_temp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "977388e327eff38c57885f6b97e2e2b3";
  }

  static const char* value(const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x977388e327eff38cULL;
  static const uint64_t static_value2 = 0x57885f6b97e2e2b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/EnvStatus";
  }

  static const char* value(const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"float32 rel_humidity\n"
"float32 air_temp\n"
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

  static const char* value(const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.rel_humidity);
      stream.next(m.air_temp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnvStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_ocomms_msgs::EnvStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "rel_humidity: ";
    Printer<float>::stream(s, indent + "  ", v.rel_humidity);
    s << indent << "air_temp: ";
    Printer<float>::stream(s, indent + "  ", v.air_temp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_ENVSTATUS_H