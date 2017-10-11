#include <stdio.h>
#include <stdlib.h>

int *mallocForArray(size_t n);
void freeForArray(int *m);

int main(int argc, char const *argv[])
{
	int x = 0,p = 2;
	printf("请输入一个数字\nx = ");
	scanf("%d",&x);
	while( x <= 0) {	// 获取输入
		printf("请输入数字且数字大于0\nx = ");
		
		scanf("%d",&x);
		getchar();
		getchar();
	}
	printf("您输入的数字为：%d\n", x);
	int *m = mallocForArray(x);		// 定义数组，数组初始化
	for (int i = 0; i < x; i++)
	{
		m[i] = i+1;
		printf("%d\t",m[i] );
	}

	printf("\n前【%d】个质数分别为：\n",x );
	int temp = 0;
	while(temp < x) {	// 求解质数
		int sign = 0;	// 标识，0标识当前数字为质数，1表示不为质数
		for (int j = 2; j <= p/2; j++)	// 求当前第几个质数（算法为求解当前第几个数的一半）
		{
			if (p % j == 0)
			{
				sign = 1;
				break;
			}
		}
		if (sign == 0)
		{
			m[temp] = p;
			temp++;
		} 

		p++;
	}

	for (int i = 0; i < x; i++)	// 打印当前质数
	{
		
		printf("%d\t",m[i] );
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	free(m);
	return 0;
}

/* 动态定义数组 */
int *mallocForArray(size_t n) {
	int *m ;
	if ((m = (int *)malloc(n * sizeof(int *))) == NULL) return NULL;
	return m;
}

void freeForArray(int *m) {
	free(m);
}