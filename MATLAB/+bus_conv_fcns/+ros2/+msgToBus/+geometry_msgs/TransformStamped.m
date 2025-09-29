function slBusOut = TransformStamped(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    currentlength = length(slBusOut.header);
    for iter=1:currentlength
        slBusOut.header(iter) = bus_conv_fcns.ros2.msgToBus.std_msgs.Header(msgIn.header(iter),slBusOut(1).header(iter),varargin{:});
    end
    slBusOut.header = bus_conv_fcns.ros2.msgToBus.std_msgs.Header(msgIn.header,slBusOut(1).header,varargin{:});
    slBusOut.child_frame_id_SL_Info.ReceivedLength = uint32(strlength(msgIn.child_frame_id));
    currlen  = min(slBusOut.child_frame_id_SL_Info.ReceivedLength, length(slBusOut.child_frame_id));
    slBusOut.child_frame_id_SL_Info.CurrentLength = uint32(currlen);
    slBusOut.child_frame_id(1:currlen) = uint8(char(msgIn.child_frame_id(1:currlen))).';
    currentlength = length(slBusOut.transform);
    for iter=1:currentlength
        slBusOut.transform(iter) = bus_conv_fcns.ros2.msgToBus.geometry_msgs.Transform(msgIn.transform(iter),slBusOut(1).transform(iter),varargin{:});
    end
    slBusOut.transform = bus_conv_fcns.ros2.msgToBus.geometry_msgs.Transform(msgIn.transform,slBusOut(1).transform,varargin{:});
end
