/*  Write a C Function that takes one character and checks if it alphabet or not*/

#include <stdio.h>

void Func(char Str);
void main(void)
{
	Func(48);	
}
void Func(char Str)
{
	
		if( Str >= 65 && Str <= 90 || Str >= 97 && Str <= 122)
		{
			printf("Yes");
		}
		else 
		{
			printf("No");
		}
}