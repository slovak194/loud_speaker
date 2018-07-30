%%
%
switch model_name
    case 'simple'
        loudspeaker_symbolic_model_simple;
    case 'identification'
        loudspeaker_symbolic_model_identification
    case 'identification_full'
        loudspeaker_symbolic_model_identification_full
    otherwise
end

model_handle_str = ...
"function model_handle = get_model_handle()" + newline + ...
"model_handle = @get_symgen_step_loud_speaker_" + model_name + ";" + newline + ...
"end" + newline;

fid = fopen(which('get_model_handle.m'), 'w');
fprintf(fid, '%s', model_handle_str);
fclose(fid);

X_dot = simplify(X_dot, ...
    'Criterion', 'preferReal' ...
    );

%%

[PATHSTR, ~, ~] = fileparts(which(mfilename));

% write_symbolic_vector_info_getter(DebugSymbols, PATHSTR, 'debug');
write_symbolic_vector_info_getter(cellstr(string(p))', PATHSTR, 'parameters');
write_symbolic_vector_info_getter(cellstr(string(X))', PATHSTR, 'state');
write_symbolic_vector_info_getter(cellstr(string(u))', PATHSTR, 'ctrl');

debugDX = [];

for x = cellstr(string(X))'
    sym_name = x{1} + "_dot";
    syms(sym_name)
    debugDX = [debugDX; evalin('base', sym_name)];
end

write_symbolic_vector_info_getter(cellstr(string(debugDX))', PATHSTR, 'dstate');

%%
[PATHSTR, ~, ~] = fileparts(which(mfilename));
file_name = fullfile(PATHSTR, ['get_symgen_step_loud_speaker_', model_name,'.m']);

% generate a function w inputs: {state(X), inputs, noize, params}, output: change of state(dX)
get_symgen_dX = matlabFunction(X_dot, [], ...
    'File', file_name, ...
    'Optimize', true, ...
    'Vars', {X, u, n, p}, ...
    'Outputs',{'dX', 'Debug'});

fix_generated_file(file_name);

%% Prediction Jacobians
X_out = get_prediction(X, u, n, p, dt);

J_X_out_x = jacobian(X_out, X);
J_X_out_u = jacobian(X_out, u);
J_X_out_n = jacobian(X_out, n);

[PATHSTR, ~, ~] = fileparts(which(mfilename));
file_name = fullfile(PATHSTR, 'get_prediction_jacobians.m');
matlabFunction(J_X_out_x, J_X_out_u, J_X_out_n, ...
    'File', file_name, ...
    'Optimize', true, ...
    'Vars', {X, u, n, p, dt}, ...
    'Outputs', {'J_X_out_x', 'J_X_out_u', 'J_X_out_n'});

fix_generated_file(file_name);

%% Measurements Jacobians i
J_y_x = jacobian(ii, X);
J_y_u = jacobian(ii, u);
J_y_n = jacobian(ii, n);

[PATHSTR, ~, ~] = fileparts(which(mfilename));
file_name = fullfile(PATHSTR, 'get_ii_measurement.m');
matlabFunction(ii, J_y_x, J_y_u, J_y_n, ...
    'File', file_name, ...
    'Optimize', false, ...
    'Vars', {X, u, n, p}, ...
    'Outputs', {'y_ii', 'J_y_x', 'J_y_u', 'J_y_n'});

fix_generated_file(file_name);

%% Measurements Jacobians R_e
J_y_x = jacobian(R_e, X);
J_y_u = jacobian(R_e, u);
J_y_n = jacobian(R_e, n);

[PATHSTR, ~, ~] = fileparts(which(mfilename));
file_name = fullfile(PATHSTR, 'get_R_e_measurement.m');
matlabFunction(R_e, J_y_x, J_y_u, J_y_n, ...
    'File', file_name, ...
    'Optimize', false, ...
    'Vars', {X, u, n, p}, ...
    'Outputs', {'y_R_e', 'J_y_x', 'J_y_u', 'J_y_n'});

fix_generated_file(file_name);

rehash;

%%
disp([mfilename, ': done!'])

