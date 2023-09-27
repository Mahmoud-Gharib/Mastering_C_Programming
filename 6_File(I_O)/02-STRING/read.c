#include <stdio.h>
#include "string.h"
void main(void)
{
    FILE *F_READ;
	
	F_READ = fopen("file.c","r");
	char x[100] ;
	while(fgets(x,100,F_READ) != NULL)
	{
		printf("%s",x);
	}
	fclose(F_READ);
	
	
}

























