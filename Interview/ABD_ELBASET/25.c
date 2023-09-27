#include <stdio.h>

typedef unsigned char    u8 ;
#define N_Bits           8

u8 Func(u8 Number); 
void main(void)
{
	u8 N = 1;
	printf("%d", Func(N));
}
u8 Func(u8 Number)
{
	u8 Result = Number;
	for(int i = 0 ; i < N_Bits ; i++)
	{
		if( (( 1 << i) & Number ) >= 1)
		{
			Result = (Result >> 1);
			Result = Result & ( 1 << ( N_Bits - 1 - i) );
		}
		else
		{
			Result = (Result >> 1);
		}
	}
	
}