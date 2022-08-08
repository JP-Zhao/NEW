
#include "filtrel_kernelXS.h"


void filtrel_kernelXS(GRAY_IMAGE& src, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int Kernel_size, int Select_MS)
//�������ʱԭͼ������src�����ͼ��������dst��ԭͼ��rows��ԭͼ��cols������˴�С���ܼ���Ƥ����ϵ����Ƥ��ѡ��
//Select_MSΪ1ʱΪ�ܼ���Ƥ����Ϊ0ʱΪϡ����Ƥ��
{
	int line_buf[Kernel_size][WIDTH];
	int window_buf[Kernel_size][Kernel_size];
	int length = WIDTH / Kernel_size;
	int Line_Flag[length];		//Line���ڵı�־


for(int count = 0; count < HEIGHT / Kernel_size; count++){
	for(int yi =0; yi < Kernel_size; yi++){
		for(int xi = 0; xi < WIDTH; xi++){
			GRAY_PIXEL src_data;
			src >> src_data;
			line_buf[yi][xi] = src_data.val[0];
		}
	}

	int temp, flag, yuzhi;
	yuzhi = (Select_MS)?15:30;		//���Select_MSΪ1ʱ���ܼ���Ƥ����ֵ����Ϊ35�����Ϊ0ʱʱϡ����Ƥ����ֵ����Ϊ20
	for(int i = 0; i < length; i++){
		temp = 0;
		flag = 0;
		Line_Flag[i] = 0;			//��ʼ��
		for(int j = 0; j < Kernel_size; j++){
			if(flag)
				break;
			for(int k = 0; k < Kernel_size; k++){
				if(line_buf[j][i * Kernel_size + k])
					temp++;
				else if(Select_MS){
					if(temp > yuzhi)
					{
						Line_Flag[i] = 1;
						flag = 1;
						break;
					}
					else
						continue;
				}
				else
				{
					if(temp > yuzhi)
					{
						Line_Flag[i] = 0;
						flag = 1;
						break;
					}
					else if(j == Kernel_size - 1 && k == Kernel_size - 1)
						Line_Flag[i] = 1;
					else
						continue;
				}
			}
		}
	}

	for(int yi =0; yi < Kernel_size; yi++){
		for(int xi = 0; xi < WIDTH; xi++){
			GRAY_PIXEL dst_data;
			if(Line_Flag[xi / Kernel_size]){
				dst_data.val[0] = 0;
				dst << dst_data;
			}
			else{
				dst_data.val[0] = 255;
				dst << dst_data;
			}
		}
	}

}

}


