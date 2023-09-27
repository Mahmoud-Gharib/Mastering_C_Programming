/*Write c function to count number of ones in the binary representation of a 
number ( 10-> 1010 return 2) try to optimize your code
*/


#include <stdio.h>

#define N_of_Bits        32

int Func_Count_Ones(int Number);

void main(void)
{
  printf("%d" ,Func_Count_Ones(2551) );	
}
int Func_Count_Ones(int Number)
{
	int Count = 0;
	for(int i = N_of_Bits - 1 ; i >= 0 ; i--)
	{
		if((Number & ( 1 << i) ))
		{
			Count++;
		}		
	}
	return Count;
}