// Generated by gencpp from file ds_hotel_msgs/TrigPrmCtrlCmd.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_TRIGPRMCTRLCMD_H
#define DS_HOTEL_MSGS_MESSAGE_TRIGPRMCTRLCMD_H

#include <ros/service_traits.h>


#include <ds_hotel_msgs/TrigPrmCtrlCmdRequest.h>
#include <ds_hotel_msgs/TrigPrmCtrlCmdResponse.h>


namespace ds_hotel_msgs
{

struct TrigPrmCtrlCmd
{

typedef TrigPrmCtrlCmdRequest Request;
typedef TrigPrmCtrlCmdResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TrigPrmCtrlCmd
} // namespace ds_hotel_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmd > {
  static const char* value()
  {
    return "56daaa06d4b19989fbf8a0bdf220d270";
  }

  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmd&) { return value(); }
};

template<>
struct DataType< ::ds_hotel_msgs::TrigPrmCtrlCmd > {
  static const char* value()
  {
    return "ds_hotel_msgs/TrigPrmCtrlCmd";
  }

  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmd&) { return value(); }
};


// service_traits::MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest> should match
// service_traits::MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmd >
template<>
struct MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmd >::value();
  }
  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest> should match
// service_traits::DataType< ::ds_hotel_msgs::TrigPrmCtrlCmd >
template<>
struct DataType< ::ds_hotel_msgs::TrigPrmCtrlCmdRequest>
{
  static const char* value()
  {
    return DataType< ::ds_hotel_msgs::TrigPrmCtrlCmd >::value();
  }
  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmdResponse> should match
// service_traits::MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmd >
template<>
struct MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmdResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ds_hotel_msgs::TrigPrmCtrlCmd >::value();
  }
  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ds_hotel_msgs::TrigPrmCtrlCmdResponse> should match
// service_traits::DataType< ::ds_hotel_msgs::TrigPrmCtrlCmd >
template<>
struct DataType< ::ds_hotel_msgs::TrigPrmCtrlCmdResponse>
{
  static const char* value()
  {
    return DataType< ::ds_hotel_msgs::TrigPrmCtrlCmd >::value();
  }
  static const char* value(const ::ds_hotel_msgs::TrigPrmCtrlCmdResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_TRIGPRMCTRLCMD_H