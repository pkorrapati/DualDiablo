function [data, info] = poseCtrl
%PoseCtrl gives an empty data for custom_msgs/PoseCtrl
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'custom_msgs/PoseCtrl';
[data.FlX, info.FlX] = ros.internal.ros.messages.ros.default_type('double',1);
[data.FlZ, info.FlZ] = ros.internal.ros.messages.ros.default_type('double',1);
[data.FrX, info.FrX] = ros.internal.ros.messages.ros.default_type('double',1);
[data.FrZ, info.FrZ] = ros.internal.ros.messages.ros.default_type('double',1);
[data.FPitch, info.FPitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.FDelta, info.FDelta] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BlX, info.BlX] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BlZ, info.BlZ] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BrX, info.BrX] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BrZ, info.BrZ] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BPitch, info.BPitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.BDelta, info.BDelta] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'custom_msgs/PoseCtrl';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'fl_x';
info.MatPath{2} = 'fl_z';
info.MatPath{3} = 'fr_x';
info.MatPath{4} = 'fr_z';
info.MatPath{5} = 'f_pitch';
info.MatPath{6} = 'f_delta';
info.MatPath{7} = 'bl_x';
info.MatPath{8} = 'bl_z';
info.MatPath{9} = 'br_x';
info.MatPath{10} = 'br_z';
info.MatPath{11} = 'b_pitch';
info.MatPath{12} = 'b_delta';
