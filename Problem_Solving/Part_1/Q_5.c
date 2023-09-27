/*------------------------------------------------------*
*  (Table of Decimal, Binary, Octal and 				*
*  Hexadecimal Equivalents) Write a program that        *
*  prints a table of the binary, octal and              *
*  hexadecimal equivalents of the decimal               *
*  numbers in the range 1 through 255                   *
*------------------------------------------------------*/

#include "stdio.h"
int Decimal_To_Binary(int x);
void main(void)
{
   int i;
   
   printf("\tDec\tHex\tOct\tBin\n");
   for (i = 1; i <=255; i++)
     printf("\t%d  \t%x   \t%o   \t%d\n",i, i, i,Decimal_To_Binary(i));
}

int Decimal_To_Binary(int x)
{
	int i ,j=1,B=0;
	while(x != 0)
	{
		i = x % 2;
		B = B +(i*j);
		x = x / 2;
		j = j * 10;
	}
	return B;
}