/*  Write C Function that converts the any letter from lowercase to uppercase.*/

#include <stdio.h>

void Func(char Str);
void main(void)
{
	Func('c');	
}
void Func(char Str)
{

	if( Str >= 'a' && Str <= 'z' )
	{
		printf("%c",Str-32);
	}
	else 
	{
		printf("%c",Str);
	}
}