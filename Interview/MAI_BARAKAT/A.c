
/* Count Even Number in N */

#include <stdio.h>

#define  CODE       2
#if   CODE   ==    1
void main(void)
{
	int N = 25 , Count = 0;
	for(int i = 1 ; i <= N ; i++)
	{
		if( ( i % 2 ) == 0 )
		{
			Count++;
			printf("%d => ",i);
		}
	}
	printf("\n Even Number =  %d",Count);
	
}
#elif   CODE   ==    2
void main(void)
{
	int N = 23464, Count = 0;
	while( N != 0)
	{
		if( N % 2 == 0)
		{
			Count++;
		}
		N = N / 10;
	}		
	printf("%d",Count);
}
#endif