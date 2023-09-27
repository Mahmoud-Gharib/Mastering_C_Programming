/*  Write a C function that take two numbers and return array contain all numbers between the two 
given numbers. (Numbers 2,6->return array contains [3,4,5]).*/

#include <stdio.h>

int *Func(int N1 ,int  N2 );
void main(void)
{
	int N1 = 5,N2 = 16;
	int size = ( N2 - N1 ) - 1;
	
	int *Ptr = Func(N1 , N2);
	
	for(int i = 0; i < size ; i++)
	{
		printf("%d => " , Ptr[i]);
	}	
}
int *Func(int N1 ,int  N2)
{
	static int arr[30] ;
	for(int i = N1 + 1,j = 0; i < N2 ; i++,j++)
	{
		arr[j] = i;
	}
	return arr;
}