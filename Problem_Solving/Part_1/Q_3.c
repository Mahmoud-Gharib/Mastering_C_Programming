/*-------------------------------------------------------*
*  • (Triangle Printing Program) Write a program that    *
*  prints the following patterns separately,one          *
*  below the other. Use for loops to generate the        *
*  patterns. All asterisks (*) should be printed by a    *
*  single printf statement of the form printf( "*" );    *
*  (this causes the asterisks to print side by side).    *
*  • [Hint: The last two patterns require that each line *
*  begin with an appropriate number of blanks.]          *
*--------------------------------------------------------*/

#include "stdio.h"

void Triangle_Print(int ); 

void main(void)
{
	int Number ;
	printf("Please Enter the Number of Lines :");
	scanf("%d",&Number);
	Triangle_Print(Number);
}
void Triangle_Print(int x)
{
	int i=0,j=0,k=0;
	printf("(A)\n");
	for(int i = 1;i <= x;i++)
	{
		for(int j = 1;j <= i;j++)
			printf("* ");
	 printf("\n");
	}
	printf("\n");
	printf("(B)\n");
	for(int i = x;i >= 1;i--)
	{
		for(int j = i;j >= 1;j--)
			printf("* ");
	 printf("\n");
	}
	printf("(C)\n");
	for (int i = x+1; i >= 0; --i) 
	{
      for (int j = 0; j < x + 1 - i; ++j)
         printf("  ");
      for (int k = 0; k < i - 1; ++k)
         printf("* ");
      printf("\n");
    }	
	printf("(D)\n");
	for (int i = 1; i <= x+1; ++i, k = 0)
	{	
      for (int j = 1; j <= x + 1 - i; ++j) 
        printf("  ");
      while (k != i - 1) 
	  {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
}