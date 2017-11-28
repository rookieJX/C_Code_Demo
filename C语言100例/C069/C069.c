/*
题目：有n个人围成一圈，顺序排号。
从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
*/

#include <stdio.h>
#include <stdlib.h>

int *malloc_arr(size_t n) ;
void free_arr(int *m) ;
void print_arr(int arr[],int count) ;
int lastFromArrayWithLoop(int arr[],int count,int loop) ;

int main(int argc, char const *argv[])
{
	int n,*arr,last,loop;
	printf("请输入一共有多少人：");
	scanf("%d",&n);
	printf("请输入间隔：");
	scanf("%d",&loop);
	arr = malloc_arr(n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
	print_arr(arr,n);
	printf("=====分割线=====\n");
	last = lastFromArrayWithLoop(arr,n,loop);
	printf("最后剩下的人是：%d\n",last);
	return 0;
}


int *malloc_arr(size_t n) {
	int *m;
	if ((m = (int *)malloc(n * sizeof(int *))) == NULL) return NULL;
		return m;
}

void free_arr(int *m) {
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

/* 根据传入间隔，返回数组最后数字 */
int lastFromArrayWithLoop(int arr[],int count,int loop) {
	int index = 0,current_index = 0;
	while(index < count-1) { // 不满足条件的时候，说明还剩余一个人
		for (int i = 0; i < 3; i++)
		{
			if (current_index >= count) // 如果大于，说明已经是循环一圈
				current_index = current_index - count;
			if (arr[current_index] == 0)  // 有过等于0，说明已经排除
				i--;
			
			if (i == 2) {
				arr[current_index] = 0;
				index++;
			}

			current_index++; // 记录当前已经下标
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (arr[i] != 0)
		{
			current_index = i+1;
		}
	}

	return current_index;
	
}