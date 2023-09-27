/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Sum Of Numbers
*/
#include "stdio.h"
int main()
{
    int n,i,Number,sum=0,avg=0;
	printf("Please enter the Numbers of Numbers:\n");
	scanf("%d",&n);
    printf("Please enter the Numbers\n");
    for(i=0;i<n;i++)
	{
	  scanf("%d",&Number);
	  sum +=Number;
	}
	avg= sum/n;
	printf("sum = %d\n",sum);
	printf("avg = %d\n",avg);
    return 0;
}
