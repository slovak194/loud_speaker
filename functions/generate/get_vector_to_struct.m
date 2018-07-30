function [out_struct, info] = get_vector_to_struct(in_vector, info_handle)

info = info_handle();

for symbol = fieldnames(info.members)'
    out_struct.(symbol{1}) = ...
        reshape(in_vector(info.members.(symbol{1}).range), ...
        info.members.(symbol{1}).size);
end
end
