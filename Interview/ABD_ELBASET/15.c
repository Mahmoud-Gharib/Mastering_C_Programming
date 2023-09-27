/* Write c function to take 2 unsigned char and add them and return the result in 
unsigned char (where is the problem and how to solve it) */

#include<stdio.h>

typedef unsigned char    u8 ;

u8 Func_Sum(u8 N1 ,u8 N2);


void main(void)
{
	printf("%d\n",Func_Sum(5,6));
	printf("%d\n",Func_Sum(50,230));   //Over Flow
	printf("%d\n",Func_Sum(95,69));

}

u8 Func_Sum(u8 N1 ,u8 N2)
{
	return ( N1 + N2 );
}
