/* Write c function to take 2 arrays and return an array by merging them like this
( arr1={1,2,3,4,5},arr2={11,12,13,14,15} return arr3={1,11,2,12,3,13,4,14,5,15} ) */

#include<stdio.h>

typedef unsigned char    u8 ;

void Func_Merge(u8 arr1[] , u8 arr2[] ,u8 size);

u8 array3[100];

void main(void)
{
    u8 array1[] = { 1 , 2 , 3 , 4 , 5 };
	u8 array2[] = { 11 , 12 , 13 , 14 , 15 };
	
    int size = sizeof(array1) / sizeof(array1[0]);
	
    Func_Merge(array1 ,array2 , size);
	
    for(int i = 0 ; i < size*2 ; i++)
    {
        printf("%d ," ,array3[i]);
    }

}

void Func_Merge(u8 arr1[] , u8 arr2[] ,u8 size)
{
    for(int i = 0 ; i < size*2 ; i + 2)
    {
        array3[i]   = arr1[i];
		array3[i+1] = arr2[i];
    } 
}