// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for dd_motion_msgs/PoseCtrl
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "dd_motion_msgs/msg/pose_ctrl.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class DD_MOTION_MSGS_EXPORT ros2_dd_motion_msgs_msg_PoseCtrl_common : public MATLABROS2MsgInterface<dd_motion_msgs::msg::PoseCtrl> {
  public:
    virtual ~ros2_dd_motion_msgs_msg_PoseCtrl_common(){}
    virtual void copy_from_struct(dd_motion_msgs::msg::PoseCtrl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const dd_motion_msgs::msg::PoseCtrl* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_dd_motion_msgs_msg_PoseCtrl_common::copy_from_struct(dd_motion_msgs::msg::PoseCtrl* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //fl_x
        const matlab::data::TypedArray<double> fl_x_arr = arr["fl_x"];
        msg->fl_x = fl_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fl_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fl_x' is wrong type; expected a double.");
    }
    try {
        //fl_z
        const matlab::data::TypedArray<double> fl_z_arr = arr["fl_z"];
        msg->fl_z = fl_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fl_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fl_z' is wrong type; expected a double.");
    }
    try {
        //fr_x
        const matlab::data::TypedArray<double> fr_x_arr = arr["fr_x"];
        msg->fr_x = fr_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fr_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fr_x' is wrong type; expected a double.");
    }
    try {
        //fr_z
        const matlab::data::TypedArray<double> fr_z_arr = arr["fr_z"];
        msg->fr_z = fr_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fr_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fr_z' is wrong type; expected a double.");
    }
    try {
        //f_pitch
        const matlab::data::TypedArray<double> f_pitch_arr = arr["f_pitch"];
        msg->f_pitch = f_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'f_pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'f_pitch' is wrong type; expected a double.");
    }
    try {
        //f_delta
        const matlab::data::TypedArray<double> f_delta_arr = arr["f_delta"];
        msg->f_delta = f_delta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'f_delta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'f_delta' is wrong type; expected a double.");
    }
    try {
        //bl_x
        const matlab::data::TypedArray<double> bl_x_arr = arr["bl_x"];
        msg->bl_x = bl_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bl_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bl_x' is wrong type; expected a double.");
    }
    try {
        //bl_z
        const matlab::data::TypedArray<double> bl_z_arr = arr["bl_z"];
        msg->bl_z = bl_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bl_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bl_z' is wrong type; expected a double.");
    }
    try {
        //br_x
        const matlab::data::TypedArray<double> br_x_arr = arr["br_x"];
        msg->br_x = br_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'br_x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'br_x' is wrong type; expected a double.");
    }
    try {
        //br_z
        const matlab::data::TypedArray<double> br_z_arr = arr["br_z"];
        msg->br_z = br_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'br_z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'br_z' is wrong type; expected a double.");
    }
    try {
        //b_pitch
        const matlab::data::TypedArray<double> b_pitch_arr = arr["b_pitch"];
        msg->b_pitch = b_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'b_pitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'b_pitch' is wrong type; expected a double.");
    }
    try {
        //b_delta
        const matlab::data::TypedArray<double> b_delta_arr = arr["b_delta"];
        msg->b_delta = b_delta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'b_delta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'b_delta' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_dd_motion_msgs_msg_PoseCtrl_common::get_arr(MDFactory_T& factory, const dd_motion_msgs::msg::PoseCtrl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","fl_x","fl_z","fr_x","fr_z","f_pitch","f_delta","bl_x","bl_z","br_x","br_z","b_pitch","b_delta"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("dd_motion_msgs/PoseCtrl");
    // fl_x
    auto currentElement_fl_x = (msg + ctr)->fl_x;
    outArray[ctr]["fl_x"] = factory.createScalar(currentElement_fl_x);
    // fl_z
    auto currentElement_fl_z = (msg + ctr)->fl_z;
    outArray[ctr]["fl_z"] = factory.createScalar(currentElement_fl_z);
    // fr_x
    auto currentElement_fr_x = (msg + ctr)->fr_x;
    outArray[ctr]["fr_x"] = factory.createScalar(currentElement_fr_x);
    // fr_z
    auto currentElement_fr_z = (msg + ctr)->fr_z;
    outArray[ctr]["fr_z"] = factory.createScalar(currentElement_fr_z);
    // f_pitch
    auto currentElement_f_pitch = (msg + ctr)->f_pitch;
    outArray[ctr]["f_pitch"] = factory.createScalar(currentElement_f_pitch);
    // f_delta
    auto currentElement_f_delta = (msg + ctr)->f_delta;
    outArray[ctr]["f_delta"] = factory.createScalar(currentElement_f_delta);
    // bl_x
    auto currentElement_bl_x = (msg + ctr)->bl_x;
    outArray[ctr]["bl_x"] = factory.createScalar(currentElement_bl_x);
    // bl_z
    auto currentElement_bl_z = (msg + ctr)->bl_z;
    outArray[ctr]["bl_z"] = factory.createScalar(currentElement_bl_z);
    // br_x
    auto currentElement_br_x = (msg + ctr)->br_x;
    outArray[ctr]["br_x"] = factory.createScalar(currentElement_br_x);
    // br_z
    auto currentElement_br_z = (msg + ctr)->br_z;
    outArray[ctr]["br_z"] = factory.createScalar(currentElement_br_z);
    // b_pitch
    auto currentElement_b_pitch = (msg + ctr)->b_pitch;
    outArray[ctr]["b_pitch"] = factory.createScalar(currentElement_b_pitch);
    // b_delta
    auto currentElement_b_delta = (msg + ctr)->b_delta;
    outArray[ctr]["b_delta"] = factory.createScalar(currentElement_b_delta);
    }
    return std::move(outArray);
  } 
class DD_MOTION_MSGS_EXPORT ros2_dd_motion_msgs_PoseCtrl_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_dd_motion_msgs_PoseCtrl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_dd_motion_msgs_PoseCtrl_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<dd_motion_msgs::msg::PoseCtrl,ros2_dd_motion_msgs_msg_PoseCtrl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_dd_motion_msgs_PoseCtrl_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<dd_motion_msgs::msg::PoseCtrl,ros2_dd_motion_msgs_msg_PoseCtrl_common>>();
  }
  std::shared_ptr<void> ros2_dd_motion_msgs_PoseCtrl_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<dd_motion_msgs::msg::PoseCtrl>();
    ros2_dd_motion_msgs_msg_PoseCtrl_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_dd_motion_msgs_PoseCtrl_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_dd_motion_msgs_msg_PoseCtrl_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (dd_motion_msgs::msg::PoseCtrl*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_dd_motion_msgs_msg_PoseCtrl_common, MATLABROS2MsgInterface<dd_motion_msgs::msg::PoseCtrl>)
CLASS_LOADER_REGISTER_CLASS(ros2_dd_motion_msgs_PoseCtrl_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER