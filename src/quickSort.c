#include "sortData.h"

void printarr(int arr[], int len) {
	int i=0;
	for(i=0;i<len;i++)
		printf("%d->",arr[i]);
	printf("END\n");
}

void quick_sort_recursive(int arr[], int start, int end) {
	if (start >= end)
		return;
	//srand((unsigned int)time(NULL));
	//int midindex = rand()%(end-start+1); printf("midindex=%u, arr[midindex]=%u\n",midindex, arr[midindex]); swap(&arr[midindex], &arr[end]); printf("swap rand num with last num, arr[midindex]=%u, arr[end]=%u\n", arr[midindex], arr[end]);
	int mid = arr[end];
	//printf("mid=%u\n",mid);
	int left = start, right = end - 1;
	while (left < right) {
		while (arr[left] < mid && left < right)
			left++;
		while (arr[right] >= mid && left < right)
			right--;
		swap(&arr[left], &arr[right]);
	}
	if (arr[left] >= arr[end])
		swap(&arr[left], &arr[end]);
	else
		left++;
	if (left) {
		quick_sort_recursive(arr, start, left - 1);
	    //printarr(arr,(left-1-start+1));
	}
	quick_sort_recursive(arr, left + 1, end);
	//printarr(arr,(end-left-1+1));

}

void quickSort(int arr[], int len) {
	quick_sort_recursive(arr, 0, len - 1);
}
