/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Calculator
*/
#include "stdio.h"
int main()
{
    int Num1,Num2,Result;
	char Operation;                 
	printf("Please enter Operation\n");
    scanf("%c",&Operation);
	printf("Please enter the Number_1\n");
    scanf("%d",&Num1);
	printf("Please enter the Number_2\n");
    scanf("%d",&Num2);
	
	switch(Operation)
	{
		case '+':Result = Num1 + Num2;//break;
		printf("Wrong Operation\n");
		case '-':Result = Num1 - Num2;break;
		case '*':Result = Num1 * Num2;break;
		case '/':Result = Num1 / Num2;break;
		default: printf("Wrong Operation\n"); break;
	}
	printf("Result =%d",Result);
	
    return 0;
}
