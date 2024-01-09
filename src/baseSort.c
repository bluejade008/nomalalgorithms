#include "sortData.h"


static void printArray(int arr[], int len) {
	int i;
	printf("After sort the array, it is:\n");
	for(i=0;i<len;i++) {
		if (arr[i])
			printf("%d->",arr[i]);
	}
	printf("END\n");
}

void baseSort(int arr[], int len) {
	if (arr==NULL || len<2) 
		return;
	int index=0,i, *baseArr;
	for (i=0; i<len; i++) {
		if ( arr[i] > arr[index])
			index=i;
	}
	printf("array maxium number=%i\n", arr[index]);
	baseArr=(int *)malloc(sizeof(int)*(arr[index]+1));
	if(!baseArr) 
		printf("memory allocation failure.\n");
	for (i=0;i< (arr[index]+1); i++) 
		baseArr[i] = 0;
	for (i=0;i< len; i++) 
		baseArr[arr[i]] = arr[i];
	printArray(baseArr, arr[index]+1);
	free(baseArr);
	
}
