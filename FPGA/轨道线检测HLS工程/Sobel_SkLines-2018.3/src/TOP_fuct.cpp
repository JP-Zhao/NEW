#include "filtrel_kernel.h"
#include "filtrel_kernelXS.h"
#include "TOP_fuct.h"
#include "CopImage.h"
#include "OvlayImage.h"
#include "SeekPoint.h"
#include "SeekLines.h"
#include "PlotLines.h"

#define START_LOC {{216, 1},{399, 294}}		//������ͼ����"0110_35.jpg"ʱ
#define OVLYIMA_STRAT {216, 1}					//������ͼ����"0110_35.jpg"ʱ
//#define START_LOC {{126, 0},{599, 399}}		//������ͼ����"0110_35.jpg"ʱ
//#define OVLYIMA_STRAT {126, 0}					//������ͼ����"0110_35.jpg"ʱ


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
	int OvlyIma_Start[2] = OVLYIMA_STRAT;		//������Ҫ������
	int SobOvlyIma_Strt[2] = {0, 0};

	OutLoc[0][0] = StartLoc[0][0];
	OutLoc[0][1] = StartLoc[0][1];
	OutLoc[1][0] = ((StartLoc[1][0] - StartLoc[0][0] + 1) / Kernel_size) * Kernel_size + StartLoc[0][0] - 1;
	OutLoc[1][1] = ((StartLoc[1][1] - StartLoc[0][1] + 1) / Kernel_size) * Kernel_size + StartLoc[0][1] - 1;
	RowLeth = OutLoc[1][0] - OutLoc[0][0] + 1;		//��֮�䳤��
	ColLeth = OutLoc[1][1] - OutLoc[0][1] + 1;		//��֮�䳤��

	//hls::mat ��ʽ����
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
	XsRow = XsOutLoc[1][0] - XsOutLoc[0][0] + 1;		//��֮�䳤��
	XsCol = XsOutLoc[1][1] - XsOutLoc[0][1] + 1;		//��֮�䳤��

	GRAY_IMAGE	ImgGry_DatCopXs(XsRow, XsCol);
	GRAY_IMAGE	ImgGry_OvlyFiltcz(XsRow, XsCol);
	GRAY_IMAGE	ImgGry_OvlySumcz(RowLeth, ColLeth);

	//��AXI4 Stream����ת����hls::mat��ʽ
	hls::AXIvideo2Mat(INPUT_STREAM,ImgRgb_Datsrc);		//��������

	//��RGB888��ʽ�Ĳ�ɫ����ת���ɻҶ�����
	hls::CvtColor<HLS_RGB2GRAY,HLS_8UC3,HLS_8UC1>(ImgRgb_Datsrc,ImgGry_Datsrc);		//�ҶȻ�����
	hls::Duplicate(ImgGry_Datsrc, ImgGry_Datsrc_a, ImgGry_Datsrc_b);				//���ƻҶȻ�ͼ��

	//�ü��������ܼ���Ƥ�����������
	CopImage(ImgGry_Datsrc_a, ImgGry_Datcop, rows, cols, Kernel_size, StartLoc, OutLoc);	//�ü����ʺ��ܼ���Ƥ������������
	hls::Duplicate(ImgGry_Datcop, ImgGry_Datcop_a, ImgGry_Datcop_b);						//���Ʋü����ͼ��

	//���Ҷ�������Sobel���Ӿ��SS
	hls::Sobel<1,0,3>(ImgGry_Datcop_b,ImgGry_Sobcop_cz);											//�Բü�������д�ֱ�����Sobel��Ե���
	hls::Sobel<0,1,3>(ImgGry_Datcop_a,ImgGry_Sobcop_sp);											//�Բü��������ˮƽ�����Sobel��Ե���
	hls::Threshold(ImgGry_Sobcop_sp, ImgGry_Threh_sp, 177, 255, HLS_THRESH_BINARY);				//������ֵ��ʹͼ���ֵ��
	hls::Threshold(ImgGry_Sobcop_cz, ImgGry_Threh_cz, 177, 255, HLS_THRESH_BINARY);				//������ֵ��ʹͼ���ֵ��

	//��Ƥ���㷨���ܼ���Ƥ���������ˮƽ������ܼ��������Ƥ������ͼ��
	filtrel_kernel(ImgGry_Threh_sp, ImgGry_Copfilt, RowLeth, ColLeth, 10, 1);

	//���Ӵ�ֱSobel���ܼ���Ƥ�����ͼ��
	OvlayImage(ImgGry_Threh_cz, ImgGry_Copfilt, ImgGry_Ovlaycz, RowLeth, ColLeth, SobOvlyIma_Strt, RowLeth, ColLeth, 0);

	//���ƴ�ֱSobel+�ܼ���Ƥ��ͼ��
	hls::Duplicate(ImgGry_Ovlaycz, ImgGry_Ovlaycz_a, ImgGry_Ovlaycz_b);

	//�ü����ʺ�ϡ����Ƥ�����������
	CopImage(ImgGry_Ovlaycz_a, ImgGry_DatCopXs, RowLeth, ColLeth, XsKen_size, XsStartLoc, XsOutLoc);

	//ϡ����Ƥ���㷨������ߴ� XsRow, XsCol�������ֱ�����ϡ�账�����Ƥ������ͼ��
	filtrel_kernelXS(ImgGry_DatCopXs, ImgGry_OvlyFiltcz, XsRow, XsCol, 30, 0);

	//�봹ֱ������Sobel+�ܼ���Ƥ��ͼ�������� Sobel + �ܼ���Ƥ��  + ϡ����Ƥ��ͼ��
	OvlayImage(ImgGry_Ovlaycz_b, ImgGry_OvlyFiltcz, ImgGry_OvlySumcz, RowLeth, ColLeth, XsOvImStrtLoc, XsRow, XsCol, 0);


	float K[N], B[N];
	int NumPoint[N];
	int KBLength[0];

	//��������Ч����Ѱ�ҿ��ܵ�K��B��
	SeekPoint(ImgGry_OvlySumcz, RowLeth, ColLeth, K, B, NumPoint, KBLength);
	int ViKPoint = KBLength[0], SeekLinNum = 2;
	float Seek_K[SeekLinNum], Seek_B[SeekLinNum];

	//��������Ч��K��B����Ѱ����Ҫ��SeekLinNum����������������Ӧ��K��Bֵ
	SeekLines(K, B, NumPoint, ViKPoint, Seek_K, Seek_B, SeekLinNum);

	GRAY_IMAGE	PlotLine_dst(RowLeth, ColLeth);

	//�����ҵ���K��Bֵ������
	PlotLines(PlotLine_dst, RowLeth, ColLeth, Seek_K, Seek_B, SeekLinNum);


	//��Ѱ�ҵ�����ͼ��ҶȻ�������ͼ�����
	OvlayImage(ImgGry_Datsrc_b, PlotLine_dst, ImgGry_Datovlay, rows, cols, OvlyIma_Start, RowLeth, ColLeth, 0);

	//���Ҷ�����ת��������ͨ���ĻҶ�ͼ��
	hls::CvtColor<HLS_GRAY2RGB,HLS_8UC1,HLS_8UC3>(ImgGry_Datovlay,ImgRgb_Datdst);		//��������

	//��hls::mat��ʽ����ת����AXI4 Stream��ʽ
	hls::Mat2AXIvideo(ImgRgb_Datdst,OUTPUT_STREAM);		//����˲���Ľ��


}
