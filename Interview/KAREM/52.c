/* C function to reverse a string (using iteration and recursion). */
#include <stdio.h>
#include <string.h>

void Reverse_String(char *Ptr);

void main(void)
{
  char array[] = "GHARIB";	
  Reverse_String(array);
  printf("%s",array);
	
}

void Reverse_String(char *Ptr)
{
	int size = strlen(Ptr);
	for( int i = 0 , j = size - 1 ; i < size/2 ; i++, j--)
	{
		 *(Ptr + i) = *(Ptr + i) ^ *(Ptr + j);
		 *(Ptr + j) = *(Ptr + i) ^ *(Ptr + j);
		 *(Ptr + i) = *(Ptr + i) ^ *(Ptr + j);
	}
}