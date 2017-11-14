/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y,z;
	printf("请输入三个数组（格式：10-10-10）：");
	scanf("%d-%d-%d",&x,&y,&z);
	if (x > y)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}
	if (x > z)
	{
		x = x + z;
		z = x - z;
		x = x - z;
	}
	if (y > z)
	{
		y = y + z;
		z = y - z;
		y = y - z;
	}
	printf("排序后顺序为：%d-%d-%d\n",x,y,z );
	return 0;
}