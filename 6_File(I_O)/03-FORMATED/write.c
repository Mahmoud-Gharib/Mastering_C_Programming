#include <stdio.h>
#include "string.h"
void main(void)
{
	
	
    FILE *F_WRITE;
	F_WRITE = fopen("file.txt","wb");
	int ID;
	int counter = 0;
	do
	{
		printf("ID :");
		scanf("%d",&ID);
		fwrite(&ID,sizeof(ID),1,F_WRITE);
		counter++;	
	}while(counter < 2);
	
	fclose(F_WRITE);
	
	
}


























