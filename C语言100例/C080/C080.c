/*
题目：海滩上有一堆桃子，五只猴子来分。
第一只猴子把这堆桃子平均分为五份，多了一个，这只 猴子把多的一个扔入海中，拿走了一份。
第二只猴子把剩下的桃子又平均分成五份，又多了 一个，它同样把多的一个扔入海中，拿走了一份，
第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？

我也不知道这个是什么意思
*/

#include <stdio.h>

int countOfPeach(int count);

int main(int argc, char const *argv[])
{
	int count = 5;
	int sum = countOfPeach(count);
	printf("总和为：%d\n",sum );
	return 0;
}

int countOfPeach(int count) {
	int n = 1;
	int sum = 0;
	while(n == count)
	if (n == count) {
		return 5;
	} 
	return (5 * (countOfPeach(n-1)) + 1);
}