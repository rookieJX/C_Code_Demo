/*
题目：有数组。现输入一个数，排序。
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char const *argv[])
{
	void sort(int nums[],int count);
	int a[N+1];
	int insert;
	printf("请输入 10 个数字：\n");
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入插入的数字：\n");
	scanf("%d",&insert);
	a[N] = insert;

	sort(a,N+1);
	for (int i = 0; i <= N; i++)
	{
		printf("%4d",a[i] );
	}
	printf("\n");
	return 0;
}

void sort(int nums[],int count) {
	for (int i = 0; i < count-1; i++)
	{
		for (int j = i+1; j < count; j++)
		{
			if (nums[j] < nums[i])
			{
				nums[j] = nums[j] + nums[i];
				nums[i] = nums[j] - nums[i];
				nums[j] = nums[j] - nums[i];
			}
		}
	}
}