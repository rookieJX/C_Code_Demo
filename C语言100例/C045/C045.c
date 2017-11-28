/*
题目：学习使用register定义变量的方法。
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	register int i;
	int tmp = 0;
	for (i = 1; i <= 100; i++)
	{
		tmp += i;
	}
	printf("总和为 %d\n",tmp );
	return 0;
}