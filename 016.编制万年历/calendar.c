#include <stdio.h>
#include <stdlib.h>

// 定义月份
#define January 1
#define February 2
#define March 3
#define April 4
#define May 5
#define June 6
#define July 7
#define August 8
#define September 9
#define October 10
#define November 11
#define December 12

// 定义每个月有几天
#define January_days 31
#define February_days 28
#define March_days 31
#define April_days 30
#define May_days 31
#define June_days 30
#define July_days 31
#define August_days 31
#define September_days 30
#define October_days 31
#define November_days 30
#define December_days 31

/*返回这个月之前标准为几天（二月默认为28天）*/
int month_day(int month) {
	switch(month) {
		case January:   return 0; break;
		case February:  return January_days ; break;
		case March:     return January_days + February_days ; break;
		case April:     return January_days + February_days + March_days ; break;
		case May:       return January_days + February_days + March_days + April_days ; break;
		case June:      return January_days + February_days + March_days + April_days + May_days ; break;
		case July:      return January_days + February_days + March_days + April_days + May_days + June_days ; break;
		case August:    return January_days + February_days + March_days + April_days + May_days + June_days + July_days ; break;
		case September: return January_days + February_days + March_days + April_days + May_days + June_days + July_days + August_days ; break;
		case October:   return January_days + February_days + March_days + April_days + May_days + June_days + July_days + August_days + September_days ; break;
		case November:  return January_days + February_days + March_days + April_days + May_days + June_days + July_days + August_days + September_days + October_days ; break;
		case December:  return January_days + February_days + March_days + April_days + May_days + June_days + July_days + August_days + September_days + October_days + November_days ; break;
		default:        return 0; break;
	}
}

/*计算某年某月日期*/
int month_current_day(int month) {
	switch(month) {
		case January:   return January_days; break;
		case February:  return February_days ; break;
		case March:     return March_days ; break;
		case April:     return April_days ; break;
		case May:       return May_days ; break;
		case June:      return June_days ; break;
		case July:      return July_days ; break;
		case August:    return August_days ; break;
		case September: return September_days ; break;
		case October:   return October_days ; break;
		case November:  return November_days ; break;
		case December:  return December_days ; break;
		default:        return 0; break;
	}
}

/*根据年份，月份，求当月天数*/
int year_month_day(int year,int month) {
	// 首先定义一个已知年份第一月的第一天是周几，然后开始计算（已知1900年1月1日，是周一）
	int leap_year_count = 0;	// 普通一年是365天，但是闰年有366天（2月份为29天）
	int month_totaly_day = 0;  	// 总天数
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		leap_year_count = 1;
	}
	month_totaly_day = month_current_day(month); // 计算当月之前天数
	if (month == January)  // 如果是从2开月开始
	{
		month_totaly_day += leap_year_count;
	}

	return month_totaly_day;
}

/*返回某一年第一天为周几(周日为6,周一为0)*/
int year_week_day(int year) {
	// 首先定义一个已知年份第一月的第一天是周几，然后开始计算（已知1900年1月1日，是周一）
	int leap_year_count = 0;// 普通一年是365天，但是闰年有366天（2月份为29天）
	int year_totaly_day = 0;// 总天数
	if (year >= 1900)
	{	
		for (int i = 1900; i < year; i++)
		{
			if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
			{
				leap_year_count ++;
			}
		}
		year_totaly_day = (year - 1900) * 365 + leap_year_count;
	}
	return year_totaly_day % 7;
}

/*根据年份，以及月份，计算当前月份第一天是星期几*/
int year_month_week_day(int year,int month) {
	// 首先定义一个已知年份第一月的第一天是周几，然后开始计算（已知1900年1月1日，是周一）
	int leap_year_count = 0;// 普通一年是365天，但是闰年有366天（2月份为29天）
	int month_totaly_day = 0;  // 总天数
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		leap_year_count = 1;
	}
	month_totaly_day = month_day(month); // 计算当月之前天数
	if (month > February)  // 如果是从2开月开始
	{
		month_totaly_day += leap_year_count;
	}
	return (month_totaly_day % 7 + year_week_day(year))%7;

}


/*根据年份，打印月份，以及星期*/
void year_month(int year) {
	int calendar_day[12][6][7] = {0}; // 定义三位数组存放日期
	printf("\n|=====================The Calendar of Year %d ========================|\n",year );
	char weeks[][7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for (int i = 1; i <= 12; i++)
	{
		int week_day = 0,week_count = 4; // 默认是周一,默认一个月有4周
		int day = 30;  // 默认为30天
		week_day = year_month_week_day(year,i); // 计算这个月的第一天是周几
		day  = year_month_day(year,i) + week_day ; // 这个月总共有多少天（从礼拜一开始算起）
		int weeks_month = 0;		// 记录当前日期，在本月是第几个星期
		int week_day_month = 0;		// 记录当前日期，是礼拜几
		for (int k = 1; k <= day; k++) // 
		{
			weeks_month	= (k-1)/7;
			week_day_month	= (k-1)%7;
			if (k <= week_day)
			{
				calendar_day[i-1][weeks_month][week_day_month] = 0;
			}
			else
			{
				calendar_day[i-1][weeks_month][week_day_month] = k-week_day;
			}
		}
	}

	for (int i = 0; i < 12; i++)
	{
		printf("%-2d  ",i );
		for (int j = 0; j < 7; j++)
		{
			printf("%s  ",weeks[j] );
		}
		printf("\n    ");
		for (int j = 0; j < 6; j++)
		{
			for (int k = 0; k < 7; k++)
			{
				printf("%-2d   ", calendar_day[i][j][k]);
			}
			printf("\n    ");
		}
		printf("\b\b\b\b==================================================\n");

	}
}

/*编制万年历，输入年份，打印这一年的月份*/
int main(int argc, char const *argv[])
{
	int year;
	printf("Please input the year whose calendar you want to kongw: ");
	scanf("%d%*c",&year);
	while(year < 1900) {
		printf("Please input the year bigger than 1900.\nPlease input the new year: ");
		scanf("%d%*c",&year);
	}
	year_month(year);
	return 0;
}