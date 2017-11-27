/*
题目：求一个3*3矩阵对角线元素之和
*/

#include <stdio.h>
#define N 5

int main(int argc, char const *argv[])
{
	int sum =0;
	int a[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			a[i][j] = j+i*N;
			printf("%3d",j+i*N );
			if (j-1 == i)
				sum += a[i][j];
		}
		printf("\n");
		
	}
	printf("对角线之和为：%d\n", sum);
	return 0;
}