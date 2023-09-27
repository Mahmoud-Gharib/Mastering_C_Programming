/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Character_Or_Not
*/
#include "stdio.h"
int main()
{
    char x;
	                 
	printf("Please enter character\n");
    scanf("%c",&x);

	switch(x)
	{
		case 'A'...'Z':
		printf("alphabet");
		break;
		case 'a'...'z':
		printf("alphabet");
		break;
		default: 
		printf("Not alphabet");
		break;
	}

	
    return 0;
}
