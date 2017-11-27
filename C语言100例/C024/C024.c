/*
题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
*/

#include <stdio.h>
#define N 2

int main(int argc, char const *argv[])
{
	float a = 1,b = 2,t;
	float sum = 0.0f;
	for (int i = 0; i < N; i++)
	{
		sum = sum + b/a;
		t = a;
		a = b;
		b = t + a;
	}
	printf("%9.6f\n",sum );
	return 0;
}