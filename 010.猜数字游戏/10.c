#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("=== This is a Number Guess Game ===\n");
	int Password = 0, i = 0,price = 11,num;
	while (Password != 1234)	// 密码不对的情况下
	{

		if (i >= 3)
		{
			printf("You have the wrong password three times. Please try later....\n");
			return 0;
		}
		if (i != 0)
		{
			printf("Your password was wrong . try again\n");
		}
		printf("Input password: ");
		scanf("%d",&Password);
		printf("\n");
		i ++;
	}
	while (num != price)
	{
		do
		{
			printf("Input what's your number (The number is within(1,100)): ");
			scanf("%d",&num);
			printf("\n");
		}
		while(!(num >= 1 && num <= 100));		// 如果不是在输入区间，那么提醒
		if (num > price)
		{
			printf("The number is too big\n");
		} 
		else if (num < price)
		{
			printf("The number is too small\n");
		} 
		else 
		{
			printf("Congeratuation , you're right\n");
		}
	}
	return 0;
}