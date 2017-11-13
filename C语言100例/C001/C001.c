/*题目：有1、2、3、4个数字，能组成多少个互不相同，且无重复数字的三位数？*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count = 0;
	for (int i = 1; i < 5; ++i)
	{
		for (int j = 1; j < 5; ++j)
		{
			for (int k = 1; k < 5; ++k)
			{
				if ((i != j)  && (i != k) && (j != k))
				{
					printf("%d%d%d\n",i,j,k);
					count ++;
				}
			}
		}
	}
	printf("==========一共有%d个不同的数字=========\n",count );
	return 0;
}