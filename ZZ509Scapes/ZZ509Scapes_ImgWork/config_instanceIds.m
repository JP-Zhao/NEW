function config_instanceIds(file_path_json, file_path_instanceIds_png)
% file_path_json = 'D:\MATLAB\WORK\cityscapes_ImgWork\my_cityspaces\gtFine\train\';
% json文件在的位置

% file_path_instanceIds_png = 'D:\MATLAB\WORK\cityscapes_ImgWork\my_cityspaces\gtFine\train\';
%图片保存的位置
json_path_list = dir(strcat(file_path_json,'*.json'));%获取该文件夹中所有jpg格式的图像
num = length(json_path_list);
name = {json_path_list.name};
% road的id是7
% sky的id是23

road = 7; sky = 23; rail = 10;
for i = 1 : num
    path = [file_path_json, cell2mat(name(i))];
    jsonData = loadjson(path); % jsonData是个struct结构
    %     jsonData.objects{1, 1}.polygon               %看看这个数据长什么样
    TempImg = uint16(zeros(jsonData.imageHeight, jsonData.imageWidth));          %背景是unlabel = 0
    for j = 1 : length(jsonData.objects)
        BW =roipoly(TempImg, jsonData.objects{1, j}.polygon(:, 1), jsonData.objects{1, j}.polygon(:, 2));
        switch (jsonData.objects{1, j}.label)
            case 'road'
                TempImg(find(BW == 1)) = road;
            case 'rail'
                TempImg(find(BW == 1)) = rail;
        end
    end
    TempImg(1 : 5, :) = 3; TempImg(end - 4 : end, :) = 3;
    TempImg(:, 1 : 6) = 3; TempImg(:, end - 4 : end) = 3;       %加上点边界
    imwrite(TempImg, strcat(file_path_instanceIds_png, erase(cell2mat(name(i)), '_gtFine_polygons.json'), '_gtFine_instanceIds', '.png'));
    
end



end

