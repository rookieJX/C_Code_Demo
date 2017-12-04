/*
题目：编写一个函数，输入n为偶数时，
调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)
*/

#include <stdio.h>
#include <stdlib.h>


double eventnumber(int n);
double oddnumber(int n);

int main(int argc, char const *argv[])
{
	int n;
	double r;
	double (*pfunc)(int);
	printf("请输入一个数字：");
	scanf("%d",&n);
	if (n % 2 == 0) pfunc = eventnumber;
	else pfunc = oddnumber;

	r = (*pfunc)(n);
	printf("结果是：%lf\n",r);
	return 0;
}

double eventnumber(int n) {
	double s=0,a=0;
	for (int i = 2; i <= n; i += 2)
	{
		a = (double)1/i;
		s += a;
	}
	return s;
}

double oddnumber(int n) {
	double s = 0,a = 0;
	for (int i = 1; i <= n; i += 2)	
	{
		a = (double)1/i;
		s += a;
	}
	return s;
}