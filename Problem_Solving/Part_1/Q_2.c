/*------------------------------------------------*
* (Calculating the Product of Odd Integers)       *
*  Write a program that calculates and prints the *
*  product of the odd integers from 1 to 15.      *
*------------------------------------------------*/

#include "stdio.h"

int Product_Odd(int ); 

void main(void)
{
	int Number = 1,Product = 0;
	Product = Product_Odd(Number);
	printf("the product of the odd integers = %d\n",Product);
	
}
int Product_Odd(int x)
{
	int y = 1;
	for(int i = x;i<=15;i++)
	{
		if(i % 2 != 0)
			y *= i;
	}
	return y;
}