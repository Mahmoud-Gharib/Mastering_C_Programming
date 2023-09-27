/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Factorial
*/
#include "stdio.h"
int main()
{
    int Number,digits=0;
	printf("Please enter the Number :\n");
	scanf("%d",&Number);
    while(Number > 0)
	{
	 Number = Number/10;
	 digits++;	
	}
	printf("digits = %d \n",digits);
    return 0;
}
