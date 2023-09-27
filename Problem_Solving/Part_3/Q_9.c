/*--------------------------------------------------*
* Write a C function to convert a hexadecimal       *
* number to decimal                                 *
*--------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
u32 hexToDecimal(u8 * hex);
void main(void)
{
	u8 strHexa[100];
    printf("Enter hexadecimal number: ");
    gets(strHexa);
	printf("%s = %d\n",strHexa,hexToDecimal(strHexa));
}

u32 hexToDecimal(u8 * hex)
{
	u8 i=0,Base=1,Decimal=0;
    while(hex [i] != '\0')
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            Decimal = hex[i] - 48;
            Base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            Decimal = hex[i] - 97 + 10;
            Base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            Decimal = hex[i] - 65 + 10;
            Base *= 16;
        }
		decimal += val * pow(16, len);
        len--;
		i++;
    }
	return Decimal;
}
