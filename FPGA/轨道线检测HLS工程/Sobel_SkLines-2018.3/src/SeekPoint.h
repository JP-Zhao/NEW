
#ifndef SEEKPOINT_H
#define SEEKPOINT_H
#include "filtrel_kernel.h"

#define N 50
#define InitSize 5000
/*
typedef struct{
    int MaxSize;  //�������
    int length;  //������Ԫ�صĸ���
    int data[InitSize]; //��̬���������ָ��
}SqList;
//��ʼ������
SqList* initSqList(){
    SqList *L;
    //L->data = (int*)malloc(InitSize*sizeof(int));//��̬�����ʼ������
    L->length=0;
    L->MaxSize=InitSize;
    return L;
}



void SeekPoint(GRAY_IMAGE& src, int rows, int cols, double K[N], double B[N], int NumPoint[N], int NumLines);
int ListInsert(SqList *L,int i, int e );
int ListDelete(SqList * L, int i);
int LocateElem(SqList *L, int e );
*/
void SeekPoint(GRAY_IMAGE& src, int rows, int cols, float* K, float* B, int* NumPoint, int* KBLength);
//void SeekPoint(GRAY_IMAGE& src, int rows, int cols, float K[N], float B[N], int NumPoint[N], int NumLines);
int ListInsert(int Data[InitSize], int i, int e, int length, int MaxSize );
int ListDelete(int Data[InitSize], int i, int length, int MaxSize);



#endif

