/*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1
Bit_Manipulation
*/
#include "stdio.h"
int main()
{
    int x=5,set,clear,get;                 // 0b0000 0101  5
	int Nbit = 1;
	
	set = x | 1 << Nbit ;         // 0b0000 0111  7
	printf("set = %d\n",set);
	
	clear = x & ~(1 << 2) ;         // 0b0000 0001  1
	printf("clear = %d\n",clear);
    
	get = (x>>1) & 1 ;         // zero
	printf("get = %d\n",get);
	
	
    return 0;
}
