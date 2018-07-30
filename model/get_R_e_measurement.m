function [y_R_e,J_y_x,J_y_u,J_y_n] = get_R_e_measurement(X,v,n,p)
%GET_R_E_MEASUREMENT
%    [Y_R_E,J_Y_X,J_Y_U,J_Y_N] = GET_R_E_MEASUREMENT(IN1,V,IN3,IN4)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    29-Jul-2018 00:02:52

R_e = X(5);
y_R_e = R_e;
if nargout > 1
    J_y_x = [0.0,0.0,0.0,0.0,1.0];
end
if nargout > 2
    J_y_u = 0.0;
end
if nargout > 3
    J_y_n = [0.0,0.0,0.0,0.0,0.0];
end
