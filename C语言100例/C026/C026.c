/*
题目：利用递归方法求5!。
*/

#include <stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
	int sum ;
	int fact(int m);
	for (int i = 0; i < N; i++)
	{
		printf("%d! = %d\n",i,fact(i) );
	}
	return 0;
}

/*递归求阶乘*/
int fact(int m) {
	int sum ;
	if (m == 0)
	{
		sum = 1;
	}
	else
	{
		sum = m * fact(m-1);
	}
	return sum;
}