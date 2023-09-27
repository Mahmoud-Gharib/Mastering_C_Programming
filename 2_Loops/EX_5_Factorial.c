/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Factorial
*/
#include "stdio.h"
int main()
{
    int Number,Factorial = 1;
	printf("Please enter the Number :\n");
	scanf("%d",&Number);
    while(Number > 0)
	{
	 Factorial = Factorial *Number;
	 Number--;	
	}
	printf("Factorial = %d \n",Factorial);
    return 0;
}
