/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
*/
#include "stdio.h"

void CalcFibonacci(int a);
void main()
{
    int Number;
	printf("Please enter the Number:\n");
	scanf("%d",&Number);
	CalcFibonacci(Number);
   
}
void CalcFibonacci(int a)
{
	int x=0,y=1,z;
	printf("%d ",x);
	printf("%d ",y);
	for(int i=3; i <= a ;i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%d ",z);
	}
}