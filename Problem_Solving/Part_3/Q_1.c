/*--------------------------------------------*
*  write a C program to swap 2 variables      *
*  without using a third temporary variable.  *
*---------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
void swapVariables(u32* first, u32* second);
void main(void)
{
	u32 Number_1=0,Number_2=0;
	printf("Please enter the Number_1:\n");
	scanf("%d",&Number_1);
	printf("Please enter the Number_2:\n");
	scanf("%d",&Number_2);
	printf("Befor Swap Number_1 =%d Number_2 = %d\n",Number_1,Number_2);
	swapVariables(&Number_1,&Number_2);
	printf("After Swap Number_1 =%d Number_2 = %d\n",Number_1,Number_2);
	
}

void swapVariables(u32* first, u32* second)
{
	*first = *first ^ *second;
	*second  = *first ^ *second;
	*first = *first ^ *second;
}


