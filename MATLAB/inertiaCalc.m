clear;
clc;

% Initialize the inertia tensor as a 3x3 matrix
inertiaTensor = zeros(3, 3);

% Body
disp('Body');
disp('-------');
inertiaTensor(1, 1) = 0.071628; % Ixx
inertiaTensor(1, 2) = -5.9879E-09; % Ixy
inertiaTensor(1, 3) = -0.00097471; % Ixz
inertiaTensor(2, 2) = 0.16274; % Iyy
inertiaTensor(2, 3) = -1.6369E-08; % Iyz
inertiaTensor(3, 3) = 0.14673; % Izz

% find  principal axes of inertia
[principalAxes, principalMoments] = eig(inertiaTensor);

% Display the principal moments and axes
disp('Principal Moments:');
disp(diag(principalMoments));
disp('Principal Axes:');
disp(principalAxes);
quaternion = rotm2quat(principalAxes);
disp('Quaternion from rotation:');
disp(quaternion);


% Outer Motor
disp('Outer Motor');
disp('-------');
inertiaTensor(1, 1) = 0.003352; % Ixx
inertiaTensor(1, 2) = 2.7785E-09; % Ixy
inertiaTensor(1, 3) = -6.5913E-05; % Ixz
inertiaTensor(2, 2) = 0.0034908; % Iyy
inertiaTensor(2, 3) = 4.5045E-10; % Iyz
inertiaTensor(3, 3) = 0.0034856; % Izz

% find  principal axes of inertia
[principalAxes, principalMoments] = eig(inertiaTensor);

% Display the principal moments and axes
disp('Principal Moments:');
disp(diag(principalMoments));
disp('Principal Axes:');
disp(principalAxes);
quaternion = rotm2quat(principalAxes);
disp('Quaternion from rotation:');
disp(quaternion);


% Thigh
disp('Thigh');
disp('-------');
inertiaTensor(1, 1) = 3.6972E-05; % Ixx
inertiaTensor(1, 2) = 2.4106E-05; % Ixy
inertiaTensor(1, 3) = 4.3699E-10; % Ixz
inertiaTensor(2, 2) = 0.00029278; % Iyy
inertiaTensor(2, 3) = -4.1243E-11; % Iyz
inertiaTensor(3, 3) = 0.00032532; % Izz

% find  principal axes of inertia
[principalAxes, principalMoments] = eig(inertiaTensor);

% Display the principal moments and axes
disp('Principal Moments:');
disp(diag(principalMoments));
disp('Principal Axes:');
disp(principalAxes);
quaternion = rotm2quat(principalAxes);
disp('Quaternion from rotation:');
disp(quaternion);

% Wheel
disp('Wheel');
disp('-------');
inertiaTensor(1, 1) = 0.0069338; % Ixx
inertiaTensor(1, 2) = 2.8693E-09; % Ixy
inertiaTensor(1, 3) = 4.6779E-09; % Ixz
inertiaTensor(2, 2) = 0.006934; % Iyy
inertiaTensor(2, 3) = -5.0441E-11; % Iyz
inertiaTensor(3, 3) = 0.012567; % Izz

% find  principal axes of inertia
[principalAxes, principalMoments] = eig(inertiaTensor);

% Display the principal moments and axes
disp('Principal Moments:');
disp(diag(principalMoments));
disp('Principal Axes:');
disp(principalAxes);
quaternion = rotm2quat(principalAxes);
disp('Quaternion from rotation:');
disp(quaternion);

