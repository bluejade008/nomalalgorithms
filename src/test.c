#include "sortData.h"

int *test(int arr[], int num) {

  int i;
  srand((unsigned)time(NULL));
  for(i=0;i<num;i++){
    arr[i]=rand()%MaxVal;
   }

  printf("Original array is:\n");
  for(i=0;i<num;i++)
  	printf("%d->", arr[i]);
  printf("END\n");

  //printf("in test func, its tmp arr address=%p\n", arr);
  
  return arr;
  
}
