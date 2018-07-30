%% Setup parameters
%
clear
clear all
clear functions

dt = single(1/22050);

R_e = 31.75; % Ohm
R_m = 0.009; %N*s/m
K_m = 41.75; % N/m
Bl = 0.23; % T*m
M_m = 0.008*10^-3; % kg

p = single([R_e, K_m, Bl, M_m]');

X0 = single([
    0;
    0;
    R_m;
    ]);

n = single(zeros(size(X0)));

u0 = single([
    0;
    ]);

NU = numel(u0);
NX = numel(X0);

%% EKF related

f_p.X0 = X0;
f_p.X0(3) = R_m + 0.001; % Add some bias to the filter initial estimate

f_p.P0(1,1) = single(1);
f_p.P0(2,2) = single(1);
f_p.P0(3,3) = single(1);

f_p.Q = single(eye(NX) .* 1);

f_p.U = single(1);
f_p.R = {single(1), single(1)};

loudspeaker_test_model