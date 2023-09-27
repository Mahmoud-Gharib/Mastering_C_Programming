/*
Date   : 3/1/2022
Author :mahmoud mustafa gharib
Version: v1
*/
#include "stdio.h"
int main()
{
    int Number, x,result = 0,y;
    printf("Please enter the Number\n");
    scanf("%d",&Number);
	 y = Number;
	while(Number >0)
	{
		x = Number % 10;
		result = result*10 + x;
		Number = Number / 10;
	}
	if(y == result)
	   printf("the Number is palindrome\n",result);
    else
	   printf("the Number is not palindrome\n",result);

    return 0;
}
