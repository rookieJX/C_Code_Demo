/*
题目：输入3个数a,b,c，按大小顺序输出。
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	void swap(int *s1,int *s2);
	int a,b,c;
	int *p1,*p2,*p3;
	printf("请输入三个数字（格式: 10 10 10）：");
	scanf("%d %d %d",&a,&b,&c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if (a > b)
	{
		swap(p1,p2);
	}
	if (a > c)
	{
		swap(p1,p3);
	}
	if (b > c)
	{
		swap(p2,p3);
	}
	printf("%d   %d    %d\n",a,b,c );
	return 0;
}

void swap(int *s1,int *s2) {
	int temp;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}