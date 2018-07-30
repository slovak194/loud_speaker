%%
syms xd xd_dot xd_dot_dot real;
syms ii v real;
syms R_e R_m K_m Bl M_m dt real;

X = [...
    xd; ...
    xd_dot; ...
    ];

eq1 = R_e*ii == v - Bl*xd_dot;
ii = solve(eq1, ii);
eq2 = M_m*xd_dot_dot == Bl*ii - R_m*xd_dot - K_m * xd;
xd_dot_dot = solve(eq2, xd_dot_dot);

X_dot = [...
    xd_dot; ...
    xd_dot_dot; ...
    ];

u = [v]'; % inputs
p = [R_e, R_m, K_m, Bl, M_m]'; % parameters
n = sym('n', size(X)); % noize

% % Or, in a state space form:
% Original equations:
% 	R_e*ii == v - Bl*xd_dot
% 	M_m*xd_dot_dot == Bl*ii - R_m*xd_dot - K_m * xd
% Asssumed state space form:
% 	dx/dt = A*x(t) + B*u(t)
% 	y(t) = C*x(t) + D*u(t)
% Result matrixes:

loudspeaker_parameters_simple

A = ...
    [...
    0, 1; ...
    (-K_m/M_m),  (-R_m/M_m - Bl*Bl/(R_e*M_m)) ...
    ];

B = [...
    0; ...
    Bl/(R_e*M_m) ...
    ];

C = [0, (-Bl/R_e)];

D = 1/R_e;
