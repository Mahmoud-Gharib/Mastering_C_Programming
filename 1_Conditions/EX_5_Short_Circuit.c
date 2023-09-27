/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Short_Circuit
*/
#include "stdio.h"
int main()
{
    int x=1,y=2,z=3;
    /*if((x=4) || (y=5) || (z=6))
		printf("x = %d , y = %d , z = %d\n",x,y,z);
	if((x=4) && (y=5) && (z=6))
		printf("x = %d , y = %d , z = %d\n",x,y,z);
	
	if((x=0) || (y=5) || (z=6))
		printf("x = %d , y = %d , z = %d\n",x,y,z);
	if((x=0) && (y=5) && (z=6))
		printf("x = %d , y = %d , z = %d\n",x,y,z);
	if((x=4) && (y=5) || (z=6))
		printf("x = %d , y = %d , z = %d\n",x,y,z);*/
	if((x=0) && (y=5) || (z=6))
		printf("x = %d , y = %d , z = %d\n",x,y,z);
	
	
    return 0;
}
