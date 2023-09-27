/*------------------------------------------------------------------------*
* • Given a binary string s, return true if the longest                   *
* contiguous segment of 1's is strictly longer than                       *
* the longest contiguous segment of 0's in s, or                          *
* return false otherwise. • For example, in s = "110100010" the longest   *
* continuous segment of 1s has length 2, and the                          *
* longest continuous segment of 0s has length 3.                          *
* • Note that if there are no 0's, then the longest                       *
* continuous segment of 0's is considered to have a                       *
* length 0. The same applies if there is no 1's.                          *
*-------------------------------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
#include <stdbool.h>

bool checkZeroOnes(u8 *s);

void main(void)
{

    u8 str[100];
    printf("\n Enter the String:\n");
    gets(str);
	if(checkZeroOnes(str) == true)
		printf("true");
	else
		printf("false");
}
bool checkZeroOnes(u8 *s)
{	
	u8 i =0, counter_1 = 0,counter_0 = 0,Result_1 = 0,Result_0 = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '0')
		{	
			counter_1 = 0;
		}
		else if(s[i] == '1')
		{
			counter_1++;
			if(Result_1 > counter_1)
		    Result_1 = Result_1;
			else
			Result_1 = counter_1;
		}
		i++;
	}
	i=0;
	while(s[i] != '\0')
	{
		if(s[i] == '0')
		{	
			counter_0++;
			if(Result_0 > counter_0)
		    Result_0 = Result_0;
			else
			Result_0 = counter_0;
		}
		else if(s[i] == '1')
		{
			counter_0 = 0;	
		}
		i++;
	}
	if(Result_1>Result_0)
		return true;
	else
		return false;
}
