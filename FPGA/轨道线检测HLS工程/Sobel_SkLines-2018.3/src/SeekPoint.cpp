#include "hls_math.h"
#include "SeekPoint.h"
#define N 50
void SeekPoint(GRAY_IMAGE& src, int rows, int cols, float* K, float* B, int* NumPoint, int* KBLength)
//�����Ǿ�����Ƥ��������ԭͼ��������������Ϊ255ʱΪ��ɫ��ԭͼ�����гߴ磬���ʱѰ�ҵ���Kֵ��Bֵ����Ӧ���м�����������ֱ���ϣ�K�����B����ĳ���
{
	GRAY_PIXEL src_data;
	float d = 0;		//������б����ɵ������������д��
	float SJLB[100] = {0.81472367,0.90579194,0.12698682,0.91337585,0.63235927,0.097540408,0.27849823,0.54688150,0.95750684,0.96488851,0.15761308,0.97059280,0.95716697,0.48537564,0.80028045,0.14188634,0.42176127,0.91573554,0.79220730,0.95949244,0.65574068,0.035711680,0.84912932,0.93399322,0.67873514,0.75774014,0.74313247,0.39222702,0.65547788,0.17118669,0.70604610,0.031832848,0.27692297,0.046171390,0.097131781,0.82345784,0.69482863,0.31709948,0.95022207,0.034446079,0.43874437,0.38155845,0.76551682,0.79519993,0.18687260,0.48976439,0.44558620,0.64631301,0.70936483,0.75468665,0.27602509,0.67970270,0.65509802,0.16261174,0.11899768,0.49836406,0.95974398,0.34038574,0.58526772,0.22381194,0.75126708,0.25509512,0.50595707,0.69907671,0.89090323,0.95929140,0.54721552,0.13862444,0.14929400,0.25750825,0.84071726,0.25428218,0.81428480,0.24352497,0.92926365,0.34998375,0.19659525,0.25108385,0.61604470,0.47328883,0.35165951,0.83082861,0.58526409,0.54972363,0.91719365,0.28583902,0.75720024,0.75372910,0.38044584,0.56782162,0.075854287,0.053950120,0.53079754,0.77916723,0.93401068,0.12990621,0.56882364,0.46939063,0.011902070,0.33712265};
	//int SrcPreNum = rows * cols / 4;
	int WtPoitRowLoc[InitSize], WtPoitColLoc[InitSize];
	int WtPoitRowLoc_lenth = 0, WtPoitColLoc_lenth = 0;
	int num = 0, SrcPoitLeh = 1;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			src >> src_data;
			if(src_data.val[0])
			{
				ListInsert(WtPoitRowLoc, SrcPoitLeh, i, WtPoitRowLoc_lenth++, InitSize);
				ListInsert(WtPoitColLoc, SrcPoitLeh, j, WtPoitColLoc_lenth++, InitSize);
				SrcPoitLeh++;
			}
		}
	}
	/*
	int Temp_RowLoc[SrcPoitLeh - 1], Temp_ColLoc[SrcPoitLeh - 1];
	for(int i = 0; i < SrcPoitLeh - 1; i++){
		Temp_RowLoc[i] = WtPoitRowLoc[i];
		Temp_ColLoc[i] = WtPoitColLoc[i];
	}
	*/
	int juliyuzhi = 5;			//�㵽ֱ�ߵľ�����ֵ
	int templong;
	while(num < 30 && WtPoitRowLoc_lenth > 10)	//���������������50��������ѭ������ԭͼ���ڵ�ĸ�������2��Ҳ����ѭ��
	{
		templong = WtPoitRowLoc_lenth;
		int RandNub, CalaPoint[2][2], RandSelet = 0;
		for(int i = 0; i < 2; i++){
			RandNub =templong * SJLB[RandSelet];	//ѡ����ǵڼ�������
			RandSelet++;
			CalaPoint[i][0] = WtPoitRowLoc[RandNub];		//��ѡ���ĵ��row����
			CalaPoint[i][1] = WtPoitColLoc[RandNub];		//��ѡ���ĵ��col����
			ListDelete(WtPoitRowLoc, RandNub, WtPoitRowLoc_lenth--, InitSize);
			ListDelete(WtPoitColLoc, RandNub, WtPoitColLoc_lenth--, InitSize);		//����ѡ����������ɾ��
		}
		*K = (float)(CalaPoint[1][0] - CalaPoint[0][0]) / (float)(CalaPoint[1][1] - CalaPoint[0][1]);
		*B = (float)CalaPoint[0][0] - (float)(*K) * (float)CalaPoint[0][1];
		*NumPoint = 0;

		for(int i = 0; i < templong; i++)
		{
			//d = hls::abs(K[num] * WtPoitColLoc[i] - WtPoitRowLoc[i] + B[num]) / hls::sqrt(1 + K[num] * K[num]);
			d = hls::abs((*K) * WtPoitColLoc[i] - WtPoitRowLoc[i] + (*B)) / hls::sqrt(1 + (*K) * (*K));
			if(d < juliyuzhi)
			{
				ListDelete(WtPoitRowLoc, i, WtPoitRowLoc_lenth--, InitSize);
				ListDelete(WtPoitColLoc, i, WtPoitColLoc_lenth--, InitSize);		//����ѡ����������ɾ��
				i--;
				templong = WtPoitRowLoc_lenth;
				(*NumPoint) += 1;
			}
		}
		K++;
		B++;
		NumPoint++;
		num++;
	}

	*KBLength = num + 1;

}




//���
/*
int ListInsert(SqList *L,int i, int e ){
    if(i < 1 || i > L->length+1) return -1; //����λ�ò��Ϸ�

    if(L->length >= L->MaxSize) return -1;//�洢�ռ����ˣ����ܲ���

    for(int j = L->length; j >= i; j--){
        L->data[i] = L->data[j-1];
    }
    L->data[i-1] = e;
    L->length++;
    return 0;
}
*/
int ListInsert(int Data[InitSize], int i, int e, int length, int MaxSize ){
    if(i < 1 || i > length+1) return -1; //����λ�ò��Ϸ�

    if(length >= MaxSize) return -1;//�洢�ռ����ˣ����ܲ���

    for(int j = length; j >= i; j--){
    	Data[i] = Data[j-1];
    }
    Data[i-1] = e;
    //length += 1;
    return 0;
}
//ɾ��
/*
int ListDelete(SqList * L, int i){
    if(i < 1 || i > L->length) return -1;//�ж�i��λ���Ƿ���Ч
    int e = L->data[i-1];
    for(int j = i; j < L->length; j++){
        L->data[j-1] = L->data[j];
    }
    L->length--;
    return 0;
}
*/
int ListDelete(int Data[InitSize], int i, int length, int MaxSize){
    if(i < 1 || i > length) return -1;//�ж�i��λ���Ƿ���Ч
    int e = Data[i-1];
    for(int j = i; j < length; j++){
    	Data[j-1] = Data[j];
    }
    //length -= 1;
    return 0;
}

/*
//��ֵ���� ������λ��
int LocateElem(SqList *L, int e ){
    for(int i = 0; i < L->length; i++){
        if(L->data[i] == e){
            return i+1;
        }
    }
    return -1;
}
*/
 /*
int main()
{
    SqList *L = initSqList();
    printf("ԭʼ���飺��\n");
    displayTable(L);
    printf("��Ӻ����飺");
    ListInsert(L, 1, 1);
    ListInsert(L, 2, 2);
    ListInsert(L, 3, 3);
    ListInsert(L, 4, 4);
    displayTable(L);
    printf("ɾ��һ��Ԫ�غ�����飺");
    ListDelete(L, 2);
    displayTable(L);
    int a  = LocateElem(L, 3);
    printf("%d",a);
    return 0;
}
*/


