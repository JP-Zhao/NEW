

#include "OvlayImage.h"

void OvlayImage(GRAY_IMAGE& src, GRAY_IMAGE& ovlaysrc, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int StartLoc[2], int RowLeth, int ColLeth, int OvlayFlag)
//输入参数是，源图像流，叠加图像流，输出图像流,源图像的rows，cols，叠加的起始点[StartLoc(1), StartLoc(2)]，叠加图像的行尺寸RowLeth，叠加图像的列尺寸ColLeth, 叠加图像选择为1时直接输出待叠图像
//为0时输出两者重合选择后的图像
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
					if(ovlaysrc_data.val[0])		//像素点是白色的，则输出原图数据流
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
