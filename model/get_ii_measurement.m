function [y_ii,J_y_x,J_y_u,J_y_n] = get_ii_measurement(X,v,n,p)
%GET_II_MEASUREMENT
%    [Y_II,J_Y_X,J_Y_U,J_Y_N] = GET_II_MEASUREMENT(IN1,V,IN3,IN4)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jul-2018 16:43:28

Bl = p(1);
R_e = X(5);
xd_dot = X(2);
y_ii = (v-Bl.*xd_dot)./R_e;
if nargout > 1
    J_y_x = [0.0,-Bl./R_e,0.0,0.0,-1.0./R_e.^2.*(v-Bl.*xd_dot)];
end
if nargout > 2
    J_y_u = 1.0./R_e;
end
if nargout > 3
    J_y_n = [0.0,0.0,0.0,0.0,0.0];
end
