/*
题目：将一个数组逆序输出。
*/

#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char const *argv[])
{
	int *reverseStr(int nums[],int count);
	printf("请输入 10 个数字：\n");
	int a[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	int *result = reverseStr(a,N);
	for (int i = 0; i < N; i++)
	{
		printf("%4d",result[i] );
	}
	printf("\n");
	return 0;
}

int *reverseStr(int nums[],int count) {
	int *result = nums;
	for (int i = 0; i < count/2; i++)
	{
		result[i] = result[i] + result[count - i - 1];
		result[count - i - 1] = result[i] -  result[count - i - 1];
		result[i] = result[i] -  result[count - i - 1];
	}
	return result;
}

