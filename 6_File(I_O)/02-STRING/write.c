#include <stdio.h>
#include "string.h"
void main(void)
{
    FILE *F_WRITE;
	
	F_WRITE = fopen("file.c","w");
	char x[100] ;
	while(strlen(gets(x)) > 0)
	{
		fputs(x,F_WRITE);
		fputs("\n",F_WRITE);
	}
	fclose(F_WRITE);
	
	
}


























