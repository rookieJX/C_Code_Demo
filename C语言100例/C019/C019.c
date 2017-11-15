/*
题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum=0;
	for (int i = 2; i <= 10; i++)
	{
		int j=2;
		while(j <= i) {
			if (i % j == 0)
		    {
			    i /= j;
			    sum += j;
			    printf("%d",j );
			    j = 1;
		    }
		    if(j == 1)
		    	printf("+");
		    j++;
		}
		if (j == 2)
		{
			printf("=%d\n", sum);
		}
		
	
    }

	return 0;
}