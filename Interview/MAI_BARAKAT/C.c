/* Swap 2 Array  Reverse Array After Swap */
#include <stdio.h>
void Swap( int array1[] , int array2[] , int Size);
void Reverse(int Arr[] , int Size);
void main(void)
{
	int arr1[] = { 1, 2, 3, 4, 5};
	int arr2[] = { 10, 20, 30, 40, 50};
	int size = sizeof(arr1)/sizeof(arr1[0]);
	Swap( arr1 , arr2 , size);
	Reverse(arr1,size);
	Reverse(arr2,size);
	printf("Arr1 Element\n");
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d ==> ",arr1[i]);
	}
	printf("\nArr2 Element\n");
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d ==> ",arr2[i]);
	}
}

void Swap( int array1[] , int array2[] , int Size)
{
	for(int i = 0 ; i < Size ; i++)
	{
		array1[i] = array1[i] ^ array2[i];
		array2[i] = array1[i] ^ array2[i];
		array1[i] = array1[i] ^ array2[i];
	}
}

void Reverse(int Arr[] , int Size)
{
	for(int i = 0 , j = Size - 1 ;  i < (Size/2) ;  i++ , j--)
	{
		Arr[i] = Arr[i] ^ Arr[j];
		Arr[j] = Arr[i] ^ Arr[j];
		Arr[i] = Arr[i] ^ Arr[j];	
	}
}