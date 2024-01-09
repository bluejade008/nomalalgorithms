#include "sortData.h"

int getnum(int a, int b) {
	int i, countb=0, a0=a, a1=a, val=0;
	while(a0) {
		a0/=10;
		countb++;
	}
	if (countb < b) {
		return 0;
	} else {
		for (i=1;i<=countb;i++) {
			val=a1%10; 
			a1/=10;
			if ( i == b ) {
				return val;
				break;
			}
		}
	}
}

static void radixOperation(int arr[], int left, int right, int digital) {
	int i=0, j=0, radix=10, d, *bucket;
	bucket=(int *)malloc(sizeof(int)*(right-left+1));
	if(!bucket) 
		printf("memory allocation failure.\n");
	//printf("%u bucket is applied successuflly.\n", radix);

	for (d=1; d<= digital; d++) {
		int count[radix];
		for ( i=0; i<radix; i++)
			count[i]=0;

		for ( i=left; i<=right; i++) {
			j=getnum(arr[i], d);
			count[j]++;
		}

		for ( i=1; i<radix; i++) {
			count[i] = count[i]+ count[i-1];
		}

		/*
		for ( i=0; i<radix; i++) {
			printf("count[%i]=%d->", i, count[i]);
		}
		printf("END\n");
		*/
		
		for ( i=right; i>=left; i--) {
			j=getnum(arr[i], d);
			bucket[count[j]-1] = arr[i];
			count[j]--;
		}
		for ( i=left, j=0; i<=right; i++, j++) {
			arr[i] = bucket[j];
		}
	}
	free(bucket);

}

void radixSort(int arr[], int len) {
	if (arr==NULL || len<2) 
		return;
	int index=0,i,tmp, digital=0;
	int ab=0, d;
	for (i=0; i<len; i++) {
		if ( arr[i] > arr[index])
			index=i;
	}
	//printf("array maxium number=%i\n", arr[index]);
	tmp=arr[index];
	while(tmp) {
		tmp/=10;
		digital++;
	}
	//printf("array maxium number has total digital=%i\n", digital);
	radixOperation(arr, 0, len-1, digital);

	/* 
	for (i=0; i<len; i++) {
		printf("array %u has digital is: ",arr[i]);
		for (d=1;d<=digital; d++) {
			ab=getnum(arr[i], d);
			printf("%u->", ab);
		}
		printf("this num end\n");
	}
	*/
}
