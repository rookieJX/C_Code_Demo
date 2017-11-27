/*
题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char str[100];
	char *reverseStr(char *str);
	printf("请输入字符串：");
	scanf("%s",str);
	printf("%s\n",reverseStr(str) );
	return 0;
}

char *reverseStr(char *str) {
	char *result;
	int len = strlen(str);
	result = (char *)malloc(len*sizeof(char));
	int i = 0;
	while(len > 0) {
		len--;
		result[i] = str[len];
		i++;
	}
	return result;
}