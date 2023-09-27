/*-------------------------------------------------*
* Write a function qualityPoints that inputs a     *
* student’s average and returns 4 if a student's   *
* average is 90–100, 3 if the average is 80–89, 2  *
* if the average is 70–79, 1 if the average is 60– *
* 69, and 0 if the average is lower than 60.       *
*-------------------------------------------------*/

#include "stdio.h"

int qualityPoints(int );

void main(void)
{
	int N,arr[25],sum = 0,avg=0;
	printf("Please Enter Number Of Students :");
	scanf("%d",&N);       
	for(int i=1;i<=N;i++)
	{
		printf("Please Enter Student_%d :",i);
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	avg = (sum / N);
	int QP = qualityPoints(avg);
	if(QP == -1)
		printf("Error");
	else
		printf("(qualityPoints) = %d\n",QP);
}
int qualityPoints(int x)
{
	if (100 < x || x <= -1)
		return -1;
	else
	{	if(90 <= x && x <= 100)
				return 4;
		else if(80 <= x && x <= 89)
				return 3;
		else if(70 <= x && x <= 79)
				return 2;
		else if(60 <= x && x <= 69)
				return 1;
		else if(0 <= x && x <= 59)
				return 0;
	}
	/*	
	switch(x)
	{
		case 90 ... 100 :
		return 4;
		break;
		case 80 ... 89 :
		return 3;
		break;
		case 70 ... 79 :
		return 2;
		break;
		case 60 ... 69 :
		return 1;
		break;
		case 0 ... 59 :
		return 0;
		break;
	}
	*/
}