function [X, dX, Debug, ut] = get_simulate_no_persist(step_handle, X, u, ut, n, p, dt)
%#codegen

ut1 = u;

[k1, Debug] = step_handle(X,				ut, n, p);
[k2, ~]     = step_handle(X + (dt/2)*k1,	ut, n, p);
[k3, ~]     = step_handle(X + (dt/2)*k2,	ut, n, p);
[k4, ~]     = step_handle(X + dt*k3,		ut1, n, p);

ut = ut1;

delta_X = (dt/6) * (k1 + 2*k2 + 2*k3 + k4);

X = X + delta_X + n;

dX = delta_X ./ dt;

end
