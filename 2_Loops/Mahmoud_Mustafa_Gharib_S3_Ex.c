/*
Date   : 3/1/2022
Author :mahmoud mustafa gharib
Version: v1
*/
#include "stdio.h"
int main()
{
    int Number_1,Number_2,i,j,counter=0; 
    printf("Please enter the Number_1\n");
    scanf("%d",&Number_1);
	printf("Please enter the Number_2\n");
    scanf("%d",&Number_2);
	
	for(i=Number_1;i<=Number_2;i++)
	{
		counter=0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
				counter++;
		}
		if(counter == 2)
			printf("%d\n",i);
	}
	
    return 0;
}
