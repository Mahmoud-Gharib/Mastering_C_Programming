/*  Write c function to take 2 arrays and swap them */

#include<stdio.h>

typedef unsigned char    u8 ;

void Func_Swap(u8 arr1[] ,u8 arr2[],u8 size);


void main(void)
{
	u8 array1[] = { 10 , 2 , 30 , 44 , 5 , 60 , 7 , 80 , 9 };
	u8 array2[] = { 1 , 20 , 3 , 4 , 50 , 6 , 70 , 8 , 90 };
	int size = sizeof(array1) / sizeof(array1[0]);
	Func_Swap(array1 ,array2 , size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d ," ,array1[i]);
	}
	printf("\n");
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d ," ,array2[i]);
	}
	printf("\n");

}

void Func_Swap(u8 arr1[] ,u8 arr2[],u8 size)
{
	for(int i = 0 ; i < size ; i++ )
	{
		arr1[i] = arr1[i] ^ arr2[i];
		arr2[i] = arr1[i] ^ arr2[i];
		arr1[i] = arr1[i] ^ arr2[i];
	}
}
