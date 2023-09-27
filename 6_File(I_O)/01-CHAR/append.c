#include <stdio.h>
#include "string.h"
void main(void)
{
    FILE *F_WRITE;
	
	F_WRITE = fopen("file.txt","a");
	char x ;
	while((x = getche()) != '\r')
	{
		putc(x,F_WRITE);
	}
	fclose(F_WRITE);
	
	
}


























