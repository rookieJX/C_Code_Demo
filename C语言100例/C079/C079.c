/*
题目：字符串排序。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *str1,char *str2);

int main(int argc, char const *argv[])
{	
	char str1[20],str2[20],str3[20];
	printf("请输入3个字符串，每个字符串已回车结束！：\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1,str2) > 0) swap(str1,str2);
	if (strcmp(str1,str3) > 0) swap(str1,str3);
	if (strcmp(str2,str3) > 0) swap(str2,str3);
	printf("排序后的结果为：\n");
	printf("%s\n%s\n%s\n\n",str1,str2,str3);
	return 0;
}

void swap(char *str1,char *str2) {
	char temp[20];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
}