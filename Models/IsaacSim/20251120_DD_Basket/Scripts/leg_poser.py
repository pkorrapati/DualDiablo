from math import acos, atan2, sqrt, sin, cos

def calc(l1, l2, x, z):
	# d^2
	z = min(max(z, -(l1+l2)), -0.1)
	d2 = max(min(x**2 + z**2, (l1 + l2)**2), 35.5**2)
	
	d = sqrt(d2)
	th = atan2(x, abs(z))
	
	th_knee = acos((d2 - l1**2 - l2**2) / (2 * l1 * l2))
	th_hip = th + atan2(l2 * sin(th_knee), l1 + l2*cos(th_knee))
	
	return th_hip, th_knee


def compute(db: og.Database):
	l1 = abs(db.inputs.lenThigh)
	l2 = abs(db.inputs.lenLeg)
	th_hip, th_knee = calc(l1, l2, db.inputs.lx, db.inputs.lz)
	
	db.outputs.ThHipL = th_hip
	db.outputs.ThKneeL = -th_knee
	
	th_hip, th_knee = calc(l1, l2, db.inputs.rx, db.inputs.rz)
	
	db.outputs.ThHipR = -th_hip
	db.outputs.ThKneeR = th_knee