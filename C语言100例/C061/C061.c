/*
题目：打印出杨辉三角形（要求打印出10行）。

1
1    1
1    2    1
1    3    3    1
1    4    6    4    1
*/

#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
	int a[N][N] = {0};
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i) {
				a[i][j] = 1;
			}  else {
				a[i][j] = a[i-1][j-1] + a[i-1][j];
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if(a[i][j] == 0)
				break;
			printf("%4d",a[i][j] );
		}
		printf("\n");
	}
	return 0;
}