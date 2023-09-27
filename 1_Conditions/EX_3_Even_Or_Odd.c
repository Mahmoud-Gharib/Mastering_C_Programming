/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Even_Or_Odd
*/
#include "stdio.h"
int main()
{
    int Number;
    printf("Please enter the Number\n");
    scanf("%d",&Number);
    if(Number%2 == 0)
		printf("Number is Even\n");
	else
	 	printf("Number is Odd\n");
	
    return 0;
}
