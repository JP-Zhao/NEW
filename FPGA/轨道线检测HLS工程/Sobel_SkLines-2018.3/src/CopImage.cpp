#include "CopImage.h"


void CopImage(GRAY_IMAGE& src, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int Kernel_size, int StartLoc[2][2], int OutLoc[2][2])
//输入是源图像流，输出图像流，原图像的rows，cols，卷积核的大小，输入的起始点坐标（StartLoc[1][1], StartLoc[1][2]）,输出的终止点坐标（OutLoc[2][1], OutLoc[2][2]）这是在原图中的位置, 输出的图像尺寸
{

	//int RowLeth, ColLeth;		//起始点和终止点之间的长度
	//RowLeth = StartLoc[1][0] - StartLoc[0][0] + 1;		//行之间长度
	//ColLeth = StartLoc[1][1] - StartLoc[0][1] + 1;		//列之间长度

	//OutLoc[0][0] = StartLoc[0][0];
	//OutLoc[0][1] = StartLoc[0][1];
	//OutLoc[1][0] = (RowLeth / Kernel_size) * Kernel_size + StartLoc[0][0] - 1;
	//OutLoc[1][1] = (ColLeth / Kernel_size) * Kernel_size + StartLoc[0][1] - 1;


	for(int i = 0; i < HEIGHT; i++){
		for(int j = 0; j < WIDTH; j++){
			GRAY_PIXEL dst_data;
			src >> dst_data;
			if((i >= OutLoc[0][0] & i <= OutLoc[1][0]) & (j >= OutLoc[0][1] & j <= OutLoc[1][1])){
				dst << dst_data;
			}
			else
				continue;
		}
	}

}


