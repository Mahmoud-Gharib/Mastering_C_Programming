/* Write c function to reverse digits in number (number 2371 return 1732).*/


#include <stdio.h>

int Func_Reverse(int Number);

void main(void)
{
  printf("%d" ,Func_Reverse(245) );	
}
int Func_Reverse(int Number)
{
	int Rev = 0;
	while( Number != 0 )
	{
		Rev = (Rev * 10 ) + (Number % 10);
		Number /= 10;
	}
	return Rev;
}