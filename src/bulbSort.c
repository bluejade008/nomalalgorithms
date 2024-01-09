#include "sortData.h"

void  bulbSort(int arr[], int len) {
	if (arr==NULL || len<2)
		return;
	int i,j;
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1-i;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

