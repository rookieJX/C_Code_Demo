#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char SelectKey,CreditMoney,DebitMoney;
	while(1)
	{
		do
		{
			system("clear");
			puts("=========================");
			puts("|  Please select key:   |");
			puts("|  1. Quary             |");
			puts("|  2. Credit            |");
			puts("|  3. Debit             |");
			puts("|  4. Return            |");
			puts("=========================");
			SelectKey	= getchar();
		} while (SelectKey == '1' && SelectKey == '2' && SelectKey == '3' && SelectKey == '4');

		switch(SelectKey)
		{
			case '1':
				system("clear");
				puts("================================");
				puts("|    Your balance is $1000.    |");
				puts("|  Press any key to return...  |");
				puts("================================");
				getchar();  // 这里两个获取，第一个是为了获取键盘的return符号，第二个作用是用来等待键盘输入任意字符
				getchar();
			break;
			case '2':
				do{
					system("clear");
					puts("==================================");
					puts("|   Please select Credit money:  |");
					puts("|   1. $50                       |");
					puts("|   2. $100                      |");
					puts("|   3. Return                    |");
					puts("==================================");
					CreditMoney = getchar();
				}while( CreditMoney!='1' && CreditMoney!='2' && CreditMoney!='3' );
				switch(CreditMoney)
				{
					case '1':
						system("clear");
						puts("=========================================");
						puts("|  Your Credit money is $50,Thank you!  |");
						puts("|         Press any key to return...    |");
						puts("=========================================");
						getchar();
						getchar();
						break;
					case '2':
						system("clear");
						puts("==========================================");
						puts("|  Your Credit money is $100,Thank you!  |");
						puts("|         Press any key to return...     |");
						puts("==========================================");
						getchar();
						getchar();
						break;
					case '3':
						break;
				}
				break;
			break;
			case '3':
			break;
			case '4':
			break;
		}
		
	}
	return 0;
}
