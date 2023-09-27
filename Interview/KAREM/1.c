/* 
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
	
	
	*****
	*****
	*****
	*****
	*****
	
     *
    ***
   *****
  *******
 *********
***********


***********
 *********
  *******
   *****
    ***
     *

 */
#include <stdio.h>

void main(void)
{
	int Number;
	printf("Enter : ");
	scanf("%d",&Number);
	
	for(int i = 0 ; i < Number ; i++)
	{
		for(int j = 0 ; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 0 ; i < Number ; i++)
	{
		for(int j = 0 ; j < (Number - i ) ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 0 ; i < Number ; i++)
	{
		for(int j = 0 ; j < Number  ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i = 0 ; i < Number ; i++)
	{
		for(int j = 0 ; j < Number  ; j++)
		{
			if( (i == j) | ((i+j) == (Number - 1)) )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	for( int i = 1; i <= Number ;i++)
	{
		for(int j = 1 ; j <= (Number - i) ; j++)
		{
			printf(" ");
		}
		for(int k = 1 ; k <= (2*i - 1) ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for( int i = Number; i >= 1 ;i--)
	{
		for(int j = (Number - i); j >= 1 ; j--)
		{
			printf(" ");
		}
		for(int k = (2*i - 1) ; k >= 1 ; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
}