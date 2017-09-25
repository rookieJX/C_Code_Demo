/**
 * 字符所占字节数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("int:%ld bytes\n",sizeof(int) );
	printf("long:%ld bytes\n",sizeof(long) );
	printf("float:%ld bytes\n",sizeof(float) );
	printf("double:%ld bytes\n",sizeof(double) );
	return 0;
}