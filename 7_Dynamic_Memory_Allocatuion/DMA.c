#include <stdio.h>
#include <stdlib.h>

#include "STD_TYPES.h"

void main(void)
{
	u8 SizeM ,SizeC, SizeR , i;
	
	printf("********************\n"); 
	printf("* malloc Function  *\n");
	printf("********************\n"); 
	
	printf("Please Enter Number Of Values : ");
	scanf("%d",&SizeM);
	
	u8 *PtrM = (u8*)malloc( SizeM * sizeof(u8) );
	
	printf("Befor Give Initlization :\n");
	for(i = 0 ; i < SizeM ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrM[i]);
	}
	printf("During Give Initlization :\n");
	for(i = 0 ; i < SizeM ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		scanf("%d", &PtrM[i]);
	}
	printf("Befor Make Free :\n");
	for(i = 0 ; i < SizeM ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrM[i]);
	}
	free(PtrM);
	printf("After Make Free :\n");
	for(i = 0 ; i < SizeM ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrM[i]);
	}
	
	printf("********************\n"); 
	printf("* calloc Function  *\n");
	printf("********************\n"); 
	
	printf("Please Enter Number Of Values : ");
	scanf("%d",&SizeC);
	
	u8 *PtrC = (u8*)calloc( SizeC,sizeof(u8) );
	
	printf("Befor Give Initlization :\n");
	for(i = 0 ; i < SizeC ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrC[i]);
	}
	printf("During Give Initlization :\n");
	for(i = 0 ; i < SizeC ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		scanf("%d", &PtrC[i]);
	}
	printf("Befor Make Free :\n");
	for(i = 0 ; i < SizeC ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrC[i]);
	}
	free(PtrC);
	printf("After Make Free :\n");
	for(i = 0 ; i < SizeC ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrC[i]);
	}
	printf("********************\n"); 
	printf("* realloc Function  *\n");
	printf("********************\n"); 
	
	printf("Please Enter Number Of Values : ");
	scanf("%d",&SizeR);
	
	int *Ptr = realloc(PtrC,(SizeR * sizeof(u8)) ); 
	
	printf("Befor Give Initlization :\n");
	for(i = 0 ; i < SizeR ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrC[i]);
	}
	printf("During Give Initlization :\n");
	for(i = 0 ; i < SizeR ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		scanf("%d", &PtrC[i]);
	}
	printf("Befor Make Free :\n");
	for(i = 0 ; i < SizeR ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrC[i]);
	}
	free(PtrC);
	printf("After Make Free :\n");
	for(i = 0 ; i < SizeR ; i++)
	{
		printf("Please Enter Number %d : ",(i+1));
		printf("%d\n", PtrC[i]);
	}
	
}