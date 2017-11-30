/*
题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。
*/
#include <stdio.h>
#include "CArray.h"

int main(int argc, char const *argv[])
{
	int n;
	print_count();
	printf("请输入数组个数：");
	scanf("%d",&n);
	int *arr;
	arr = malloc_int_array(n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%4d",arr[i] );
	}
	return 0;
}

