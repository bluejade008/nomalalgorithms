/*************************************************************************
    > File Name: selectSort.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Wed 13 Sep 2023 10:05:28 AM CST
 ************************************************************************/

#include "sortData.h"

void selectSort(int arr[], int len) {
	if (arr==NULL || len<2)
		return;

	int i, j, minIdx;
	for(i=0;i<len-1;i++) {
		minIdx=i;
		for(j=i+1;j<len;j++) {
			if (arr[j]<arr[minIdx]){
				minIdx=j;
			}
		}
		if ( minIdx!=i)
			swap(&arr[i], &arr[minIdx]);
	}
}

