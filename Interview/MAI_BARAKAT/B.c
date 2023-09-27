/*  check Number is Even or Odd Parity  */
#include <stdio.h>
#define  CODE       2
#if   CODE   ==    1
void main(void)
{
	int N ;
	scanf("%d", &N);
	
	if( (N % 2) == 0  )
	{
		printf( " %d is Even Parity " , N);
	}
	else
	{
	    printf( " %d is Odd Parity " , N);
	}
}
#elif   CODE   ==    2
void main(void)
{
	int N , Count = 0;
	scanf("%d", &N);
	while( N != 0)
	{
		if( (N & 1) == 1)
		{
			Count++;
		}
		N = N >> 1;
	}		
	printf("%d\n",Count);
	if( Count == 0  )
	{
		printf( " %d is Even Parity " , N);
	}
	else
	{
	    printf( " %d is Odd Parity " , N);
	}
}
#endif