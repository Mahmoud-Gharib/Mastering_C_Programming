/*-----------------------------------------------------*
* A sentence is a list of words that are separated by  *
* a single space with no leading or trailing spaces.   *
* Each of the words consists of only uppercase and     *
* lowercase English letters (no punctuation).          *
* • For example, "Hello World", "HELLO", and "hello    *
* world hello world" are all sentences.                *
* • You are given a sentence s​​​​​​ and an integer k​​​​​​. You   *
* want to truncate s​​​​​​ such that it contains only the    *
* first k​​​​​​ words. Return s​​​​ ​​ after truncating it.        *
*-----------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"

u8 *truncateSentence(u8 *s, u16 k);

void main(void) 
{
    u8 str[100];
    printf("\n Enter the String:\n");
    gets(str);
    printf("%s \n", truncateSentence(str, 2));

}
u8 *truncateSentence(u8 *s, u16 k)
{	
	u8 i =0, counter = 0;
	while(k > counter)
	{
		if(s[i] == ' ')
		{	
			counter++;
		}
		s[i] = s[i];
		i++;
	}
	s[i] = '\0';
	return s;
}
