/* Sorting C Code. */
#include <stdio.h>
//void Func_Sorting(int arr[] , int size);
void Func_Sorting(int *Ptr , int size);
void main(void)
{
	int array[] = {1,0,3,2,9,6,4,7,5,8};
	int size = sizeof(array)/sizeof(array[0]);
	Func_Sorting(array , size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d >> ", array[i]);
	}
}
/*
void Func_Sorting(int arr[] , int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < (size - i - 1) ; j++)   ////////////// LOOK ////////////////
		{
			if( arr[j] < arr[j+1] )
			{
				arr[j]   = arr[j] ^ arr[j+1];
				arr[j+1] = arr[j] ^ arr[j+1];
				arr[j]   = arr[j] ^ arr[j+1];
			}
		}
	}
}
*/
void Func_Sorting(int *Ptr , int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < (size - i - 1) ; j++)   ////////////// LOOK ////////////////
		{
			if( *(Ptr + j) > *(Ptr + j + 1) )
			{
				*(Ptr + j)     = *(Ptr + j) ^ *(Ptr + j + 1);
				*(Ptr + j + 1) = *(Ptr + j) ^ *(Ptr + j + 1);
				*(Ptr + j)     = *(Ptr + j) ^ *(Ptr + j + 1);
			}
		}
	}
}