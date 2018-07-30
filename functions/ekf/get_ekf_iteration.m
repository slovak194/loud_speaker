function [X_corrected, P_corrected, X_predicted, P_predicted] ...
	= get_ekf_iteration(X_in, P_in, y, R, u, U, Q, dt, measurements_handles, p)

P = P_in;

MahDistSquaredMax = [500 5].^2; % TODO move to params.
n = single(zeros(size(X_in))); % We are not going to feed noize inside filter :)

% Evolution step
[X, J_x, J_u, J_n] = get_prediction(X_in, u, n, p, dt);

JInfCheck = any([
	any(~isfinite(X)), ...
	any(~isfinite(J_x)), ...
	any(~isfinite(J_u)), ...
	any(~isfinite(J_n))...
	]);

if JInfCheck
	disp('Jacobians from get_prediction are not finite!!!')
end

assert(~JInfCheck);

P = J_x * P * J_x' + J_n * Q * J_n' + J_u * U * J_u';
P = (P + P')/2.0; % Ensure it is symetric. On target I would store it as a triangle.

X_predicted = X;
P_predicted = P;

for i = 1:numel(y)
		% Get predicted measurements
		[e, H] = measurements_handles{i}(X, u, n, p);
		
		E = H * P * H';
		z = y{i} - e;
		
		Z = E + R{i};
		
		Zinv = Z^(-1);
		
		MahDistSquared = z' * Zinv * z;
		
		if MahDistSquared < MahDistSquaredMax(i)
			K = P * H' * Zinv;
			X = X + K * z;
			P = P - K * H * P;
		end
end

X_corrected = X;
P_corrected = P;

end