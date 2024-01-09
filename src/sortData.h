#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define  MaxLen  15
#define  MaxVal  100

#ifndef __SORTMETHOD__
#define __SORTMETHOD__

//int arr[MaxLen];

void swap(int *a, int *b);

void  bulbSort(int array[], int len);

void  selectSort(int arr[], int len);

void  insertSort(int array[], int len);

void  shellSort(int array[], int len);

void  mergeSort(int array[], int len);

void  heapSort(int array[], int len);

void  quickSort(int array[], int len);

void  baseSort(int array[], int len);

void  radixSort(int array[], int len);

void  topoSort(int array[], int len);

int *test(int array[], int num);

#endif
