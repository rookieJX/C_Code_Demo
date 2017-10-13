#include <stdio.h>

/*对array数组排序，array为数组指针，n为数组元素个数*/
void rest(int array[],int n) {
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (array[i] >= array[j])
			{
				temp		= array[j];
				array[j]	= array[i];
				array[i]	= temp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	/*对数组元素排序*/
	int array[] = {12,0,23,43,0,-9,-100,100,300};
	int count  = sizeof(array)/sizeof(array[0]);
	printf("The original Array is :\n");
	for (int i = 0; i < count; i++)
	{
		printf("%-2d  ", array[i]);
	}
	printf("\n");
	rest(array,count);
	printf("The deformation Array is :\n");
	for (int i = 0; i < count; i++)
	{
		printf("%-2d  ", array[i]);
	}
	printf("\n");
	return 0;
}