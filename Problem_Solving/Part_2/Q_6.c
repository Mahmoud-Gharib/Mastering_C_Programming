/*-------------------------------------------------*
* • A pangram is a sentence where every letter of  *
* the English alphabet appears at least once.      *
* • Given a string sentence containing only        *
* lowercase English letters, return true if        *
* sentence is a pangram, or false otherwise.       *
*--------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
#include<conio.h>
#include <stdbool.h>

bool checkIfPangram(u8 * sentence);
void main(void)
{
    u8 s[100];
    printf("\n Enter the String:\n");
    gets(s);
    if(checkIfPangram(s) == true)
        printf("true");
    else
        printf("false");

}

bool checkIfPangram(u8 * sentence)
{
	u32 i,used[26]={0},total=0;
	for(i=0;sentence[i]!='\0';i++)
    {
        if('a'<=sentence[i] && sentence[i]<='z')
        {
            total+=!used[sentence[i]-'a'];
            used[sentence[i]-'a']=1;
        }
        else if('A'<=sentence[i] && sentence[i]<='Z')
        {
            total+=!used[sentence[i]-'A'];
            used[sentence[i]-'A']=1;
        }
    }
     if(total==26)
		 return true; 
	 else 
		 return false;
}

