/*
题目：打印出所有的"水仙花数"
所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y,z,count = 0;
	for (int i = 100; i <= 999; i++)
	{
		x = i % 10;
		y = i / 10 % 10;
		z = i / 100 % 10;
		if (i == (x*x*x + y*y*y + z*z*z))
		{
			count ++;
			printf("%5d",i );
			if (count % 5 == 0)
				printf("\n");
		}
			
	}
	return 0;
}