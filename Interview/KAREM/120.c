/* C Program to find length of a given string using pointer. */

#include <stdio.h>

void main(void)
{
	char *Ptr = "GHARIB",Counter = 0;
	while( *Ptr != '\0' )
	{
		Counter++;
		Ptr++;
	}
		printf("%d",Counter);
}