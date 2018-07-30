%% Setup parameters
%
clear
clear all
clear functions

dt = single(1/22050);
%  
% R_e = 31.75; % Ohm
% R_m = 0.009; %N*s/m
% K_m = 41.75; % N/m
% Bl = 0.23; % T*m
% M_m = 0.008*10^-3; % kg

% Reference parameters
% Mms = 100 mg
% Bl = 0.7 N/A
% Re = 6. Ohm
% Kms = 4e3 N/mm
% Rms = 0.1 kg/s

R_e = 6; % Ohm
R_m = 0.1; %N*s/m
K_m = 4; % N/m
Bl = 0.7; % T*m
M_m = 100*10^-6; % kg

p = single([Bl, M_m]');

X0 = single([
    0;
    0;
    R_m;
    K_m;
    R_e
    ]);

n = single(zeros(size(X0)));

u0 = single([
    0;
    ]);

NU = numel(u0);
NX = numel(X0);

%% EKF related

f_p.X0 = X0;
f_p.X0(1) = 0;
f_p.X0(2) = 0;
f_p.X0(3) = R_m + 0.01; % Add some bias to the filter initial estimate
f_p.X0(4) = K_m + 0.1;
f_p.X0(5) = R_e + 0.2;

f_p.P0 = eye(NX) .* 10^5;

f_p.Q = single(eye(NX) .* 1);

f_p.U = single(1);
f_p.R = {single(10^-5), single(1000)};


for field_name = fieldnames(f_p)'
   if iscell(f_p.(field_name{1}))
        continue
   end
   f_p.(field_name{1}) = single(f_p.(field_name{1}));
end
