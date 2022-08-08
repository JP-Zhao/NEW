function num = tif2png(file_path_jpg,file_path)

    img_path_list = dir(strcat(file_path_jpg, '*.jpg'));%获取该文件夹中所有jpg格式的图像
    num = length(img_path_list);%获取图像总数量
    name = {img_path_list.name};
    numrows = 1024; numcols = 2048;     %resize后的图片大小
    for i=1:num
        path = [file_path_jpg, cell2mat(name(i))];
        data = imread(path);
        Img_rSiz = imresize(data,[numrows numcols]);
        imwrite(Img_rSiz, strcat(file_path, erase(cell2mat(name(i)), '.JPG'), '.png'));
    end

end
% jpg的格式D:\MATLAB\WORK\cityscapes图像处理\my_cityspaces\leftImg8bit\train_jpg
%png格式的存储路径D:\MATLAB\WORK\cityscapes图像处理\my_cityspaces\leftImg8bit\train
%转换后的图片格式与cityscape是一致，均为uint8类型