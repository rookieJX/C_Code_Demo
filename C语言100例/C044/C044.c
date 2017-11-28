/*
题目：学习使用external的用法。
*/

#include <stdio.h>

int a,b,c;

int main(int argc, char const *argv[])
{
	void add();
	a=b=4;
	add();
	printf("c 的值为 %d\n",c );
	return 0;
}

void add() {
	int a;
	a = 3;
	c = a+b;
}