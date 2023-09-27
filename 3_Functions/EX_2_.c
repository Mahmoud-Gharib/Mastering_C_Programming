 /*
Date   : 4/1/2022
Author :mahmoud mustafa gharib
Version: v1

*/
#include "stdio.h"
long long int  CalcFact(int x);
void main()
{
    int Number;
	printf("Please enter the Number:\n");
	scanf("%d",&Number);
	long long int res = CalcFact(Number);
    printf("%lld\n",res);
}
long long int CalcFact(int x)
{
	if(x == 1)
		return 1;
	else if(x < 0)
		printf("Not Valid\n");
	else 
		return x *CalcFact(x-1);
}