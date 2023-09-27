/* Write c function to check Whether the Number base is 2 or not (numbers
    like1,2,4,8,16,32) try it in 4 different ways.*/


#include <stdio.h>
#include <math.h>

void Func_Base_2(float Number);

void main(void)
{
  Func_Base_2(12) ;	
}
void Func_Base_2(float Number)
{
	if( fmod ((Number / 2.0) , 2.0) == 0 )
	{
		printf("Number base is 2 ");
	}
	else
	{
		printf("Number base is Not 2 ");
	}
}