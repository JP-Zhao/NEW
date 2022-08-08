
#ifndef COPIMAGE_H
#define COPIMAGE_H

#include "filtrel_kernel.h"

void CopImage(GRAY_IMAGE& src, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int Kernel_size, int StartLoc[2][2], int OutLoc[2][2]);

#endif
