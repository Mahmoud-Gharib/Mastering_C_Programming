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
	int REC_NO,offset;
	
	F_READ = fopen("file.txt","rb");

	scanf("%d",&REC_NO);
	offset = (REC_NO - 1) *sizeof(Student);
	if(fseek(F_READ,offset,0) == 0)
	{
		fread(&Student,sizeof(Student),1,F_READ);
		printf("%d\t%s\t%d\t",Student.ID,Student.NAME,Student.GRADE);
	}
	
	fclose(F_READ);
}

























