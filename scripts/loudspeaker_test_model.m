[data, Fs] = audioread(which('speech_dft.mp3'));

data = single(data * 10);
dt = single(1/Fs);

X = X0;
ut = single(zeros(size(u0))); % service vector for inputs

% start = 8525;
% stop = 15540;

% start = 8525;
% stop = 10540;

start = 1;
stop = numel(data);

data_range = start:stop;

EE = zeros(numel(X0), numel(data_range));
XX = zeros(numel(X0), numel(data_range));
YY = zeros(2, numel(data_range));
XXK = zeros(numel(X0), numel(data_range));
PP_diag = zeros(numel(X0), numel(data_range));

i = 0;
for u = data(data_range)'
    i = i + 1;
    n_states_model = single(zeros(size(X0)));
    [X, ~, ~, ut] = get_model_step(X, u, ut, n, p, dt);
    
    n_states_meas = single(zeros(size(X0)));
    y_i = get_ii_measurement(X, u, n_states_meas, p);
    Y = {y_i};
    
    if strcmp(func2str(get_model_handle()), 'get_symgen_step_loud_speaker_identification_full')
        y_R_e = get_R_e_measurement(X, u, n_states_meas, p);
        y_R_e_noizy = y_R_e + rand*10^-3;
        Y = [Y, y_R_e_noizy];
    end
    
    [XK, P_diag] = get_ekf(u, Y, f_p, p, dt);
    
    YY(:, i) = [y_i; y_R_e];
    XX(:, i) = X;
    XXK(:, i) = XK;
    EE(:, i) = sqrt((X - XK).^2);
    PP_diag(:, i) = P_diag;
end

state_real = get_matrix_to_table(XX, @get_state_info);
state_predicted = get_matrix_to_table(XXK, @get_state_info);
state_var = get_matrix_to_table(PP_diag, @get_state_info);
state_err = get_matrix_to_table(EE, @get_state_info);

%%
last_fig = gcf;
fig_idx = 1;

%%

for state_name = state_real.Properties.VariableNames
    fig(fig_idx) = figure(fig_idx);
    fig(fig_idx).WindowStyle = 'docked';
    fig(fig_idx).Name = state_name{1};
    ax1 = subplot(3, 1, 1);
    cla
    hold on; grid on; grid minor
    plot(state_real{:, state_name{1}}, '-', 'DisplayName', [state_name{1}, '_real']);
    plot(state_predicted{:, state_name{1}}, '.-', 'DisplayName', [state_name{1}, '_predicted']);
    l = legend('show'); l.Interpreter = 'none';
    ax2 = subplot(3, 1, 2);
    cla
    hold on; grid on; grid minor
    plot(state_var{:, state_name{1}}, '.-', 'DisplayName', [state_name{1}, '_variance']);
    l = legend('show'); l.Interpreter = 'none';
    ax3 = subplot(3, 1, 3);
    cla
    hold on; grid on; grid minor
    plot(state_err{:, state_name{1}}, '.-', 'DisplayName', [state_name{1}, '_eror']);
    l = legend('show'); l.Interpreter = 'none';
    linkaxes([ax1, ax2, ax3],'x')
    fig_idx = fig_idx + 1;
end

%%
fig(fig_idx) = figure(fig_idx);
fig(fig_idx).WindowStyle = 'docked';
fig(fig_idx).Name = 'phase_plot';
fig_idx = fig_idx + 1;
cla
hold on; grid on; grid minor
plot(state_real.xd, state_real.xd_dot, '.-', 'DisplayName', 'xd_dot_vrpt_xd_real');
plot(state_predicted.xd, state_predicted.xd_dot, '.-', 'DisplayName', 'xd_dot_vrpt_xd_predicted');
l = legend('show'); l.Interpreter = 'none';

%%
fig(fig_idx) = figure(fig_idx);
fig(fig_idx).WindowStyle = 'docked';
fig(fig_idx).Name = 'measurements';
fig_idx = fig_idx + 1;
cla
hold on; grid on; grid minor
plot(YY(1, :), '.-', 'DisplayName', 'ii');
plot(YY(2, :), '.-', 'DisplayName', 'R_e_noizy');
l = legend('show'); l.Interpreter = 'none';


%% Uncomment if needed
% for current_fig = fig
%    savefig(current_fig, fullfile(pwd, 'fig', current_fig.Name)) 
% end

%%
figure(last_fig);
