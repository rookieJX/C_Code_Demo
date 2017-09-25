/**
 * 输入任意字符，如果是英文，那么自定添加空格
 * 如果是数字，那么数字之后重复
 * #结尾
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch,nch;
	int count;
	printf("Please input char with # end\n");
	scanf("%c",&ch);
	while(ch != '#')
	{	//  如果不是#结尾，那么继续
		if (ch >= '0' && ch <= '9')	// 如果是数字，那么循环数字后次数
		{
			int ch_count	= ch - '0';
			scanf("%c",&nch);		// 继续输入
			for (int i = 0; i < ch_count; i++)
			{
				printf("%c",nch);
			}
			printf(" ");
		}
		else
		{
			printf("%c\n",ch);
			printf(" ");
		}
		scanf("%c",&ch);
	}
	printf("#\n");
	return 0;
}