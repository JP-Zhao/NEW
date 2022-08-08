#ifndef PLOTLINES_H
#define PLOTLINES_H

#include "filtrel_kernel.h"


void PlotLines(GRAY_IMAGE& PlotLine_dst, int rows, int cols, float* Seek_K, float* Seek_B, int SeekLinNum);

#endif
