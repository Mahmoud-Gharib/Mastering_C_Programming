#include <stdio.h>
#include "string.h"
void main(void)
{
    FILE *F_READ;
	
	F_READ = fopen("file.txt","r");
	char x ;
	while((x = getc(F_READ)) != EOF)
	{
		putchar(x);
	}
	fclose(F_READ);
	
	
}

























