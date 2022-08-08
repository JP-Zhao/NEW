

#include "OvlayImage.h"

void OvlayImage(GRAY_IMAGE& src, GRAY_IMAGE& ovlaysrc, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int StartLoc[2], int RowLeth, int ColLeth, int OvlayFlag)
//��������ǣ�Դͼ����������ͼ���������ͼ����,Դͼ���rows��cols�����ӵ���ʼ��[StartLoc(1), StartLoc(2)]������ͼ����гߴ�RowLeth������ͼ����гߴ�ColLeth, ����ͼ��ѡ��Ϊ1ʱֱ���������ͼ��
//Ϊ0ʱ��������غ�ѡ����ͼ��
{

	GRAY_PIXEL src_data;
	GRAY_PIXEL ovlaysrc_data;
	GRAY_PIXEL dst_data;

	for(int i = 0; i < HEIGHT; i++){
		for(int j = 0; j < WIDTH; j++){
			src >> src_data;

			if((i >= StartLoc[0] & i < StartLoc[0] + RowLeth) & (j >= StartLoc[1] & j < StartLoc[1] + ColLeth)){
				ovlaysrc >> ovlaysrc_data;
				if(OvlayFlag)
				{
						dst_data = ovlaysrc_data;
						dst << dst_data;
				}
				else{
					if(ovlaysrc_data.val[0])		//���ص��ǰ�ɫ�ģ������ԭͼ������
					{
						dst_data = src_data;
						dst << dst_data;
					}
					else
					{
						dst_data = ovlaysrc_data;
						dst << dst_data;
					}
				}

			}
			else{
				dst_data = src_data;
				dst << dst_data;
			}

		}
	}



}
