#ifndef SEEKLINES_H
#define SEEKLINES_H

#include "filtrel_kernel.h"


void SeekLines(float* K, float* B, int *NumPoint, int ViKPoint, float* Seek_K, float* Seek_B, int SeekLinNum);
int findPosition(int p[][2], int low, int high);
void quickSort(int p[][2], int low, int high);


#endif


