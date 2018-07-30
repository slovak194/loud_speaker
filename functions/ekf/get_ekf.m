function [X_out, P_diag] = get_ekf(u, y, f_p, p, dt)
%#codegen

persistent X P

if isempty(X)
    X = f_p.X0;
    P = f_p.P0; % State vector covariance
end

meas_h = {...
    @get_ii_measurement, ...
    @get_R_e_measurement, ...
    };

[X_tmp, Ptmp] = get_ekf_iteration(X, P, y, f_p.R, u, f_p.U, f_p.Q, dt, meas_h, p);

if false % TODO Check filter health, reset if needed
    X = f_p.X0;
    P = f_p.P0;
else % Update filter state
    X = X_tmp;
    P = Ptmp;
end

X_out = X;
P_diag = diag(P);

end
