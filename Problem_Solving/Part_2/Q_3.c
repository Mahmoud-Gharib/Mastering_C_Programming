/*--------------------------------------------*
* Roman numerals are represented by seven     *
* different symbols: I, V, X, L, C, D and M.  *
*   I   =>   1                                *
*   V   =>   5    Given a roman numeral,      *                   
*   X   =>   10   convert it to an integer.   *                      
*   L   =>   50                               *
*   C   =>   100                              *
*   D   =>   500                              *
*   M   =>   1000                             *
*--------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
u32 romanToInt ( u8 *s);

void main(void)
{
	u8 str[100];
    printf("\n Enter the String:\n");
    gets(str);
	u32 Value = romanToInt(str);
	printf("Value = %d\n",Value);
}
u32 roman_to_integer(u8 c)
{
	u32 Value =0;
    switch(c) {
    case 'I':  
    Value = 1;
	break;
    case 'V':  
    Value = 5;
	break;  
    case 'X':  
    Value = 10;
	break;  
    case 'L':  
    Value = 50;
	break;  
    case 'C':  
    Value = 100;
	break;  
    case 'D':  
    Value = 500;
	break;  
    case 'M':  
    Value = 1000;
	break;  
    default:
    Value = 0;
	break;
    }
	return Value;
}

u32 romanToInt (u8 *s)
{
    u32 i, int_num = roman_to_integer(s[0]);

    for (i = 1; s[i] != '\0'; i++) 
	{
        u32 prev_num = roman_to_integer(s[i - 1]);
        u32 cur_num = roman_to_integer(s[i]);
        if (prev_num < cur_num) 
            int_num = int_num - prev_num + (cur_num - prev_num);
		else 
            int_num += cur_num;
    }
    return int_num;
}