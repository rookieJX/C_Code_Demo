/*
题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。。
*/

#include <stdio.h>
#include <stdlib.h>

int *mallocForArray(size_t n);
void freeForArray(int *m) ;
void print_arr(int arr[],int count) ;
int *max_arr(int arr[],int count) ;
int *min_arr(int arr[],int count) ;

int main(int argc, char const *argv[])
{
	int *arr;
	int n;
	// 输入数组大小和数组内容
	printf("Total numbers?\n");
	scanf("%d",&n);
	arr = mallocForArray(n);
	printf("Input %d numbers.\n",n );
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	// 打印数组
	print_arr(arr,n);
	max_arr(arr,n);
	min_arr(arr,n);
	print_arr(arr,n);
	return 0;
}

/* 动态定义数组 */
int *mallocForArray(size_t n) {
	int *m ;
	if ((m = (int *)malloc(n * sizeof(int *))) == NULL) return NULL;
	return m;
}

/* 释放数组 */
void freeForArray(int *m) {
	free(m);
}

/* 打印数组 */
void print_arr(int arr[],int count) {
	for (int i = 0; i < count; i++)
	{
		printf("%4d",arr[i]);
	}
	printf("\n");
}

/* 数组中最大数字 */
int *max_arr(int arr[],int count) {
	int max,index,temp;
	if (count <= 1) 
		return arr;
	for (int i = 0; i < count; i++)
	{
		if (i == 0) {
			max = arr[i];
			index = 0;
		}
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	temp	= arr[0];
	arr[0]	= arr[index];
	arr[index] = temp;
	return arr;
}

/* 数组中最小的数字 */
int *min_arr(int arr[],int count) {
	int min,index,temp;
	if (count <= 1) 
		return arr;
	for (int i = 0; i < count; i++)
	{
		if (i == 0){
			min = arr[i];
			index = 0;
		}
		if (min > arr[i]) {
			index = i;
			min = arr[i];
		}
	}

	temp	= arr[count-1];
	arr[count-1]	= arr[index];
	arr[index] = temp;
	return arr;
}