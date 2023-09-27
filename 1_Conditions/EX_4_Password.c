/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Password
*/
#include "stdio.h"
int main()
{
    int Password;
    printf("Please enter the Number\n");
    scanf("%d",&Password);
    if(Password == 1234)                  //Password = 1234   logic error
		printf("True\n");
	else
	 	printf("False\n");
	
    return 0;
}
