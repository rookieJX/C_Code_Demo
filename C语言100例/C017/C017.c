/*
题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	int letters = 0,spaces = 0,digits = 0,others = 0;
	printf("请输入字母：\n");
	while((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letters ++;
		} else if(c >= '0' && c <= '9') {
			digits ++;
		} else if(c == ' ') {
			spaces ++;
		} else {
			others ++;
		}
	}
	printf("字母=%d，空格=%d，数字=%d，其他字符=%d\n",letters,spaces,digits,others );
	return 0;
}