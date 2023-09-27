/*------------------------------------------------*
* (Calculating the Sum of Even Integers) Write a  *
* program that calculates and prints the sum of   *
* the even integers from 2 to 30                  *
*------------------------------------------------*/

#include "stdio.h"

int Sum_Even(int ); 

void main(void)
{
	int Number = 2,Sum = 0;
	Sum = Sum_Even(Number);
	printf("the sum of the even integers = %d\n",Sum);
	
}
int Sum_Even(int x)
{
	int y = 0;
	for(int i = x;i<=30;i++)
	{
		if(i % 2 == 0)
			y += i;
	}
	return y;
}