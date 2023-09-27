#include <stdio.h>
#include "string.h"
void main(void)
{
	
    FILE *F_READ;
	F_READ = fopen("file.txt","rb");
	int ID;
	
	while(fread(&ID,sizeof(ID),1,F_READ))
	{
		printf("%d",ID);
		printf("\n");
	}
	fclose(F_READ);
}

























