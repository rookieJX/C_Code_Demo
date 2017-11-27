/*
题目：求100之内的素数。
*/

#include <stdio.h>
#include <math.h>

#define N 100

int main(int argc, char const *argv[])
{
	int isPrime(int m);
	int j = 0;
	for (int i = 2; i <= N; i++)
	{
		if (isPrime(i)) {
			j++;
			printf("%4d",i );
			if(j % 5 == 0)
				printf("\n");
		}
	}
	return 0;
}

int isPrime(int m) {
	if (m <= 1)
		return 0;
	if (m == 2)
		return 1;
	if (m % 2 == 0)
		return 0;
	int limit = (int)sqrt((double)m);
	for (int i = 3; i < limit; i = i+2)
	{
		if (m % i == 0)
			return 0;
	}
	return 1;
}