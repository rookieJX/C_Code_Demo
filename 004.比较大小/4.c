/**
 *
 * 比较任意两个数字之间较大的数字
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y,z;
	printf("请输入比较的两个数字：\n");
	printf("x = ");
	scanf("%d",&x);
	printf("\ny = ");
	scanf("%d",&y);
	z = x > y ? x : y;
	printf("MAX(%d,%d) is %d\n",x,y,z);
	return 0;
}