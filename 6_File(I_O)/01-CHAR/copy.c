#include <stdio.h>
#include "string.h"
void main(void)
{
    FILE *F_WRITE;
	FILE *F_READ;
	
	F_READ = fopen("file.txt","r");
	F_WRITE = fopen("file1.txt","w");
	
	char x;
	while((x = getc(F_READ)) != EOF)
	{
		putc(x,F_WRITE);
	}
	fclose(F_READ);
	fclose(F_WRITE);
}


























