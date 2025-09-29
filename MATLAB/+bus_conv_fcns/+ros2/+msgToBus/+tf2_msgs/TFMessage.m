function slBusOut = TFMessage(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    maxlength = length(slBusOut.transforms);
    recvdlength = length(msgIn.transforms);
    currentlength = min(maxlength, recvdlength);
    if (max(recvdlength) > maxlength) && ...
            isequal(varargin{1}{1},ros.slros.internal.bus.VarLenArrayTruncationAction.EmitWarning)
        diag = MSLDiagnostic([], ...
                             message('ros:slros:busconvert:TruncatedArray', ...
                                     'transforms', msgIn.MessageType, maxlength, max(recvdlength), maxlength, varargin{2}));
        reportAsWarning(diag);
    end
    slBusOut.transforms_SL_Info.ReceivedLength = uint32(recvdlength);
    slBusOut.transforms_SL_Info.CurrentLength = uint32(currentlength);
    for iter=1:currentlength
        slBusOut.transforms(iter) = bus_conv_fcns.ros2.msgToBus.geometry_msgs.TransformStamped(msgIn.transforms(iter),slBusOut(1).transforms(iter),varargin{:});
    end
end
