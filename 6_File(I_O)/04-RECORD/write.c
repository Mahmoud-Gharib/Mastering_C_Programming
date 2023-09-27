#include <stdio.h>
#include "string.h"
void main(void)
{
	struct
	{
		int ID;
		char NAME[20];
		int GRADE;
	}Student;
	
    FILE *F_WRITE;
	F_WRITE = fopen("file.txt","wb");
	char ANS;
	
	do
	{
		printf("ID :");
		scanf("%d",&Student.ID);
		printf("NAME :");
		fflush(stdin);
		gets(Student.NAME);
		printf("GRADE :");
		scanf("%d",&Student.GRADE);
		
		fwrite(&Student,sizeof(Student),1,F_WRITE);
		printf("Do You Want Anthor Student [Y/N] ?\n");
		
	}while((ANS = getche()) == 'Y');
	
	fclose(F_WRITE);
	
	
}


























