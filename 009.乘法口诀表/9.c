/**
 * 乘法口诀表
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	printf("Input a number with 1~9\n");
	scanf("%d",&x);
	if (x < 0 || x > 9)
	{
		printf("Input uncorrect,please try again\n");
		return 0;
	}
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d X %d = %2d",j,i,i*j);
			printf("     ");
		}
		printf("\n");
	}
	return 0;
}