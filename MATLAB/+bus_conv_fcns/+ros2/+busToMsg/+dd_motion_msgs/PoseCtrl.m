function rosmsgOut = PoseCtrl(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.fl_x = double(slBusIn.fl_x);
    rosmsgOut.fl_z = double(slBusIn.fl_z);
    rosmsgOut.fr_x = double(slBusIn.fr_x);
    rosmsgOut.fr_z = double(slBusIn.fr_z);
    rosmsgOut.f_pitch = double(slBusIn.f_pitch);
    rosmsgOut.f_delta = double(slBusIn.f_delta);
    rosmsgOut.bl_x = double(slBusIn.bl_x);
    rosmsgOut.bl_z = double(slBusIn.bl_z);
    rosmsgOut.br_x = double(slBusIn.br_x);
    rosmsgOut.br_z = double(slBusIn.br_z);
    rosmsgOut.b_pitch = double(slBusIn.b_pitch);
    rosmsgOut.b_delta = double(slBusIn.b_delta);
end
