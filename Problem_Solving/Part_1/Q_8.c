/*----------------------------------------------------------------------*
*  (Temperature Conversions) Implement the following integer 			*
*  functions:                                                           *
*  a) Function celsius returns the Celsius equivalent of a Fahrenheit   *
*  temperature.                                                         *
*  b) Function fahrenheit returns the Fahrenheit equivalent of a        *
*  Celsius temperature.                                                 *
*  c) Use these functions to write a program that prints charts         *
*  showing the Fahrenheit equivalents of all Celsius temperatures       *
*  from 0 to 100 degrees, and the Celsius equivalents of all            *
*  Fahrenheit temperatures from 32 to 212 degrees. Print the            *
*  outputs in a neat tabular format that minimizes the number of        *
*  lines of output while remaining readable.                            *
*-----------------------------------------------------------------------*/

#include "stdio.h"

float Celsius(int );
float Fahrenheit(int );

void main(void)
{
	int i;
	printf("   Degree   Degree(C)\n");
	for(i=0;i<=100;i++)
	{
		printf("	%d    %f\n",i,Fahrenheit(i));
	}
	
	printf("   Degree   Degree(F)\n");
	for(i=32;i<=212;i++)
	{
		printf("	%d    %f\n",i,Celsius(i));
	}

}
float Celsius(int f)
{
	return (f - 32) / 1.8;
}
float Fahrenheit(int c)
{
	return (c * 1.8) + 32;
}