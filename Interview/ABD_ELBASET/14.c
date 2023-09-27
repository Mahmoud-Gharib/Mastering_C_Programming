/* C function to return the maximum and minimum number in an array and there 
index (try 3 different way to return more than one variable from function) */

#include<stdio.h>

#define       CODE         1
void Func_Max_Min(int arr[] ,int size ,int *Max , int *Min );

void main(void)
{
	int Max,Min;
	int *PMax = &Max, *PMin = &Min;
	int array[] = { 10 , 2 , 30 , 44 , 5 , 60 , 7 , 80 , 9 };
	int size = sizeof(array) / sizeof(array[0]);
	Func_Max_Min(array , size , PMax ,PMin );
	printf("Max = %d   Min = %d " ,Max , Min );
}

#if    CODE       ==     1
void Func_Max_Min(int arr[] ,int size ,int *Max , int *Min  )
{
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < (size - i) ; j++)
		{
			if(arr[j] > arr[j+1])
			{
			  arr[j] = arr[j] ^ arr[j+1];
			  arr[j+1] = arr[j] ^ arr[j+1];
			  arr[j] = arr[j] ^ arr[j+1];
			}
		}
	}
	*Max = arr[size - 1];
	*Min = arr[0];
}
#elif    CODE        ==    2

#endif