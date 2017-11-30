/*
题目：反向输出一个链表。
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}Node,*PNode;

/* 创建链表 返回结构体指针第一个元素 */
PNode CreateNode(int n) {
	struct Node *L,*p,*q;
	L = (Node *)malloc(sizeof(Node));
	if(!L) return 0;
	L -> next = NULL;
	p = L;

	for (int i = 1; i <= n; i++)
	{
		q = (Node *)malloc(sizeof(Node));
		printf("请输入第 %d 个元素的值：",i );
		scanf("%d",&(q->data));
		q -> next = NULL;
		p -> next = q;
		p = q;
	}
	return L;

}

void print_strct(PNode L) {
	PNode p = L -> next;
	while(p != NULL) {
		printf("%d  ", p -> data);
		p = p -> next;
	}
}

int main(int argc, char const *argv[])
{
	PNode Head = NULL;
	int n;
	printf("请输入链表个数：");
	scanf("%d",&n);

	Head = CreateNode(n);
	printf("刚刚建立的链表数据为：\n");
	print_strct(Head);
	return 0;
}