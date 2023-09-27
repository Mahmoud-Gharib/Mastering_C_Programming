/* Write c function to take an array and reverse its elements. */

#include<stdio.h>

typedef unsigned char    u8 ;

void Func_Reverse(u8 arr[] ,u8 size);


void main(void)
{
	u8 array[] = { 10 , 2 , 30 , 44 , 5 , 60 , 7 , 80 , 9 };
	int size = sizeof(array) / sizeof(array[0]);
	Func_Reverse(array , size);
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d ," ,array[i]);
	}

}

void Func_Reverse(u8 arr[] ,u8 size)
{
	for(int i = 0 ,j = size - 1 ; i < size/2 ; i++ , j--)
	{
		arr[i] = arr[i] ^ arr[j];
		arr[j] = arr[i] ^ arr[j];
		arr[i] = arr[i] ^ arr[j];
	}
}
