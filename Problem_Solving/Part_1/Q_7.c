/*-------------------------------------------------*
*  (Parking Charges) Write a function that         *
*  displays a solid square of any character ex : # *
*  whose side is specified in integer parameter    *
*  side. For example, if side is 5, the function   *
*  displays: #####								   *
*			 #####                                 *
*			 #####                                 *
*			 #####                                 *
*			 #####                                 *
*--------------------------------------------------*/

#include "stdio.h"

void Parking_Charges(int ); 

void main(void)
{
	int Number;
	printf("Please Enter Number :");
	scanf("%d",&Number);
    Parking_Charges(Number);
}
void Parking_Charges(int x)
{
	for(int i = 1;i <= x;i++)
	{
		for(int j = 1;j <= x;j++)
			printf("#");
	 printf("\n");
	}
}