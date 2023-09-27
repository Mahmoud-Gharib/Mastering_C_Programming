/*----------------------------------------------*
* Write a C function that counts the number of  *
* 1`s in an unsigned 32-bit number.             *
* Example :                                     *
* 0x89F00123                                    *
* will be :                                     *
* 1000 1001 1111 0000 0000 0001 0010 0011       *
* => 11 ones                                    *
*-----------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
u32 countOnes(u32 n);

void main(void)
{

    u32 Number;
    printf(" Enter the Number:");
    scanf("%d",&Number);
	printf("the Number of Ones = %d\n",countOnes(Number));
}
u32 countOnes(u32 n)
{	
	int i,j=1,B=0,counter=0;
	while(n != 0)
	{
		i = n % 2;
		if(i==1)
			counter++;
		B = B +(i*j);
		n = n / 2;
		j = j * 10;
	}
	return counter;
}



