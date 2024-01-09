/*************************************************************************
    > File Name: swap.c
    > Author: qicongyun
    > Mail: qicongyun@bonc.com.cn
    > Created Time: Mon 04 Sep 2023 08:05:35 PM CST
 ************************************************************************/

#include "sortData.h"

void swap(int *a, int *b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
