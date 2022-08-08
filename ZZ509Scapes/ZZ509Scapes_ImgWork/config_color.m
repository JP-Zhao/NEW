function config_color(file_path_json, file_path_color_png)
% file_path_json = 'D:\MATLAB\WORK\cityscapes_ImgWork\my_cityspaces\gtFine\train\';
% json文件在的位置

% file_path_instanceIds_png = 'D:\MATLAB\WORK\cityscapes_ImgWork\my_cityspaces\gtFine\train\';
%图片保存的位置
json_path_list = dir(strcat(file_path_json,'*.json'));%获取该文件夹中所有jpg格式的图像
num = length(json_path_list);
name = {json_path_list.name};
% road的id是7
% sky的id是23
road = [128, 64, 128]; sky = [70, 130, 180]; rail = [230, 150, 140]; unlabel = [0, 0, 0];

for i = 1 : num
    path = [file_path_json, cell2mat(name(i))];
    jsonData = loadjson(path); % jsonData是个struct结构
    %     jsonData.objects{1, 1}.polygon               %看看这个数据长什么样
    for j = 1 : 3
        TempImg(:, :, j) = uint8(unlabel(j) * ones(jsonData.imageHeight, jsonData.imageWidth));
    end
    
    for k = 1 : length(jsonData.objects)
        BW =roipoly(TempImg(:, :, 1), jsonData.objects{1, k}.polygon(:, 1), jsonData.objects{1, k}.polygon(:, 2));
        
        for j = 1 : 3
            Tmep2 = TempImg(:, :, j);
            switch (jsonData.objects{1, k}.label)
                case 'road'
                    Tmep2(find(BW == 1)) = road(j);
                case 'rail'
                    Tmep2(find(BW == 1)) = rail(j);
            end
            TempImg(:, :, j) = Tmep2;
        end
        
    end
    
    
    TempImg(1 : 5, :) = 3; TempImg(end - 4 : end, :) = 3;
    TempImg(:, 1 : 6) = 3; TempImg(:, end - 4 : end) = 3;       %加上点边界
    imwrite(TempImg, strcat(file_path_color_png, erase(cell2mat(name(i)), '_gtFine_polygons.json'), '_gtFine_color', '.png'));
    
end



end

