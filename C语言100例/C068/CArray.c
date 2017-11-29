#include <stdlib.h>

/* 通过指定数组长度 动态申请数组内存 */
int *malloc_int_array(size_t n) {
	int *m;
	if ((m = (int *)malloc(n * sizeof(int *))) == NULL)
		return NULL;
	return m;
}

/* 释放数组 */
void free_int_array(int *m) {
	free(m);
}

void print_count() {
	printf("测试打印\n");
}