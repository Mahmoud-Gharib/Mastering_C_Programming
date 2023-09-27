/*Write c function to print the binary representation of a number try not to print 
zeros on the left ( 5-> 101).
*/


#include <stdio.h>
#define N_of_Bits        8

void Func_Print(char Number);

void main(void)
{
  Func_Print(4);	
}
void Func_Print(char Number)
{
	int flag = 0;
	for(int i = N_of_Bits - 1 ; i >= 0 ; i--)
	{
		if((Number & ( 1 << i) ))
		{
			printf("1");
			flag = 1;
		}
		else
		{
			if( flag == 1 )
				printf("0");
		}
			
	}
}