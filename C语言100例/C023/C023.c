/*
题目：打印出如下图案（菱形）。
 */

#include <stdio.h>

#define N 9

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= N/2+1; ++i)
	{
		for (int j = i; j <= N/2; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (int j = 1; j <= i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = N/2+2; i <= N; i++)
	{
		for (int j = 1; j <= (i-N/2-1); j++)
		{
			printf(" ");
		}
		for (int j = i; j <= N; j++)
		{
			printf("*");
		}
		for (int j = i; j <= N-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}