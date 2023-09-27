/* Write c function to calculate the factorial of number (factorial of 5 is 
5*4*3*2*1) try in 2 different way */

#include<stdio.h>

#define       CODE         2
int Func_Fact(int N);

void main(void)
{
	printf("%d",Func_Fact(5));
}

#if    CODE       ==     1
int Func_Fact(int N)
{
	int Fact = 1;
	if( N <= 1)
	{
		return Fact;
	}
	else
	{
		for( int i = 1; i <= N ; i++)
		{
			Fact *= i;
		}
		return Fact;
	}
	
}
#elif    CODE        ==    2
int Func_Fact(int N)
{
	
	if( N <= 1)
	{
		return 1;
	}
	else
	{
		return N * Func_Fact(N - 1);
	}
	
}

#endif