/* Write a function to concatenate two strings */

#include <stdio.h>

char* Func_Concatenate(char arr1[] , char arr2[] );
void main(void)
{
	char array1[] = "MAHMOUD ";
	char array2[] = "GHARIB";
	char *Ptr = Func_Concatenate(array1 , array2 );
	printf("%s",Ptr);    ////
}
char* Func_Concatenate(char arr1[] , char arr2[] )
{
	static char arr[30];
	int i = 0,j= 0;
	while(arr1[i] != '\0')
	{
		arr[i] = arr1[i];
		i++;
	}
	while(arr2[j] != '\0')
	{
		arr[i+j] = arr2[j];
		j++;
	}
	
	return arr;
}