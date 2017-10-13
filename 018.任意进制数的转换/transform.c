
#include <stdio.h>
#include <stdlib.h>

#define M sizeof(unsigned int)*8

int trans(unsigned original,int digit,char s[]) {
	bool bl = 1;
	int i = 0;
	char buf[M+1];
	static char digits[] ="0123456789ABCDEF";
	unsigned current;
	current = original;
	if (digit < 2 || digit > 16)
	{
		s[0] = '\0';
		bl = 0;
	}
	do { // 开始转换
		buf[i] =  digits[current % digit];
		current /= digit;
		i++;
	} while (current);
	// 将转换结果倒置
	for (int j = 0; ((s[j] = buf[i-1]) && (i >= 0)); j++,i--);
	return bl;
}

/*任意输入一个数字，返回这个数字的各种进制*/
int main(int argc, char const *argv[])
{
	int digit;	//转换进制
	unsigned  original;  // 初始数字
	char str[M+1];		// 定义用来存储转换后的数字
	printf("Please input the number that you want change the digit: ");
	scanf("%d",&original);
	printf("Please input the digit (2~16): " );
	scanf("%d%*c",&digit);
	while(digit < 2 || digit > 16){
		printf("The digit must in 2~16.Please input again: ");
		scanf("%d",&digit);
	}
	if (trans(original,digit,str))
		printf("%5d = %s(%d)\n", original,str,digit);
	else
		printf("%5d => (%d).Error!\n", original,digit);
	return 0;
}