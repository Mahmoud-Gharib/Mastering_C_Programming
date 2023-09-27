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
	
    FILE *F_READ;
	
	F_READ = fopen("file.txt","rb");

	while(fread(&Student,sizeof(Student),1,F_READ))
	{
		printf("%d\t%s\t%d\t",Student.ID,Student.NAME,Student.GRADE);
		printf("\n");
	}
	fclose(F_READ);
}

























