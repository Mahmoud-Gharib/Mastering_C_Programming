/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Multiplication_Table
*/
#include "stdio.h"
int main()
{
    int i,j,Number;
	printf("Please enter the Number :\n");
	scanf("%d",&Number);
    for(i=1;i<=Number;i++)
	{
		printf("############################\n");
		for(j=1;j<=Number;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		 
	}
	
    return 0;
}
