/*
题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
*/

#include <stdio.h>
#include <stdlib.h>

int lengthString(char *s);

int main(int argc, char const *argv[])
{
	int len;
	char str[20];
	printf("请输入字符串：");
	scanf("%s",str);
	len = lengthString(str);
	printf("字符串有 %d 个字符。\n",len );
	return 0;
}

int lengthString(char *s) {
	int i=0;
	while(*s != '\0') {
		i++;
		s++;
	}
	return i;
}