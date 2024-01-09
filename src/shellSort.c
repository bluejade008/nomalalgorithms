/*************************************************************************
    > File Name: shellSort.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Tue 19 Sep 2023 02:44:40 PM CST
 ************************************************************************/

#include "sortData.h"

void shellSort(int arr[], int len) {
	if (arr==NULL || len<2)
		return;
	int gap, i, j, bigVal;
	for (gap = len >> 1; gap > 0; gap = gap >> 1) {
	    for (i = gap; i < len; i++) {
			bigVal = arr[i]; 
			for (j = i - gap; j >= 0 && arr[j] > bigVal; j -= gap) {
				arr[j + gap] = arr[j]; 
			}
			arr[j + gap] = bigVal;
		}
	}
}
