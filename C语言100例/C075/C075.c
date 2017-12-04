/*
题目：放松一下，算一道简单的题目。
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,n;
    for(i=1;i<5;i++)
    {
        n=0;
        if(i!=1)
            n=n+1;
        if(i==3)
            n=n+1;
        if(i==4)
            n=n+1;
        if(i!=4)
            n=n+1;
        if(n==3)
            printf("%c\n",64+i);
    }
	return 0;
}