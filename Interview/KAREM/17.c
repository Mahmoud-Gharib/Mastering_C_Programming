/* C function to Check if string mirror or not. */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool  Check_Mirror(char *Ptr);

void main(void)
{
  char array[] = "ddzaiazdd";	
 if( Check_Mirror(array) == true)
 {
	printf("YES");
 }
 else
 {
	printf("NO");
 }
	
}

bool  Check_Mirror(char *Ptr)
{
	int size = strlen(Ptr);
	
	for( int i = 0 , j = size - 1 ; i < size/2 ; i++, j--)
	{
		if( *(Ptr + i) != *(Ptr + j) )
		{
			return false;
		}
	}
	return true;
}