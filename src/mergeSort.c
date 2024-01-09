/*************************************************************************
    > File Name: mergeSort.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Wed 13 Sep 2023 05:41:33 PM CST
 ************************************************************************/

#include "sortData.h"

void *merge(int arr[], int help[], int L, int mid, int R) { 
	int p1=L, p2=mid+1, k=L;
	while(p1<=mid && p2<=R) 
		help[k++]=arr[p1] < arr[p2]? arr[p1++] : arr[p2++];
	
	while(p1 <= mid) 
		help[k++] = arr[p1++];
	
	while(p2 <= R) 
		help[k++] = arr[p2++];

	for(k=L;k<=R;k++) 
		arr[k] = help[k];
}

void  mergePartition(int arr[], int help[], int left, int right) {	
	//printf("left=%i, right=%i\n",left, right);
	if (left >= right) {
		return;
	}
	int midnum = ((right-left)>>1) + left;
	//printf("enter left recurcive.\n");
	mergePartition(arr, help, left, midnum);
	//printf("enter right side recurcive.\n");
	mergePartition(arr,help, midnum+1, right);
	merge(arr, help, left, midnum, right);

}

void mergeSort(int arr[], int len) {
	if (arr==NULL || len<2)
		return;
	int *helpArr;
	helpArr=(int *)malloc(sizeof(int)*len);
	if (!helpArr)
		printf("memory allocation failure.\n");
	mergePartition(arr, helpArr, 0, len-1);

}
