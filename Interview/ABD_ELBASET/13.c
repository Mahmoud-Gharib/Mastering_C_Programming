/* Write c function to find a number in a sorted array (try to optimize your code) */

#include<stdio.h>

#define       CODE         2
void Func_Search(int N , int arr[] ,int size);

void main(void)
{
	int array[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
	int size = sizeof(array) / sizeof(array[0]);
	Func_Search( 50 , array , size);
	
}

#if    CODE       ==     1
void Func_Search(int N , int arr[] ,int size)
{
	int flag = 0;
	for(int i = 0 ; i < size ; i++)
	{
		if( arr[i] == N )
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1 )
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	
}
#elif    CODE        ==    2
void Func_Search(int N , int arr[] ,int size)
{
	int flag = 0;
	int Left = 0,Right = size - 1 , Mid = (Left + Right)/2;
	
	while( Left <= Right )
	{
		Mid = (Left + Right)/2;
		if( arr[Mid] == N )
		{
			flag = 1;
			break;
		}
		else if(arr[Mid] < N)
		{
			Left = Mid + 1;
		}
		else
		{
			Right = Mid - 1;
		}
	}
	
	if(flag == 1 )
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	
}

#endif