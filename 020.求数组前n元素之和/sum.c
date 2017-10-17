#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a[] = {1,2,234,23,5,435,23,456,346,453,6,4537,56,7,546 };
	int sum = 0;
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
	{
		sum += a[i];
	}
	printf("数组和：sum = %d\n",sum );
	return 0;
}