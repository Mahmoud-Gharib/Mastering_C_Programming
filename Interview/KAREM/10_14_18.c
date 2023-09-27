/* Swap 2 Variables */
#include <stdio.h>

#define CODE       3

void Func_Swap(int *PNumber1 , int *PNumber2);

void main(void)
{
	int a = 5 , b = 6;
	Func_Swap(&a,&b);
	printf(" a = %d , b = %d ", a , b );
	
}
void Func_Swap(int *PNumber1 , int *PNumber2)
{
	#if    CODE   == 1
	int Temp = 0;
	Temp      = *PNumber1;
	*PNumber1 = *PNumber2 ;
	*PNumber2 = Temp;
	#elif  CODE   == 2
	*PNumber1 = *PNumber1 + *PNumber2 ;
	*PNumber2 = *PNumber1 - *PNumber2 ;
	*PNumber1 = *PNumber1 - *PNumber2 ;
	#elif  CODE   == 3
	*PNumber1 = *PNumber1 ^ *PNumber2 ;
	*PNumber2 = *PNumber1 ^ *PNumber2 ;
	*PNumber1 = *PNumber1 ^ *PNumber2 ;
	#endif
}