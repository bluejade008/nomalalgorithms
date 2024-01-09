/*************************************************************************
    > File Name: test02.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Mon 04 Sep 2023 08:07:51 PM CST
 ************************************************************************/

#include "sortData.h"

void printArray(int arr[], int len, char *stype) {
	int i;
	printf("After %s sort the array, it is:\n", stype);
	for(i=0;i<len;i++)
	printf("%d->",arr[i]);
	printf("END\n");
}

int main(int argc, char *argv[]){
	int i, len, length, *testarr;
	length = (MaxLen);
	testarr=(int *)malloc(sizeof(int)*MaxLen);
    if(!testarr)
		printf("memory allocation failure.please try it again.\n");

	char *sortName[]={"bulbSort","insertSort","selectSort","shellSort", \
		"mergeSort","heapSort","quickSort","baseSort","radixSort","topoSort"};

	enum STYPE {_bulbSort=1,_insertSort,_selectSort,_shellSort, \
		_mergeSort,_heapSort,_quickSort,_baseSort,_radixSort,_topoSort} sorttype;

	len = sizeof(sortName) / sizeof(sortName[0]);
	printf("There are %i sortnumtotal sort algorithms, they are listed as follows.\n", len);
	for(i=0;i<len;i++) 
		printf("sort type is: %s, its index is defined %i\n", sortName[i], i+1);

	printf("please select one kind of sort type: ");
	scanf("%u", &sorttype);
	testarr = test(testarr, MaxLen);
	switch(sorttype) {
		case _bulbSort: 
			printf("select No. %u sort type, it is: %s\n",_bulbSort, sortName[_bulbSort-1]);
			bulbSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_bulbSort-1]);
			break;
		case _insertSort: 
			printf("select No. %u sort type, it is: %s\n",_insertSort, sortName[_insertSort-1]);
			insertSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_insertSort-1]);
			break;
		case _selectSort: 
			printf("select No. %u sort type, it is: %s\n",_selectSort, sortName[_selectSort-1]);
			selectSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_selectSort-1]);
			break;
		case _shellSort: 
			printf("select No. %u sort type, it is: %s\n",_shellSort, sortName[_shellSort-1]);
			shellSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_shellSort-1]);
			break;
		case _mergeSort: 
			printf("select No. %u sort type, it is: %s\n",_mergeSort, sortName[_mergeSort-1]);
			mergeSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_mergeSort-1]);
			break;
		case _heapSort: 
			printf("select No. %u sort type, it is: %s\n",_heapSort, sortName[_heapSort-1]);
			heapSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_heapSort-1]);
			break;
		case _quickSort: 
			printf("select No. %u sort type, it is: %s\n",_quickSort, sortName[_quickSort-1]);
			quickSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_quickSort-1]);
			break;
		case _baseSort: 
			printf("select No. %u sort type, it is: %s\n",_baseSort, sortName[_baseSort-1]);
			baseSort(testarr, MaxLen);
			//printArray(testarr, MaxLen, sortName[_baseSort-1]);
			break;
		case _radixSort: 
			printf("select No. %u sort type, it is: %s\n",_radixSort, sortName[_radixSort-1]);
			radixSort(testarr, MaxLen);
			printArray(testarr, MaxLen, sortName[_radixSort-1]);
			break;
		case _topoSort: 
			printf("select No. %u sort type, it is: %s\n",_topoSort, sortName[_topoSort-1]);
			break;
		default: 
			printf("There is no this kind of sort type, please input it again.\n");

	}

	free(testarr);

	return 0;
}
