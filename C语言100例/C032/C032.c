/*
题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char* deleteCharacters(char * str,char deleChar);
	char s[] = "abcdeaaadfasfaaafaafafafaa";
	char deleChar = 'a';
	char * result;
	result =  deleteCharacters(s,deleChar);
	printf("%s\n",deleteCharacters(s,deleChar) );
	return 0;
}

char* deleteCharacters(char * str,char deleChar) {
	char *result;

	if('\0' == deleChar) {
		return str;
	}

	int len = strlen(str);
	result = (char *)malloc(len * sizeof(char));

	int i = 0,j = 0;
	while(len > 0) {
		if (str[i] != deleChar)
		{
			result[j] = str[i];
			j++;
		}
		i++;
		len--;
	}
	return result;
}