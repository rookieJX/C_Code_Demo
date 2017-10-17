#include <stdio.h>
#include <stdlib.h>

// 定义计划数量
#define PlanCount 40
#define TotalCount 4261
// 当前年月日
#define DateYear 2017
#define DateMonth 10
#define DateDay 18

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

/*2017.10.18 不背单词【4261】- 计划【40】- 剩余【4221】*/
int main(int argc, char const *argv[])
{
	int totalCount = TotalCount; // 总数量
	int dateYear = DateYear,dateMonth = DateMonth,dateDay = DateDay;
	do {
		int date_month_day = year_month_day(dateYear,dateMonth);
		for (int i = dateDay; i <= date_month_day; i++)
		{
			printf("%d.%02d.%02d 不背单词【%d】- 计划【%d】- 剩余【%d】\n", dateYear,dateMonth,dateDay,totalCount,PlanCount,totalCount-PlanCount);
			dateDay += 1;
			totalCount -= PlanCount;
			if (totalCount <= 0) break;
		}
		dateMonth += 1;
		dateDay = 1;
		if (dateMonth == 12) {
			dateMonth = 1;
			dateYear += 1;
		}
	} while(totalCount >= 0);

	return 0;
}