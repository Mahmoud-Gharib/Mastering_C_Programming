/* Write a function to reverse a string by passing it to a function. */

#include <stdio.h>

void Func_Reverse(char *Ptr );
void main(void)
{
	char arr[] = "GHARIB";
	Func_Reverse(arr);
	printf("%s",arr);    ////
}
void Func_Reverse(char *Ptr )
{
	int length = strlen(Ptr);
	for(int i = 0 , j = length - 1 ; i < length/2 ; i++,j--)
	{
		*(Ptr+i) = *(Ptr+i) ^ *(Ptr+j);
		*(Ptr+j) = *(Ptr+i) ^ *(Ptr+j);
		*(Ptr+i) = *(Ptr+i) ^ *(Ptr+j);
	}
}