function out_table = get_matrix_to_table(in_matrix, info_handle)

[~, info] = get_vector_to_struct(in_matrix(:, 1), info_handle);

in_matrix = in_matrix';

variable_names = {};
out_table = [];

for field_name = fieldnames(info.members)'
    field_size = prod(info.members.(field_name{1}).size);
    if field_size > 1
        for i = 1:field_size
            variable_names = [variable_names, [field_name{1}, '__', num2str(i)]];
        end
    else
        variable_names = [variable_names, field_name{1}];
    end
end

out_table = array2table(in_matrix);
out_table.Properties.VariableNames = variable_names;

end
