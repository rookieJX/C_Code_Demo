/**
 * 数列求和
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,temp;
	printf("In put a number:\n");
	scanf("%d",&x);
	if (x <= 1)
	{
		printf("The number must be no less than 1!\n");
		return 0;
	}
	for (int i = 0; i <= x; i++)
	{
		temp += i;
	}
	printf("The number of (%d)! is %d\n",x,temp );
	return 0;
}