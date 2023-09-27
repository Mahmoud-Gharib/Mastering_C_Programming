/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1

*/
#include "stdio.h"
void CalcFactor(int x);
void main()
{
    int Number;
	printf("Please enter the Number:\n");
	scanf("%d",&Number);
	CalcFactor(Number);
 
}
void CalcFactor(int x)
{
	for(int i=1;i<=x;i++)
	{
		if( x % i == 0)	
		   printf("%d\n",i);
	}
}