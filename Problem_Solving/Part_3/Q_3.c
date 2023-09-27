/*------------------------------------------------------------------------------------*
* Louise joined a social networking site to stay in touch with her friends. The       *
* signup page required her to input a name and a password. However, the               *
* password must be strong. The website considers a password to be strong if it        *
* satisfies the following criteria:                                                   *
* • Its length is at least 6 digits.                                                  *
* • It contains at least one digit.                                                   *
* • It contains at least one lowercase English character.                             *
* • It contains at least one uppercase English character.                             *
* • It contains at least one special character. The special characters are:           *
* !@#$%^&*()-+                                                                        *
* She typed a random string of length in the password field but wasn't sure if it     *
* was strong. Given the string she typed, can you find the minimum number of          *
* characters she must add to make her password strong?                                *
* Note: Here's the set of types of characters in a form you can paste in your         *
* solution:                                                                           *
* numbers = "0123456789“                                                              *
* lower_case = "abcdefghijklmnopqrstuvwxyz“                                           *
* upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"                                           *
* special_characters = "!@#$%^&*()-+"                                                 *
*------------------------------------------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
#include <string.h>
u32 minimumNumber(u32 n, u8* password);

void main(void)
{

    u8 *str[100];
    printf(" Enter Your Password :");
    gets(str);
	u32 x = minimumNumber(strlen(str),&str);
	if(x == 1)
		printf("Strong");
	else if(x == 0) 
		printf("Weak");
}
u32 minimumNumber(u32 n, u8* password)
{	
	u32 i,flag1=0,flag2=0,flag3=0,flag4=0,Stength=0;
	for(i=0;password[i] < n;i++)
    {
        if('a'<=password[i] && password[i]<='z')
        {
			flag1 = 1;
        }
        else if('A'<=password[i] && password[i]<='Z')
        {
			flag2 = 1;
        }
		else if('1'<=password[i] && password[i]<='9')
        {
			flag3 = 1;
        }
		else if(password[i] == '!' || password[i] =='@' || password[i] =='#' || password[i] =='$'|| password[i] =='%' || password[i] =='^' ||password[i] == '&' || password[i] =='*'|| password[i] =='+' )
        {
			flag4 = 1;
        }
    }
	Stength = flag1 + flag2 + flag3 + flag4;
	if(Stength ==4 || Stength ==3)
		return 1;
	else if(Stength < 3)
		return 0;
   
}



