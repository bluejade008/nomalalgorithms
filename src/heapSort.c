/*************************************************************************
    > File Name: .c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Tue 05 Sep 2023 09:13:11 AM CST
 ************************************************************************/

#include "sortData.h"

void buildheap(int arr[], int loc) {
	while (arr[loc] > arr[(loc-1)/2]) {
		swap(&arr[loc], &arr[(loc-1)/2]);
		loc=(loc-1)/2;
	}
}

void heapify(int arr[], int index, int heapsize) {
	int left, bigger;
	left=index*2+1;
	while (left<heapsize) {
		bigger=left+1 < heapsize && arr[left+1] > arr[left] ? left+1:left;
		bigger=arr[bigger] > arr[index] ? bigger : index;
		if (bigger==index) {
			break;
		}
		swap(&arr[bigger], &arr[index]);
		index = bigger;
		left = index*2 +1;
	}
}

void heapSort(int array[], int lenth)
{
	if (array==NULL||lenth<2)
		return;
	int i, heaplenth;
	for(i=0;i<lenth;i++) {
		buildheap(array,i);
	}
	heaplenth=lenth;
	swap(&array[0], &array[--heaplenth]);
	while (heaplenth > 0) {
		heapify(array, 0, heaplenth);
		swap(&array[0], &array[--heaplenth]);
	}
}

