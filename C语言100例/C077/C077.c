/*
题目：填空练习（指向指针的指针）。
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *s[] = {"man","woman","girl","boy","sister"};
	char **q;
	for (int i = 0; i < 5; i++)
	{
		q = &s[i];
		printf("%s\n",*q);
	}
	return 0;
}