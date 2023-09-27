/*------------------------------------------------------*
* • (Calculating Sales) An online retailer sells five   *
*   different products whose retail prices are          *
*   shown in the following table:                       *
*   Q4                                                  *
*   Write a program that reads a series of pairs of     *
*   numbers as follows:                                 *
*   a) Product number                                   *
*   b) Quantity sold for one day                        *
*   Your program should use a switch statement to       *
*   help determine the retail price for each product.   *
*   Your program should calculate and display the       *
*   total retail value of all products sold last week.  *
*------------------------------------------------------*/

#include "stdio.h"

void main(void)
{
	int Number,Quantity;
	float sum_Product=0,sum_Day=0,sum_Week=0;
	float Price[]={2.98,4.50,9.98,4.49,6.87};
	char Day_Week[7][15]={"On Saturday :","On Sunday :","On Monday :","On Tuesday :","On Wednesday :","On Thursday :","On Friday :"};
	
	for(int i=0;i<7;i++)
	{
	  printf("%s\n",Day_Week[i]);
	  printf("Please Enter The Product Numbers & Number Of Quantity:\n");
	  for(int j=1;j<=5;j++)
	  {
		scanf("%d",&Number);
		switch(Number)
		{
		case 1:
		scanf("%d",&Quantity);
		sum_Product = (Quantity*Price[0]);
		break;
		case 2:
		scanf("%d",&Quantity);
		sum_Product = (Quantity*Price[1]);
		break;
		case 3:
		scanf("%d",&Quantity);
		sum_Product = (Quantity*Price[2]);
		break;
		case 4:
		scanf("%d",&Quantity);
		sum_Product = (Quantity*Price[3]);
		break;
		case 5:
		scanf("%d",&Quantity);
		sum_Product = (Quantity*Price[4]);
		break;	
		}
	    sum_Day += sum_Product;
	  }
	  sum_Week += sum_Day;
	  sum_Day=0;
	}
	printf("Totally = %.2f",sum_Week);
	
	
	
}
