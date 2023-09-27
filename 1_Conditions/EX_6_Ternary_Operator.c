/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Ternary_Operator
*/
#include "stdio.h"
int main()
{
    int x=7,y=8,z=11 ,min,max;
	min = (x<y)? x:y;
	printf("min = %d\n",min);
	
	max = (x>y && x>z )?x:(z>y && z>x)?z:y;;
	printf("max = %d\n",max);
	
    
	
	
    return 0;
}
