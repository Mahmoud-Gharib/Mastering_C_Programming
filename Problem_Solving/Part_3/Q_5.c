/*-----------------------------------------------------*
* Given an integer n, return true if it is a power of  *
* two. Otherwise, return false.                        *
* An integer n is a power of two, if there exists an   *
* integer x such that n == 2x.                         *
* Note :                                               *
*           (-2^ 31 <= n <= 2^31 – 1)                  *
*------------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
#include <stdbool.h>
bool isPowerOfTwo(u32 n);
void main(void)
{
	
   u32 Number;
   printf("Please enter the Number:\n");
   scanf("%d",&Number);
   if(isPowerOfTwo(Number))
	  printf("true");
   else
	  printf("false"); 
}
	

bool isPowerOfTwo(u32 n)
{
	if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
