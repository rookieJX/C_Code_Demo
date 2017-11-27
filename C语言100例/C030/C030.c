
/*
题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count(int m);
	int m;
	printf("请输入一个五位数字：");
	scanf("%d",&m);
	if (count(m))
		printf("%d是一个回文数\n",m );
	else
		printf("%d不是一个回文数\n",m );
	return 0;
}

/*判断是否是回文数*/
int count(int m) {
	int wan,qian,shi,ge;
	wan  = m / 10000;
	qian = m % 10000/1000;
	shi  = m % 100/10;
	ge   = m % 10;
	if (wan == ge  && qian == shi)
		return 1;
	return 0;
}