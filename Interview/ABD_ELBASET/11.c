/* Write c function to sum numbers from 1 to 100 (without loop) */

#include<stdio.h>

#define       CODE         3
int Func_Sum(int N1, int N2);

void main(void)
{
	printf("%d",Func_Sum( 1 , 100 ));
}

#if    CODE       ==     1
int Func_Sum(int N1, int N2)
{
	if( N1 > N2 )
	{
		return  ( ( N1 * (N1+1) ) / 2 ) ;
	}
	else
	{
		return  ( ( N2 * (N2+1) ) / 2 ) ;
	}
}
#elif    CODE        ==    2
int Func_Sum(int N1, int N2)
{
	int sum = 0;
	if( N1 > N2 )
	{
		for(int i = N2 ; i <= N1 ;i++)
		{
			sum += i;
		}
		return sum;
	}
	else
	{
		for(int i = N1 ; i <= N2 ;i++)
		{
			sum += i;
		}
		return sum;
	}
}
#elif    CODE      ==      3
int Func_Sum(int N1, int N2)
{
    //Recursion	
}
#endif
