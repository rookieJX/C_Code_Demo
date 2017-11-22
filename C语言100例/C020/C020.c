/*
题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/

#include <stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
	float h = 100.0f;
	float sum = 0.0f;
	int k ;
	for (int i = 1; i <= N; i++)
	{
		sum += (h + h *(i-1));
		h /= 2;
		k = i;
	}
	printf("第%d次落地时，共经过%f米，第%d次反弹高度为%f米\n",N, sum,k,h);
	return 0;
}