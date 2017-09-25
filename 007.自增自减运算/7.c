/**
 * 计算自增自减
 * 当自增/减运算符号在前面，需要首先参与运算
 * 当自增/减运算符号在后面，与之相反
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,x1,x2,x3,x4;
	printf("input a number:\nx = ");
	scanf("%d",&x);
	x1 = x2 = x3 = x4 = x;
	printf("\n"); 
	printf("The result of --x = %d\n",--x1 );
	printf("The result of ++x = %d\n",++x2 );
	printf("The result of x-- = %d\n",x3-- );
	printf("The result of x++ = %d\n",x4++ );
	return 0;
}