/* Write c function to take an integer number and calculate its square root. */

#include <stdio.h>
#define     CODE           2
double Func_Square(int Number);

void main(void)
{
	printf("%f",Func_Square(16));
}

double Func_Square(int Number)
{
	#if CODE      ==   1
	for(int i = 1 ; i < Number ; i++)
	{
		if( (i*i) == Number )
		{
			return i;
		}
	}
	#elif CODE      ==   2
	double root = Number/2;
	double x = 0;
	while(root != x)
	{
		x = root;
		root = (Number/x + x)/2;
	}
	return root;
	#endif
}