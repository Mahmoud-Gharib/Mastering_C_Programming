/* Write c function to take a number and sum all its digits (number 126 , sum = 
1+2+6). */


#include <stdio.h>

int Func_Sum(int Number);

void main(void)
{
  printf("%d" ,Func_Sum(25514) );	
}
int Func_Sum(int Number)
{
	int sum = 0;
	while( Number != 0 )
	{
		sum += (Number % 10);
		Number /= 10;
	}
	return sum;
}