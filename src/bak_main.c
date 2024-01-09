/*************************************************************************
    > File Name: test02.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Mon 04 Sep 2023 08:07:51 PM CST
 ************************************************************************/

#include "sortData.h"

void printArray(int arr[], int len, char *sorttype) {
	int i;
	printf("\nAfter %s sort the array, it is:\n", sorttype);
	for(i=0;i<len;i++)
	printf("%d->",arr[i]);
	printf("END\n");
}

int main(int argc, char *argv[]){
	int i, len, *testarr;
	testarr = test(MaxLen);
	char *sortName[]={"bulbSort","insertSort","selectSort","shellSort", \
		"mergeSort","heapSort","quickSort","baseSort","countSort","topoSort"};

	enum STYPE {bulbSort=1,insertSort,selectSort,shellSort, \
		mergeSort,heapSort,quickSort,baseSort,countSort,topoSort} sorttype;

	len = sizeof(sortName) / sizeof(sortName[0]);
	printf("There are %i sortnumtotal sort algorithms, they are listed as follows.\n", len);
	for(i=0;i<len;i++) 
		printf("sort type is: %s, its index is defined %i\n", sortName[i], i+1);

	printf("please select one kind of sort type: ");
	scanf("%u", &sorttype);
	switch(sorttype) {
		case bulbSort: 
			printf("select %u sort type, it is: %s\n",bulbSort, sortName[bulbSort]);
			bulbSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[bulbSort]);
			break;
		case insertSort: 
			printf("select %u sort type, it is: %s\n",insertSort, sortName[insertSort]);
			insertSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[insertSort]);
			break;
		case selectSort: 
			printf("select %u sort type, it is: %s\n",selectSort, sortName[selectSort]);
			selectSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[selectSort]);
			break;
		case shellSort: printf("select %u sort type, it is: %s\n",shellSort, sortName[shellSort]);
		break;
		case mergeSort: printf("select %u sort type, it is: %s\n",mergeSort, sortName[mergeSort]);
		break;
		case heapSort: printf("select %u sort type, it is: %s\n",heapSort, sortName[heapSort]);
		break;
		case quickSort: printf("select %u sort type, it is: %s\n",quickSort, sortName[quickSort]);
		break;
		case baseSort: printf("select %u sort type, it is: %s\n",baseSort, sortName[baseSort]);
		break;
		case countSort: printf("select %u sort type, it is: %s\n",countSort, sortName[countSort]);
		break;
		case topoSort: printf("select %u sort type, it is: %s\n",topoSort, sortName[topoSort]);
		break;
		default: printf("There is no this kind of sort type, please input it again.\n");

	}

	return 0;
}
