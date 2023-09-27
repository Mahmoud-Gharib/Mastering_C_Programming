/* Draw

	*
	**
	***
	****
	*****
	
	*****
	****
	***
	**
	*
	
	*
   ***
  *****
 *******

 *****
 *****
 *****
 *****
 *****

*/
#include <stdio.h>
void main(void)
{
	int size ;
	scanf("%d",&size);
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < (size - i) ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

	for(int i = 1 ; i <= size ; i++)
	{
		for(int j = 1 ; j <= (size - i) ; j++)
		{
          printf(" ");
		}
		for(int k = 1 ; k <= (2*i -1) ; k++)
		{
          printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int i = 0 ; i < size ; i++)
	{
		for(int j = 0 ; j < (size) ; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
