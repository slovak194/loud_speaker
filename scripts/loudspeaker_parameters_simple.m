%% Setup parameters
%

dt = single(1/22050);

R_e = 31.75; % Ohm
R_m = 0.009; %N*s/m
K_m = 41.75; % N/m
Bl = 0.23; % T*m
M_m = 0.008*10^-3; % kg

p = single([R_e, R_m, K_m, Bl, M_m]');

X0 = single([
    0;
    0;
    ]);

n = single(zeros(size(X0)));

u0 = single([
    0;
    ]);

NU = numel(u0);
NX = numel(X0);

%% EKF related

f_p.X0 = X0;
f_p.P0 = single(eye(NX) .* 10^5);
f_p.Q = single(eye(NX));
f_p.U = single(1);
f_p.R = {single(1), single(1)};

%% Check units
%
% clc
% clear
%
% u = symunit;
%
% xd = 1*u.m
% xd_dot = 1*u.m/u.s
% xd_dot2 = 1*u.m/u.s^2
%
% R_e = 31.75*u.Ohm
% R_m = 0.009*u.N*u.s/u.m
% K_m = 41.75*u.N/u.m
% Bl = 0.23*u.T*u.m
% M_m = (0.008*10^-3)*u.kg
%
% i = 1*u.A
% v = 1*u.V
%
% eq1 = R_e*i == v - Bl*xd_dot;
% eq2 = M_m*xd_dot2 == Bl*i - R_m*xd_dot - K_m * xd;
%
% findUnits(eq1)
% checkUnits(eq1,'Compatible')
%
% findUnits(eq2)
% checkUnits(eq2,'Compatible')

