/*----------------------------------------------*
*    Given a sentence, print each word of the 	*
*    sentence in a new line                     *
*-----------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
void sentence_line(u8 s[]);
void main(void)
{
	
   u8 str[100];
   printf("Please Enter the sentence :\n");
   gets(str);
   sentence_line(str);
}
	

void sentence_line(u8 s[])
{
	u32 i;
	for(i=0; s[i] != '\0'; i++)
   {
      printf("%c", s[i]);

      if(s[i]==' ')
      {
         printf("\n");
      }
   }
}
