function  configjson(file_path_json, file_path_save)
%file_path_json 是原始文件的json           'D:\MATLAB\WORK\cityscapes_ImgWork\my_cityspaces\gtFine\train\'
%file_path_save 是保存到的路径              'D:\MATLAB\WORK\cityscapes_ImgWork\my_cityspaces\gtFine\train\处理后的json文件\'

% 加载工具包的位置
% addpath('D:\Matlab\toolbox\jsonlab-master');


json_path_list = dir(strcat(file_path_json,'*.json'));%获取该文件夹中所有jpg格式的图像
num = length(json_path_list);%获取json文件的数量
name = {json_path_list.name};

for i=1:num
    read_path = [file_path_json, cell2mat(name(i))];
    save_path = [file_path_save, erase(cell2mat(name(i)), '.json'), '_gtFine_polygons', '.json'];
    
    % 1.新建.json文件
    fid= fopen(save_path, 'w+');
    
    % step 1: 读取json文件
    jsonData = loadjson(read_path); % jsonData是个struct结构
    
    % %     filenametes = 'D:\MATLAB\WORK\cityscapes_ImgWork\mask_aachen\aachen_000000_000019_gtFine_polygons.json';
    % %     jsonDatates = loadjson(filenametes); % jsonData是个struct结构
    % %     leixing = class(jsonDatates.objects{1}.polygon);
    % %     fprintf('目标json文件的polygon数据类型是 %s\n', leixing);   %直接输出到屏幕；类似于C语言的输出格式
    
    field = {'version', 'flags', 'imagePath', 'imageData','shapes'};
    numb = length(field);
    % %     fprintf('需要删除的json文件中的结构体名称个数 %d\n', num);   %直接输出到屏幕；类似于C语言的输出格式
    Nm_Polygon = jsonData.shapes{1}.shape_type;
    Name = 'objects';
    % celldisp(jsonData.shapes);        %展示这个结构体
    jsonData.(Name) = jsonData.shapes;
    for i = 1 : numb
        jsonData = rmfield(jsonData, field(i));        %删除结构体的字段
    end
    
    
    for i = 1 : length(jsonData.objects)

        jsonData.objects{1,i}.(Nm_Polygon) = round(jsonData.objects{1,i}.points);       %四舍五入取整

        field = {'group_id', 'shape_type', 'flags','points'};
        numb = length(field);
        % %     fprintf('需要删除的objects中的结构体名称个数 %d\n', num);   %直接输出到屏幕；类似于C语言的输出格式
        for j = 1 : numb
            jsonData.objects{1, i} = rmfield(jsonData.objects{1, i}, field(j));        %删除结构体的字段
        end
        
    end
    json=savejson('',jsonData);
    
    % 2.写入json文件进行保存
    fprintf(fid, '%s',json);
    fclose(fid);
    
    
end


end

