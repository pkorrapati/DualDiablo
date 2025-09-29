from math import tan, atan2

def compute(db: og.Database):
    # r = 0.0955 # correct this, wheel radius
    # t = 0.48 # correct this, track width
    # l = 1 # correct this, wheel base
    # b = 0.5 # correct this, cg to back axle

    r = db.inputs.r # correct this, wheel radius
    t = db.inputs.t # correct this, track width
    l = db.inputs.l # correct this, wheel base
    b = db.inputs.b # correct this, cg to back axle

    vx = db.inputs.vx    
    del_f = db.inputs.del_f    

    beta = atan2(b*tan(del_f), l)    
    w = vx * tan(beta) / b
    
    rb = 0 if beta == 0 else (b / tan(beta))
    rf = 0 if del_f == 0 else (l / sin(del_f)) # this will be infinite at del 0

    rf_i = rf - t/2
    rf_o = rf + t/2

    rb_i = rb - t/2
    rb_o = rb + t/2	

    vfL = vx + w * (rf_i if del_f > 0 else rf_o)
    vfR = vx + w * (rf_o if del_f > 0 else rf_i)

    vbL = vx + w * (rb_i if del_f > 0 else rb_o)
    vbR = vx + w * (rb_o if del_f > 0 else rb_i)

    db.outputs.FL = -vfL / r
    db.outputs.FR = vfR / r
    db.outputs.BL = -vbL / r
    db.outputs.BR = vbR / r