/* Swap C Code. */
#include <stdio.h>
void Func_Swap(int arr1[] ,int arr2[] , int size);

void main(void)
{
	int array1[] = {1,2,3,4,5};
	int array2[] = {10,20,30,40,50};
	int size = sizeof(array1)/sizeof(array1[0]);
	Func_Swap(array1,array2 , size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d >> ", array1[i]);
	}
	printf("\n");
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d >> ", array2[i]);
	}
}

void Func_Swap(int arr1[] ,int arr2[] , int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];
	}
	
	for(int i = 0, j = size - 1 ; i < size/2 ; i++ , j--)
	{
		arr1[i] = arr1[i] ^ arr1[j];
		arr1[j] = arr1[i] ^ arr1[j];
		arr1[i] = arr1[i] ^ arr1[j];
		
		arr2[i] = arr2[i] ^ arr2[j];
		arr2[j] = arr2[i] ^ arr2[j];
		arr2[i] = arr2[i] ^ arr2[j];
	}
}
