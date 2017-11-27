/*
题目：对10个数进行排序。
*/

#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
	int a[N];
	printf("请输入 10 个数字：\n");
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			if (a[j] < a[i])
			{
				a[j] = a[j] + a[i];
				a[i] = a[j] - a[i];
				a[j] = a[j] - a[i];
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%5d",a[i] );
	}
	printf("\n");
	return 0;
}