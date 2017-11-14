/*题目：输出9*9口诀。*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d = %-3d",i,j,i*j );
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}