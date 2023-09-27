/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
*/
#include "stdio.h"
int main()
{
    int Number ,i,j,counter = 1;
    printf("Please enter the Number\n");
    scanf("%d",&Number);
    for(i=1 ; i <= Number ; i++)
	{
		for(j=1 ; j <= i ; j++)
		{
			printf("%d ",counter);
			counter++;
		}
	 printf("\n");
	}
    return 0;
}
