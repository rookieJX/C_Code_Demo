/*
题目：判断一个数字是否为质数。
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int isPrime(int m);
	int m = 100;
	if(isPrime(m))
		printf("N=%d 是质数",m);
	else
		printf("N=%d 不是质数",m);
	return 0;
}

/*判断是否是质数*/
int isPrime(int m) {
	if (m <= 1)
		return 0;
	if (m == 2)
		return 1;
	if (m % 2 == 0)
		return 0;
	int limit = (int)sqrt((double)m);
	for (int i = 3; i < limit; i=i+2)
	{
		if(m % i == 0)
			return 0;
		return 1;
	}
	return 0;
}