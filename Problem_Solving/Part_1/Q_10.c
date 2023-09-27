/*------------------------------------------------*
* (Greatest Common Divisor) The greatest 		  *
* common divisor (GCD) of two integers is the     *
* largest integer that evenly divides each of the *
* two numbers. Write function gcd that returns    *
* the greatest common divisor of two integers.    *
*-------------------------------------------------*/

#include "stdio.h"

int GCD(int ,int );

void main(void)
{
	int Number_1,Number_2;
	printf("Please Enter Number_1 :");
	scanf("%d",&Number_1);       
	printf("Please Enter Number_2 :");
	scanf("%d",&Number_2);
	int gdc = GCD(Number_1,Number_2);
	printf("(Greatest Common Divisor) = %d\n",gdc);
}
int GCD(int x ,int y )
{
	int z = 0,i=0;
	if(x >= y)
		z = x;
	else
		z = y;
	for(int i = z ;1 <= x;i--)
		if(x % i == 0 && y % i == 0)
			return i;	
}