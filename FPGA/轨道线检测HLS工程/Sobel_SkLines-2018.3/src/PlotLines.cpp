#include "PlotLines.h"
#include "filtrel_kernel.h"

#define WITHE_LINE 5			//定义一下画的线宽,此时代表线宽为4，因为有正负二倍的关系

void PlotLines(GRAY_IMAGE& PlotLine_dst, int rows, int cols, float* Seek_K, float* Seek_B, int SeekLinNum)
//输入参数是待输出图像的数据流，待输出图像的行列尺寸，需要画的线的K值，需要画的线的B值，需要画的线的条数
{
	//int x, y[cols][SeekLinNum];		//带入数据时x值时cols坐标，待入y = kx + b可以得到row坐标,每一列是一对KB值对应的坐标值
	int x, y;		//带入数据时x值时cols坐标，待入y = kx + b可以得到row坐标
	GRAY_PIXEL dst_data;
	/*
	for(int j = 0; j < SeekLinNum; j++)
	{
		for(int i = 0; i < cols; i++)
		{
			y[i][j] = Seek_K[j] * i + Seek_B[j];
		}
	}

*/
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			for(int k = 0; k < SeekLinNum; k++)
			{
				y = Seek_K[k] * j + Seek_B[k];
				if(i < (y + WITHE_LINE) && i > (y - WITHE_LINE) && y > 0)
				{
					dst_data.val[0] = 255;		//是黑色 huanl
					break;
				}
				else
				{
					dst_data.val[0] = 0;		//是白色
				}
			}
			PlotLine_dst << dst_data;
		}
	}



}

