%% Read data from files in cmake-build folder
state_real = import_test_results('cmake-build-debug/state_real.csv');
state_predicted = import_test_results('cmake-build-debug/state_predicted.csv');
state_var = import_test_results('cmake-build-debug/state_var.csv');
state_err = import_test_results('cmake-build-debug/state_err.csv');

%%
last_fig = gcf;
fig_idx = 1;

%% Plot

for state_name = state_real.Properties.VariableNames
    fig(fig_idx) = figure(fig_idx);
    fig(fig_idx).WindowStyle = 'docked';
    fig(fig_idx).Name = state_name{1};
    fig_idx = fig_idx + 1;
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
end
