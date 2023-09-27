/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Pyramid Of *
*/
#include "stdio.h"
int main()
{
    int i,j,Number;
	printf("Please enter the Number :\n");
	scanf("%d",&Number);
    for(i=1;i<=Number;i++)
	{
		for(j=1;j<=i;j++)         //;
		{
			printf("*");
		}
		printf("\n"); 
	}
	
    return 0;
}
