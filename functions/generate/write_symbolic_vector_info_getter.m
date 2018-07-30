function write_symbolic_vector_info_getter(SymbolsStr, path_str, name)

Symbols = {};
for pSymbolStr = SymbolsStr
    Symbols = [Symbols; char(pSymbolStr)];
end

current_ptr = 1;
for Symbol = Symbols'
    current_symbol = evalin('base', Symbol{1});
    Info.members.(Symbol{1}).range = current_ptr:(current_ptr + numel(current_symbol) - 1);
    Info.members.(Symbol{1}).size = size(current_symbol);
    current_ptr = current_ptr + numel(current_symbol);
end

Info.numel = current_ptr - 1;

file_name = fullfile(path_str, ['get_', name, '_info.m']);

matlab.io.saveVariablesToScript(file_name, 'Info')

file_path = which(file_name);
file_str = fileread(file_path);

file_str = "function Info = get_" + name + "_info()" + newline + ...
    file_str + newline + "end";

fid = fopen(file_path, 'w');
fprintf(fid, '%s', file_str);
fclose(fid);

rehash;

end