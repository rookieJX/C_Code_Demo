#include <stdio.h>

int main(int argc, char const *argv[])
{
	int password,i = 1;
	printf("请输入密码：");
	scanf("%d",&password);
	printf("\n");
	while(password != 1234)
	{
		if (i >= 3) break;
		printf("密码错误，您还有【%d】次机会请重新输入密码：",3-i);
		i++;
		scanf("%d",&password);
		printf("\n");
	}
	if (password == 1234)
	{
		printf("密码正确\n");
	}
	else
	{
		printf("密码错误\n");
	}
	return 0;
}