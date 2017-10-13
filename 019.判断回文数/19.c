#include <stdio.h>
#include <stdlib.h>

#define M sizeof(unsigned int)*8

int trans(unsigned original,int digit,char s[]) {
	bool bl = 1; // 1是回文，0不是回文
	int i = 0,temp_size = 0;
	char buf[M+1];
	static char digits[] ="0123456789ABCDEF";
	unsigned current;
	current = original;
	do { // 开始转换
		buf[i] =  digits[current % digit];
		current /= digit;
		i++;
	} while (current);
	// 将转换结果倒置
	temp_size = i;
	for (int j = 0; ((s[j] = buf[i-1]) && (i >= 0)); j++,i--){}
	for (int j = 0; j < temp_size/2 + temp_size%2; j++)			
	{
		if (s[temp_size-j-1] != s[j])
		{
			bl = 0;
			break;
		}
	}
	return bl;
}

/*任意输入一个数字，判断回文数字*/
/*思路：将数字转换为字符串，然后对比*/
/*扩展，判断任意进制下的数字是否为回文数*/
int main(int argc, char const *argv[])
{
	int digit = 10;	//转换进制
	unsigned  original;  // 初始数字
	char str[M+1];		// 定义用来存储转换后的数字
	printf("请输入任意数字: ");
	scanf("%d",&original);
	printf("请输入任意进制(2~16)，判断其否是回文数(默认为10进制): " );
	scanf("%d",&digit);
	while(digit < 2 || digit > 16){
		printf("禁止必须是(2~16)，请重新输入: ");
		scanf("%d",&digit);
	}
	if (trans(original,digit,str))
		printf("%5d = %s(%d).是回文\n", original,str,digit);
	else
		printf("%5d = %s(%d).不是回文\n", original,str,digit);
	return 0;
}