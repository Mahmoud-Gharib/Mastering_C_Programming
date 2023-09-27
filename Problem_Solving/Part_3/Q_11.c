/*---------------------------------------------------------*
*  Write a C function to reverse a sentence                *
*----------------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
#include <string.h>


void main(void)
{
    u8 str[100], reverse[100];
    u32 len, i, index, wordStart, wordEnd;
    printf("Enter any string: ");
    gets(str);
    len  = strlen(str);
    index = 0;
    wordStart = len - 1;
    wordEnd   = len - 1;
    while(wordStart > 0)
    {
        if(str[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];
                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

}




