/*  Write a C function that return the count of the longest consecutive occurrence of any number, 
and return the number Array= {1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5, number -> 4*/

#include <stdio.h>

int Func_Consecutive(int arr[] , int size );
void main(void)
{
	int Array[]= {1,2,2,3,3,3,3,4,4,4,4,4,4,3,3,3,5,5,5,5,5,5,5};
	int size = sizeof(Array)/sizeof(Array[0]);
	printf("%d",Func_Consecutive( Array , size));
		
}
int Func_Consecutive(int arr[] , int size )
{
	int count = 0,max_count = 0,max_value = arr[0],current_value = arr[0];
	for(int i = 0; i < size ; i++)
	{
		if(current_value == arr[i] )
		{
			count++;
		}
		else
		{
			if(max_count < count)
			{
				max_count = count;
				max_value = current_value;
			}
			count = -1;
			current_value = arr[i];
		}
	}
	if(max_count < count)
	{
		max_count = count;
		max_value = current_value;
	}
	return max_value;
}