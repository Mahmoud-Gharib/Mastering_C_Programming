/* C Code to swap 4 bits with the other 4 bits in a Byte */
#include <stdio.h>

void main(void)
{
	unsigned char   Number = 5;         //            0000 0101  ==>  0101 0000
	unsigned char   x = 0;
	
	//x = x | (Number << 4);
	//x = x | (Number >> 4);
	x =  (Number & 0x0f ) << 4 | (Number & 0xf0 ) >> 4;
	printf("%d" ,x);
	
}