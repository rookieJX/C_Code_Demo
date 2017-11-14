/*
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int score;
	printf("请输入成绩：");
	scanf("%d",&score);
	char scoreC = score >= 90 ? ('A') : ((score >= 60 && score <= 89) ? ('B'):('C'));
	printf("成绩等级：%c\n",scoreC );
	return 0;
}