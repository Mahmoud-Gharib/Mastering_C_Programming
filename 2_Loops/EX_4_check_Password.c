/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
_check_Password
*/
#include "stdio.h"
int main()
{
    int password;
	printf("Please enter the password :\n");
	scanf("%d",&password);
    while(password != 1234)
	{
	printf("Wrong Password :\n");
	scanf("%d",&password);	
	}
	printf("Correct Password\n");
    return 0;
}
