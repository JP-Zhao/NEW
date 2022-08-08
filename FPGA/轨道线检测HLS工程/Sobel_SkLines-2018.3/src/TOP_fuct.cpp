#include "filtrel_kernel.h"
#include "filtrel_kernelXS.h"
#include "TOP_fuct.h"
#include "CopImage.h"
#include "OvlayImage.h"
#include "SeekPoint.h"
#include "SeekLines.h"
#include "PlotLines.h"

#define START_LOC {{216, 1},{399, 294}}		//当输入图像是"0110_35.jpg"时
#define OVLYIMA_STRAT {216, 1}					//当输入图像是"0110_35.jpg"时
//#define START_LOC {{126, 0},{599, 399}}		//当输入图像是"0110_35.jpg"时
//#define OVLYIMA_STRAT {126, 0}					//当输入图像是"0110_35.jpg"时


void TOP_fuct(AXI_STREAM &INPUT_STREAM,
		AXI_STREAM &OUTPUT_STREAM,
		int rows,
		int cols)
{

#pragma HLS INTERFACE axis port = INPUT_STREAM
#pragma HLS INTERFACE axis port = OUTPUT_STREAM
#pragma HLS INTERFACE s_axilite port = rows
#pragma HLS INTERFACE s_axilite port = cols
#pragma HLS INTERFACE ap_ctrl_none port = return
#pragma HLS dataflow


	int Kernel_size = 10, RowLeth, ColLeth;
	int StartLoc[2][2] = START_LOC, OutLoc[2][2];
	int OvlyIma_Start[2] = OVLYIMA_STRAT;		//坐标需要改两个
	int SobOvlyIma_Strt[2] = {0, 0};

	OutLoc[0][0] = StartLoc[0][0];
	OutLoc[0][1] = StartLoc[0][1];
	OutLoc[1][0] = ((StartLoc[1][0] - StartLoc[0][0] + 1) / Kernel_size) * Kernel_size + StartLoc[0][0] - 1;
	OutLoc[1][1] = ((StartLoc[1][1] - StartLoc[0][1] + 1) / Kernel_size) * Kernel_size + StartLoc[0][1] - 1;
	RowLeth = OutLoc[1][0] - OutLoc[0][0] + 1;		//行之间长度
	ColLeth = OutLoc[1][1] - OutLoc[0][1] + 1;		//列之间长度

	//hls::mat 格式变量
	RGB_IMAGE	ImgRgb_Datsrc(rows,cols);

	GRAY_IMAGE	ImgGry_Datsrc(rows,cols);
	GRAY_IMAGE	ImgGry_Datsrc_a(rows,cols);
	GRAY_IMAGE	ImgGry_Datsrc_b(rows,cols);
	GRAY_IMAGE	ImgGry_Datcop(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Datcop_a(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Datcop_b(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Sobcop_sp(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Sobcop_cz(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Threh_sp(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Threh_cz(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Copfilt(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Ovlaycz(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Ovlaycz_a(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Ovlaycz_b(RowLeth, ColLeth);
	GRAY_IMAGE	ImgGry_Datovlay(rows,cols);

	RGB_IMAGE	ImgRgb_Datdst(rows,cols);

	int XsRow, XsCol, XsKen_size = 30;
	int XsStartLoc[2][2] = {{0, 0}, {RowLeth - 1, ColLeth - 1}}, XsOutLoc[2][2];
	int XsOvImStrtLoc[2] = {0, 0};
	//XsStartLoc[0][0] = 0; XsStartLoc[0][1] = 0; XsStartLoc[1][0] = RowLeth - 1; XsStartLoc[1][1] = ColLeth - 1;
	XsOutLoc[0][0] = XsStartLoc[0][0];
	XsOutLoc[0][1] = XsStartLoc[0][1];
	XsOutLoc[1][0] = ((XsStartLoc[1][0] - XsStartLoc[0][0] + 1) / XsKen_size) * XsKen_size + XsStartLoc[0][0] - 1;
	XsOutLoc[1][1] = ((XsStartLoc[1][1] - XsStartLoc[0][1] + 1) / XsKen_size) * XsKen_size + XsStartLoc[0][1] - 1;
	XsRow = XsOutLoc[1][0] - XsOutLoc[0][0] + 1;		//行之间长度
	XsCol = XsOutLoc[1][1] - XsOutLoc[0][1] + 1;		//列之间长度

	GRAY_IMAGE	ImgGry_DatCopXs(XsRow, XsCol);
	GRAY_IMAGE	ImgGry_OvlyFiltcz(XsRow, XsCol);
	GRAY_IMAGE	ImgGry_OvlySumcz(RowLeth, ColLeth);

	//将AXI4 Stream数据转换成hls::mat格式
	hls::AXIvideo2Mat(INPUT_STREAM,ImgRgb_Datsrc);		//导入数据

	//将RGB888格式的彩色数据转换成灰度数据
	hls::CvtColor<HLS_RGB2GRAY,HLS_8UC3,HLS_8UC1>(ImgRgb_Datsrc,ImgGry_Datsrc);		//灰度化处理
	hls::Duplicate(ImgGry_Datsrc, ImgGry_Datsrc_a, ImgGry_Datsrc_b);				//复制灰度化图像

	//裁剪出合适密集橡皮擦处理的区域
	CopImage(ImgGry_Datsrc_a, ImgGry_Datcop, rows, cols, Kernel_size, StartLoc, OutLoc);	//裁剪出适合密集橡皮擦操作的区域
	hls::Duplicate(ImgGry_Datcop, ImgGry_Datcop_a, ImgGry_Datcop_b);						//复制裁剪后的图像

	//将灰度数据与Sobel算子卷积SS
	hls::Sobel<1,0,3>(ImgGry_Datcop_b,ImgGry_Sobcop_cz);											//对裁剪区域进行垂直方向的Sobel边缘检测
	hls::Sobel<0,1,3>(ImgGry_Datcop_a,ImgGry_Sobcop_sp);											//对裁剪区域进行水平方向的Sobel边缘检测
	hls::Threshold(ImgGry_Sobcop_sp, ImgGry_Threh_sp, 177, 255, HLS_THRESH_BINARY);				//设置阈值，使图像二值化
	hls::Threshold(ImgGry_Sobcop_cz, ImgGry_Threh_cz, 177, 255, HLS_THRESH_BINARY);				//设置阈值，使图像二值化

	//橡皮擦算法，密集橡皮擦处理，输出水平方向的密集处理后橡皮擦格子图像
	filtrel_kernel(ImgGry_Threh_sp, ImgGry_Copfilt, RowLeth, ColLeth, 10, 1);

	//叠加垂直Sobel和密集橡皮擦后的图像
	OvlayImage(ImgGry_Threh_cz, ImgGry_Copfilt, ImgGry_Ovlaycz, RowLeth, ColLeth, SobOvlyIma_Strt, RowLeth, ColLeth, 0);

	//复制垂直Sobel+密集橡皮擦图像
	hls::Duplicate(ImgGry_Ovlaycz, ImgGry_Ovlaycz_a, ImgGry_Ovlaycz_b);

	//裁剪出适合稀疏橡皮擦处理的区域
	CopImage(ImgGry_Ovlaycz_a, ImgGry_DatCopXs, RowLeth, ColLeth, XsKen_size, XsStartLoc, XsOutLoc);

	//稀疏橡皮擦算法，输出尺寸 XsRow, XsCol，输出垂直方向的稀疏处理后橡皮擦格子图像
	filtrel_kernelXS(ImgGry_DatCopXs, ImgGry_OvlyFiltcz, XsRow, XsCol, 30, 0);

	//与垂直方向上Sobel+密集橡皮擦图像叠加输出 Sobel + 密集橡皮擦  + 稀疏橡皮擦图像
	OvlayImage(ImgGry_Ovlaycz_b, ImgGry_OvlyFiltcz, ImgGry_OvlySumcz, RowLeth, ColLeth, XsOvImStrtLoc, XsRow, XsCol, 0);


	float K[N], B[N];
	int NumPoint[N];
	int KBLength[0];

	//在所有有效点内寻找可能的K和B点
	SeekPoint(ImgGry_OvlySumcz, RowLeth, ColLeth, K, B, NumPoint, KBLength);
	int ViKPoint = KBLength[0], SeekLinNum = 2;
	float Seek_K[SeekLinNum], Seek_B[SeekLinNum];

	//在所有有效的K和B点内寻找需要的SeekLinNum根线条，即线条对应的K和B值
	SeekLines(K, B, NumPoint, ViKPoint, Seek_K, Seek_B, SeekLinNum);

	GRAY_IMAGE	PlotLine_dst(RowLeth, ColLeth);

	//根据找到的K和B值画出线
	PlotLines(PlotLine_dst, RowLeth, ColLeth, Seek_K, Seek_B, SeekLinNum);


	//将寻找到的线图与灰度化处理后的图像叠加
	OvlayImage(ImgGry_Datsrc_b, PlotLine_dst, ImgGry_Datovlay, rows, cols, OvlyIma_Start, RowLeth, ColLeth, 0);

	//将灰度数据转换成三个通道的灰度图像
	hls::CvtColor<HLS_GRAY2RGB,HLS_8UC1,HLS_8UC3>(ImgGry_Datovlay,ImgRgb_Datdst);		//导出数据

	//将hls::mat格式数据转换成AXI4 Stream格式
	hls::Mat2AXIvideo(ImgRgb_Datdst,OUTPUT_STREAM);		//输出滤波后的结果


}
