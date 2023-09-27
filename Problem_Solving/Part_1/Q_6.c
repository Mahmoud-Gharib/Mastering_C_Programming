/*-------------------------------------------------*
*  (Multiples) Write a function multiple that      *
*  determines for a pair of integers whether the   *
*  second integer is a multiple of the first. The  *
*  function should take two integer arguments      *
*  and return 1 (true) if the second is a multiple *
*  of the first, and 0 (false) otherwise           *
*--------------------------------------------------*/

#include "stdio.h"

int multiple(int , int ); 

void main(void)
{
	int Number_1,Number_2 ;
	printf("Please Enter Number_1 :");
	scanf("%d",&Number_1);
	printf("Please Enter Number_2 :");
	scanf("%d",&Number_2);
	int Result = multiple(Number_1,Number_2);
	printf("Result = %d\n",Result);
}
int multiple(int x,int y)
{
	if(x % y == 0)
		return 1;
	else 
		return 0;
}