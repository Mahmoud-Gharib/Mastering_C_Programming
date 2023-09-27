/*--------------------------------------------------*
* Given two non-negative integers low and high. 	*
* Return the count of odd numbers between low       *
* and high (inclusive).                             *
* (0 <= low <= high <= 10^9)                        *
*--------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
u32 countOdds(u32 low, u32 high);
void main(void)
{
   u32 Number_1,Number_2;
   printf("Please enter the Number:\n");
   scanf("%d  %d",&Number_1,&Number_2);
   printf("OutPut = %d\n",countOdds(Number_1,Number_2));
	
}

u32 countOdds(u32 low, u32 high)
{
	u32 x = (high - low) / 2;
 
    if (high % 2 != 0 || high % 2 != 0)
        x += 1;
 
    return x;
}
