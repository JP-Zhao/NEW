#include "PlotLines.h"
#include "filtrel_kernel.h"

#define WITHE_LINE 5			//����һ�»����߿�,��ʱ�����߿�Ϊ4����Ϊ�����������Ĺ�ϵ

void PlotLines(GRAY_IMAGE& PlotLine_dst, int rows, int cols, float* Seek_K, float* Seek_B, int SeekLinNum)
//��������Ǵ����ͼ����������������ͼ������гߴ磬��Ҫ�����ߵ�Kֵ����Ҫ�����ߵ�Bֵ����Ҫ�����ߵ�����
{
	//int x, y[cols][SeekLinNum];		//��������ʱxֵʱcols���꣬����y = kx + b���Եõ�row����,ÿһ����һ��KBֵ��Ӧ������ֵ
	int x, y;		//��������ʱxֵʱcols���꣬����y = kx + b���Եõ�row����
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
					dst_data.val[0] = 255;		//�Ǻ�ɫ huanl
					break;
				}
				else
				{
					dst_data.val[0] = 0;		//�ǰ�ɫ
				}
			}
			PlotLine_dst << dst_data;
		}
	}



}

