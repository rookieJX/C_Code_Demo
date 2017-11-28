/*
题目：学习使用auto定义变量的用法。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,num;
	num = 2;
	for (int i = 0; i < 3; i++)
	{
		printf("num 变量为 %d\n",num );
		num++;
		{
			auto int num = 1;
			printf("内置模块 num 变量为 %d\n",num );
			num++;
		}
	}
	return 0;
}