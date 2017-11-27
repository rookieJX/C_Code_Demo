/*
求1+2!+3!+...+20!的和。
*/

#include <stdio.h>
#define N 20

int main(int argc, char const *argv[])
{
	long double sum = 0,max = 1;
	for (int i = 1; i <= N; i++)
	{
		max *= i;
		sum += max;
	}
	printf("%Lf\n",sum );
	return 0;
}