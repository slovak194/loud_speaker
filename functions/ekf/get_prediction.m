function [X_out, J_X_out_x, J_X_out_u, J_X_out_n] = get_prediction(X, u, n, p, dt)
%#codegen

persistent ut

if isempty(ut)
	ut = single(zeros(size(u)));
end

[X_out, ~, ~, ut] = get_model_step(X, u, ut, n, p, dt);

if nargout > 1
	[J_X_out_x,J_X_out_u,J_X_out_n] = get_prediction_jacobians(X, u, n, p, dt);
end

end

