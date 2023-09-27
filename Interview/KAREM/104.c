/*  Write a C program to take a number and a character from user if the number is even print the 
same character, if the number is odd print the other case of the character (a->A, B->b).*/

#include <stdio.h>

void Func(int Num , char Str);
void main(void)
{
	Func(7,'z');	
}
void Func(int Num , char Str)
{
	if(Num % 2 == 0)
	{
		if( Str >= 65 && Str <= 90 )
		{
			printf("%c",Str);
		}
		else if ( Str >= 97 && Str <= 122)
		{
			printf("%c",Str);
		}
	}
	else
	{
		if( Str >= 65 && Str <= 90 )
		{
			printf("%c",Str+32);
		}
		else if ( Str >= 97 && Str <= 122)
		{
			printf("%c",Str-32);
		}
	}
}