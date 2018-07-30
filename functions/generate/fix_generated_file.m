function fix_generated_file(file_name)

file_path = which(file_name);
file_str = fileread(file_path);

file_str = strrep(file_str, 'in1', 'X');
file_str = strrep(file_str, 'in2', 'u');
file_str = strrep(file_str, 'in3', 'n');
file_str = strrep(file_str, 'in4', 'p');
file_str = strrep(file_str, [';', newline], ';');
file_str = strrep(file_str, ';', [';', newline]);

for i = 1:100
    file_str = strrep(file_str, ['(', num2str(i), ',:);'], ['(', num2str(i), ');']);
end

fid = fopen(file_path, 'w');
fprintf(fid, '%s', file_str);
fclose(fid);

% edit(file_name);

end
