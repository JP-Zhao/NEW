clear;clc

Flag = 0;       %表示运行1次的程序都不运行
%% 读取文件查看格式
%json文件格式
filenametes = 'D:\MATLAB\WORK\cityscapes_ImgWork\mask_aachen\aachen_000017_000019_gtFine_polygons.json';
jsonDatates = loadjson(filenametes); % jsonData是个struct结构
leixing = class(jsonDatates.objects{1}.polygon);
fprintf('目标json文件的polygon数据类型是 %s\n', leixing);   %直接输出到屏幕；类似于C语言的输出格式

%color文件格式
filenametes = 'D:\MATLAB\WORK\cityscapes_ImgWork\mask_aachen\aachen_000017_000019_gtFine_color.png';
img_gtFine_color = imread(filenametes); % jsonData是个struct结构
multiple = 4;      %截取的倍数
img_gtFine_color_example_1layer = img_gtFine_color([1 : multiple : 1024], [1 : multiple : 2048], 1);
img_gtFine_color_example_2layer = img_gtFine_color([1 : multiple : 1024], [1 : multiple : 2048], 2);
img_gtFine_color_example_3layer = img_gtFine_color([1 : multiple : 1024], [1 : multiple : 2048], 3);
leixing = class(img_gtFine_color);
fprintf('目标gtFine_color文件的数据类型是 %s\n', leixing);   %直接输出到屏幕；类似于C语言的输出格式

%instanceIds文件格式
filenametes = 'D:\MATLAB\WORK\cityscapes_ImgWork\mask_aachen\aachen_000017_000019_gtFine_instanceIds.png';
img_gtFine_instanceIds = imread(filenametes); % jsonData是个struct结构
multiple = 4;      %截取的倍数
img_gtFine_instanceIds_example_1layer = img_gtFine_instanceIds([1 : multiple : 1024], [1 : multiple : 2048]);
leixing = class(img_gtFine_instanceIds);
fprintf('目标gtFine_instanceIds文件的数据类型是 %s\n', leixing);   %直接输出到屏幕；类似于C语言的输出格式

%labelIds文件格式
filenametes = 'D:\MATLAB\WORK\cityscapes_ImgWork\mask_aachen\aachen_000017_000019_gtFine_labelIds.png';
img_gtFine_labelIds = imread(filenametes); % jsonData是个struct结构
multiple = 4;      %截取的倍数
img_gtFine_labelIds_example_1layer = img_gtFine_labelIds([1 : multiple : 1024], [1 : multiple : 2048]);
leixing = class(img_gtFine_labelIds);
fprintf('目标gtFine_labelIds文件的数据类型是 %s\n', leixing);   %直接输出到屏幕；类似于C语言的输出格式

%% 转换图片格式，将JPG格式转换成png格式
% if (Flag == 1)
%     %注意只能运行一次，不能每次都运行
%     num = tif2png('D:\MATLAB\WORK\cityscapes_ImgWork\半壁店-铁路照片-0618\','D:\MATLAB\WORK\cityscapes_ImgWork\半壁店-铁路照片-0618\png\');
%     %num表示转换后的图片的个数
% end

%% 数据的初始化路径
cofig_json_path1 = 'D:\MATLAB\WORK\cityscapes_ImgWork\半壁店-铁路照片-0618\png\test\'; 
cofig_json_path2 = 'D:\MATLAB\WORK\cityscapes_ImgWork\半壁店-铁路照片-0618\png\test\banbiTest\'; 

path =  'D:\MATLAB\WORK\cityscapes_ImgWork\半壁店-铁路照片-0618\png\test\banbiTest\'; 
%%  修改json文件
%只需要运行一次
if (Flag == 0)
    file_path_json = cofig_json_path1;       %读取文件路径
    file_path_save = cofig_json_path2;        %保存文件路径
    configjson(file_path_json, file_path_save)
end

%% 生成gtFine_labelIds文件 直接按照标签ID来，不区分实例与否
% road的id是7
% sky的id是23
if (Flag == 0)
    file_path_json = path;
    file_path_labelIds_png = path;
    config_labelIds(file_path_json, file_path_labelIds_png)
end

%% 生成gtFine_instanceIds文件 如果是选择了实例则有0~34需要计算标注不然都一样
% road的id是7
% sky的id是23
if (Flag == 0)
    file_path_json = path;
    file_path_instanceIds_png = path;
    config_instanceIds(file_path_json, file_path_instanceIds_png)
end

%% 生成gtFine_color文件 直接按照标签ID来，不区分实例与否
% road的id是7
% sky的id是23
if (Flag == 0)
    file_path_json = path;
    file_path_color_png = path;
    config_color(file_path_json, file_path_color_png)
end
