/*************************************************************************
    > File Name: insertSort.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Wed 13 Sep 2023 10:18:43 AM CST
 ************************************************************************/

#include "sortData.h"

void insertSort(int arr[], int len) {
	if (arr==NULL||len<2)
		return;

	int i,j, maxval;
	for(i=1;i<len;i++) {
		maxval=arr[i];
		for(j=i;j>0 && arr[j-1]>maxval;j--) {
			arr[j]=arr[j-1];
		}
		arr[j]=maxval;
	}
}

