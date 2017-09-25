/**
 * 根据提示输入，求和
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y,m;						// 定义
	printf("请输入两个数字求和\n");	// 输出
	scanf("%d%d",&x,&y);			// 输入
	m = x + y;
	printf("%d + %d = %d\n",x,y,m);
	return 0;
}