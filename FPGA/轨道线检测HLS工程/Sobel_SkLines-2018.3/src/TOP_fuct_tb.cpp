#include "TOP_fuct.h"
#include "filtrel_kernel.h"
#include "hls_opencv.h"

int main(void)
{
	//��ȡͼ������
	IplImage* src = cvLoadImage(INPUT_IMAGE);
	IplImage* srcone = cvLoadImage(INPUT_IMAGE);
	IplImage* dst = cvCreateImage(cvGetSize(src),src->depth,src->nChannels);
	IplImage* one = cvCreateImage(cvGetSize(src),src->depth,src->nChannels);

	//ʹ��HLS����д���
	AXI_STREAM src_axi("src_axi"),dst_axi("dst_axi");
	IplImage2AXIvideo(src,src_axi);

	TOP_fuct(src_axi,dst_axi,src->height,src->width);
	AXIvideo2IplImage(dst_axi,dst);


	//����ͼ��
	cvSaveImage(OUTPUT_IMAGE,dst);


	//��ʾͼ��
	cvShowImage(INPUT_IMAGE,src);
	cvShowImage(OUTPUT_IMAGE,dst);


	//�ȴ��û����¼����ϵ���һ����
	cv::waitKey(0);

}

