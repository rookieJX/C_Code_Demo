/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
*/

#include <stdio.h>

#define Jan 31
#define Feb 28
#define Mar 31
#define Apr 30
#define May 31
#define Jun 30
#define Jul 31
#define Aug 31
#define Sep 30
#define Oct 31
#define Nov 30
#define Dec 31

int main(int argc, char const *argv[])
{
	int year,month,day;

	int dayOfYear(int year,int month,int day);

	printf("请输入年月日（格式：2017-11-10)：");
	scanf("%d-%d-%d",&year,&month,&day);
	int sum = dayOfYear(year,month,day);
	printf("这是这一年的第：%d 天\n",sum );
	return 0;
}

int dayOfYear(int year,int month,int day) {
	int sum,leap = 0;
	switch(month){
		case 1: sum = 0;   break;
		case 2: sum = Jan; break;
		case 3: sum = Jan + Feb; break;
		case 4: sum = Jan + Feb + Mar; break;
		case 5: sum = Jan + Feb + Mar + Apr; break;
		case 6: sum = Jan + Feb + Mar + Apr + May; break;
		case 7: sum = Jan + Feb + Mar + Apr + May + Jun; break;
		case 8: sum = Jan + Feb + Mar + Apr + May + Jun + Jul; break;
		case 9: sum = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug; break;
		case 10:sum = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep; break;
		case 11:sum = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct; break;
		case 12:sum = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov; break;
		default:printf("data error\n");break;
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		leap = 1;
	if (leap == 1 && month > 2)
		sum ++;
	sum += day;
	return sum;
}