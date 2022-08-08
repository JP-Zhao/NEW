

#include "SeekLines.h"



void SeekLines(float* K, float* B, int *NumPoint, int ViKPoint, float* Seek_K, float* Seek_B, int SeekLinNum)
//输入参数是，待选则的K，B的值和其对应的NumPoint数，有效数据点数，搜索到的K值Seek_K，B值Seek_B，和它们的长度SeekLinNum
{
	int TempPoint[ViKPoint][2];
	for(int i = 0; i < ViKPoint; i++)
	{
		TempPoint[i][0] = *NumPoint;
		TempPoint[i][1] = i;
		NumPoint++;
	}
	quickSort(TempPoint, 0, ViKPoint);
	float *Loc_k = K, *Loc_B = B;
	for(int j = ViKPoint - 1; j > (ViKPoint - SeekLinNum - 1); j--){
		K = Loc_k + TempPoint[j][1];
		B = Loc_B + TempPoint[j][1];
		*Seek_K = *K; *Seek_B = *B;
		Seek_K++; Seek_B++;
	}

}



int findPosition(int p[][2], int low, int high)
{
	int mid = p[low][0];
	int TempCnt = p[low][1];
	while(low < high){
		while(p[high][0] >= mid && low < high) high--;
		p[low][0] = p[high][0];
		p[low][1] = p[high][1];
		while(p[low][0] <= mid && low < high) low++;
		p[high][0] = p[low][0];
		p[high][1] = p[low][1];

	}
	p[high][0] = mid;
	p[high][1] = TempCnt;
	return low;
}

void quickSort(int p[][2], int low, int high)
{
	if(low < high)
	{
		int pos = findPosition(p, low, high);
		quickSort(p, pos + 1, high);
		quickSort(p, low, pos - 1);
	}
}


