data_file_path = which('reference_data.h5');

h5disp(data_file_path);

current = h5read(data_file_path, '/current');
voltage = h5read(data_file_path, '/voltage');

plot(current)
hold on
plot(voltage)
