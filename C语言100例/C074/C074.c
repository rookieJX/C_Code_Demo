/*
题目：连接两个链表。
*/

#include <stdio.h>
#include <stdlib.h>
struct list
{
	int data;
	struct list *next;
};
typedef struct list node;
typedef node *link;

/* 链接两个链表 */
link concatenate(link pointer1,link poiner2) {
	link tmp;
	tmp = pointer1;
	while(tmp->next) {
		tmp = tmp -> next;
	}
	tmp -> next = poiner2;
	return pointer1;
}

/* 创建链表 返回结构体指针第一个元素 */
link CreateNode(int n) {
	node *L,*p,*q;
	L = (node *)malloc(sizeof(node));
	if(!L) return 0;
	L -> next = NULL;
	p = L;

	for (int i = 1; i <= n; i++)
	{
		q = (node *)malloc(sizeof(node));
		printf("请输入第 %d 个元素的值：",i );
		scanf("%d",&(q->data));
		q -> next = NULL;
		p -> next = q;
		p = q;
	}
	return L;

}

/* 打印链表 */
void print_strct(link L) {
	link p = L -> next;
	while(p != NULL) {
		printf("%d  ", p -> data);
		p = p -> next;
	}
}

int main(int argc, char const *argv[])
{
	link L1,L2,L3;
	int n;
	printf("请输入个数：");
	scanf("%d",&n);

	L1 = CreateNode(n);
	print_strct(L1);
	L2 = CreateNode(n);
	print_strct(L2);
	L3 = concatenate(L1,L2);
	print_strct(L3);
	return 0;
}