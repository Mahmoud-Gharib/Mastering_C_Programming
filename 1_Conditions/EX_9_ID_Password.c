/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
ID_Password
*/
#include "stdio.h"
int main()
{
    int id,password;
	                 
	printf("Please enter id\n");
    scanf("%d",&id);

	switch(id)
	{
		case 1234:
		printf("Please enter password\n");
		scanf("%d",&password);
		switch(password)
		{
			case 20:
			printf("Welcome Ahmed\n");
			break;
			default:
			printf("Wrong Password\n");
			break;
		}
		break;
		
		case 4567:
		printf("Please enter password\n");
		scanf("%d",&password);
		switch(password)
		{
			case 30:
			printf("Welcome Sara\n");
			break;
			default:
			printf("Wrong Password\n");
			break;
		}
		break;
		
		default: 
		printf("Wrong ID\n");
		break;
	}

	
    return 0;
}
