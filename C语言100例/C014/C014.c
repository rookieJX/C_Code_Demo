/*
题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i , j = 2;
	printf("Input a number : ");
	scanf("%d",&i);
	while(i < 2) {
		printf("The number must large than 2.Please try again : ");
		scanf("%d",&i);
	}
	printf("%d = ",i );
	while(j <= i) {
		if (i % j == 0)
		{
			printf("%d",j );
			i /= j;
			j = 1;
		}
		if (j == 1)
		{
			printf("*");
		}
		j ++;
	}
	return 0;
}