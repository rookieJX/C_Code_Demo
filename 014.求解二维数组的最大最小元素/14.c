#include <stdio.h>
#include <stdlib.h>

int **alloc2int(size_t n1,size_t n2);
void free2int(int **p);

/* 二维数组矩阵转换 */
int main(int argc, char const *argv[])
{
	int row , col,inputRow = 1,inputCol = 1;
	int max = 0,min = 0;	// 定义最大最小元素
	do    // 长度
	{
		printf("请输入二维矩阵：\n");
		printf("请输入二维矩阵长度：L = ");
		scanf("%d",&row);
		if (row <= 0 || row >= 10) {
			printf("请输入合法长度（0~10）\n");
		}
		
	} while(row <= 0 || row >= 10);
	
	do    // 宽度
	{
		printf("请输入二维举证宽度：H = ");
		scanf("%d",&col);
		if (col <= 0 || col >= 10)
		{
			printf("请输入合法宽度（0~10）\n");
		}
	} while (col <= 0 || col >= 10);

	system("clear");    // 清屏

	printf("您定义的二维矩阵为【%d * %d】\n",row,col );    // 打印输入

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("  *");
		}
		printf("\n");
	}

	printf("转换后的二维举证为【%d * %d】\n",col,row );

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("  *");
		}
		printf("\n");
	}
	
	int **m; // 定义二维数组
	m = alloc2int(col,row);  // 动态申请
	for (int i = 0; i < col; i++)
	{
		printf("请输入二维矩阵所有元素：\n第【%d】行：\n",i);
		for (int j = 0; j < row; j++)
		{
			printf("m[%d][%d] = ",i,j );
			scanf("%d",&m[i][j]);
		}
	}

	printf("==========矩阵=========\n");
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			min  = m[0][0];  // 设置第一个为当前最小值
			printf("m[%d][%d] = %d\t",i,j,m[i][j] );
		}
		printf("\n");
	}	

	printf("==========二维数组最大元素==========\n");
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			// 当前元素的值
			int current = m[i][j];
			if (min >= current)   // 如果当前元素比最小元素还小，那么记录当前元素值
			{
				min  = current;
			}

			if (max <= current)  // 如果当前元素比最大元素还大，那么记录当前元素值
			{
				max  = current;
			}
		}
	}
	printf("==========二维数组最小元素==========\n");	
	printf("min = %d\n",min );
	printf("max = %d\n",max);
	free2int(m);  // 释放
	return 0;
}

int **alloc2int(size_t n1, size_t n2)
// allocate a int matrix
{
    int **m;
    // allocate pointers to rows (m is actually a pointer to an array)
    // m 为一个行指针
    if ((m = (int **)malloc(n1*sizeof(int *))) == NULL) return NULL;
    // allocate rows and set pointers to them
    // m[0] 指向整个数组内存块的首地址
    if ((m[0] = (int *)malloc(n1*n2*sizeof(int))) == NULL) return NULL;
    for (size_t i1=1; i1<n1; i1++) m[i1]=m[i1-1]+n2;
    // return pointers to array of pointers to rows
    return m;
}

void free2int(int **m)
{
    free(m[0]);
    free(m);
}