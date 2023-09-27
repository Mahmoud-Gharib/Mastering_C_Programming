/*-------------------------------------------------*
* Given a binary array nums, return the            *
* maximum number of consecutive 1's in the         *
* array.                                           *
*-------------------------------------------------*/

#include "stdio.h"
int maximum_consecutive(char arr[],int x);
void main(void)
{
	char array[14] = {0,1,1,1,0,1,0,1,1,0,1,1,0,1};
	int max = maximum_consecutive(array,14);
	printf("%d",max);
}
int maximum_consecutive(char arr[],int x)
{
	int count =0,Result=0;
	for(int i=0;i<x;i++)
	{
		if(arr[i] == 0)
			count = 0;
		else if(arr[i] == 1)
		{
		   count++;
		  if(Result > count)
		    Result = Result;
		  else
			Result = count;	
		}		
	}
	return Result;
}