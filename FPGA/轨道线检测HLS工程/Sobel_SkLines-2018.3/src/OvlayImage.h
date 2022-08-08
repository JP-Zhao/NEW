#ifndef OVLAYIMAGE_H
#define OVLAYIMAGE_H

#include "filtrel_kernel.h"

void OvlayImage(GRAY_IMAGE& src, GRAY_IMAGE& ovlaysrc, GRAY_IMAGE& dst, int HEIGHT, int WIDTH, int StartLoc[2], int RowLeth, int ColLeth, int OvlayFlag);

#endif

