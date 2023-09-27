/*----------------------------------------------------*
* (Perfect Numbers) An integer number is said to be a *
* perfect number if its factors, including 1 (but not *
* the number itself), sum to the number. For          *
* example, 6 is a perfect number because 6 = 1 + 2 +  *
* 3. Write a function perfect that determines if      *
* parameter number is a perfect number.               *
* Use this function in a program that determines and  *
* prints all the perfect numbers between 1 and 1000.  *
* Print the factors of each perfect number to confirm *
* that the number is indeed perfect.                  *
*-----------------------------------------------------*/

#include "stdio.h"

int Perfect(int );

void main(void)
{
	int PF =0;
	printf("(Perfect Numbers):\n");
	for(int i =1 ; i<=1000;i++)
	{
		PF = Perfect(i);
		if(PF > 0)
			printf("%d\n",PF);
	}
}
int Perfect(int x)
{
	int sum = 0;
	for(int i=1;i<x;i++)
	{
		if(x % i == 0)
			sum += i;
	}
	if(sum == x)
		return x;
	else 
		return 0;
}