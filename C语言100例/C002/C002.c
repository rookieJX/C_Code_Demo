/*
题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；

利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；

20万到40万之间时，高于20万元的部分，可提成5%；

40万到60万之间时高于40万元的部分，可提成3%；

60万到100万之间时，高于60万元的部分，可提成1.5%；

高于100万元时，超过100万元的部分按1%提成。

从键盘输入当月利润I，求应发放奖金总数？

 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double i,sum = 0.0;
	printf("请输入当月利润(单位：元)I = ");
	scanf("%lf",&i);
	if (i >= 1000000)
	{
		sum = (i - 1000000) * 0.01;
		i = 10000000;
	}
	if (i >= 600000)
	{
		sum += (i - 600000) * 0.015;
		i = 600000;
	}
	if (i >= 400000)
	{
		sum += (i - 400000) * 0.03;
		i = 400000;
	}
	if (i >= 200000)
	{
		sum += (i - 200000) * 0.05;
		i = 200000;
	}
	if (i >= 100000)
	{
		sum += (i - 100000) * 0.75;
		i = 100000;
	}
	if (i >= 0)
		sum += (i - 0) * 0.1;

	printf("需要发放奖金总数为：%lf\n",sum );
	return 0;
}