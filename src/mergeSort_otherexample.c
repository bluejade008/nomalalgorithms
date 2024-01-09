/*************************************************************************
    > File Name: mergeSort.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Fri 15 Sep 2023 06:12:53 PM CST
 ************************************************************************/

#include "sortData.h"

void merge_sort_recursive(int arr[], int reg[], int start, int end) {
		printf("enter fun: mergePartition.\n");
		printf("start=%i, end=%i\n",start, end);
	    if (start >= end)
			return;
		int len = end - start, mid = (len >> 1) + start;
		//int mid = (end - start)>> 1 + start;
		int start1 = start, end1 = mid;
		int start2 = mid + 1, end2 = end;
	printf("enter left recurcive.\n\n");
		merge_sort_recursive(arr, reg, start1, end1);
	printf("enter right side recurcive.\n\n");
		merge_sort_recursive(arr, reg, start2, end2);
		int k = start;
		while (start1 <= end1 && start2 <= end2)
			reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
		while (start1 <= end1)
			reg[k++] = arr[start1++];
		while (start2 <= end2)
			reg[k++] = arr[start2++];
		for (k = start; k <= end; k++) {
			arr[k] = reg[k];
		}
}
void mergeSort(int arr[], const int len) {
	//int reg[len];
	int *reg;
	reg=(int *)malloc(sizeof(int)*len);
	if(!reg)
		printf("memory failure.\n");
	merge_sort_recursive(arr, reg, 0, len - 1);
	free(reg);
}
