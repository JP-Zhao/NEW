#ifndef filtrel_kernel_H
#define filtrel_kernel_H

#include "hls_video.h"

#define MAX_HEIGHT 800        //图像最大高度
#define MAX_WIDTH  1280       //图像最大宽度

//#define INPUT_IMAGE   "lena.jpg"
#define INPUT_IMAGE   "0110_35.jpg"
//#define INPUT_IMAGE   "0110_32.jpg"

#define OUTPUT_IMAGE  "lena_sobel.jpg"
#define OUTSAVE_onepicture  "huidutu.jpg"



typedef hls::stream<ap_axiu<32,1,1,1> > AXI_STREAM;
typedef hls::Mat<MAX_HEIGHT,MAX_WIDTH,HLS_8UC3> RGB_IMAGE;
typedef hls::Mat<MAX_HEIGHT,MAX_WIDTH,HLS_8UC1> GRAY_IMAGE;

typedef hls::Scalar<3, unsigned char> RGB_PIXEL;
typedef hls::Scalar<1, unsigned char> GRAY_PIXEL;

void filtrel_kernel(GRAY_IMAGE& src, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int Kernel_size, int Select_MS);

#endif
