/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Grade of Student
*/
#include "stdio.h"
int main()
{
    int Grade;
    printf("Please enter the Grade\n");
    scanf("%d",&Grade);
    if(Grade >=0 && Grade <=49)
		printf("Failed\n");
	else if(Grade >=50 && Grade <=64)
	 	printf("Accepted\n");
	else if(Grade >=65 && Grade <=74)
	 	printf("Good\n");
	else if(Grade >=75 && Grade <=84)
	 	printf("Very Good\n");
	else if(Grade >=85 && Grade <=100)
	 	printf("Excellent\n");
	else if(Grade < 0 || Grade >100)
	 	printf("Not Valid\n");
	
    return 0;
}
