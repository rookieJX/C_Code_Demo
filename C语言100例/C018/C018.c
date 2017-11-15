/*
题目：求s=a+aa+aaa+aaaa+aa...a的值，
其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum=0,a,n,t=0,mu=10;
	printf("请输入a的值，以及n个数字相加的值（格式 a=9,n=9）：");
	scanf("a=%d,n=%d",&a,&n);
	while(a <= 0 || a >= 10) {
		printf("a的值不能小于0，同时不能大于10，请重新输入（格式 a=1）：");
		scanf("a=%d",&a);
	}
	while(n <= 0 || n >= 10) {
		printf("n的值不能小于0，同时不能大于10，请重新输入（格式 n=1）：");
		scanf("n=%d",&n);
	}
	for (int i = 0; i < n; i++)
	{
		t += a;
		a *= 10;
		sum += t;
		printf("%d",t );
		if(i < n-1)
			printf("+");
		else
			printf("=");
	}
	printf("%d\n",sum );
	return 0;
}