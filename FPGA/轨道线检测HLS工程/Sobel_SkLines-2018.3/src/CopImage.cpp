#include "CopImage.h"


void CopImage(GRAY_IMAGE& src, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int Kernel_size, int StartLoc[2][2], int OutLoc[2][2])
//������Դͼ���������ͼ������ԭͼ���rows��cols������˵Ĵ�С���������ʼ�����꣨StartLoc[1][1], StartLoc[1][2]��,�������ֹ�����꣨OutLoc[2][1], OutLoc[2][2]��������ԭͼ�е�λ��, �����ͼ��ߴ�
{

	//int RowLeth, ColLeth;		//��ʼ�����ֹ��֮��ĳ���
	//RowLeth = StartLoc[1][0] - StartLoc[0][0] + 1;		//��֮�䳤��
	//ColLeth = StartLoc[1][1] - StartLoc[0][1] + 1;		//��֮�䳤��

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


