/*--------------------------------------------*
* You are given an integer array nums. Let    *
* product be the product of all values in the *
* array nums, x is the prouduct .             *
* Return :                                    *
* 1 if x is positive                          *
* -1 if x is negative                         *
* 0 if x is zero                              *
*---------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
u32 arraySign(u32 *nums, u32 numsSize);
void main(void)
{
	u32 size=0,SignValue=0;
	u32 arr[] = {1,2,3,4,5,6};
	//u32 arr[] = {0,2,3,4,5,6};
	//u32 arr[] = {-5,2,-3,4,-7,6};
	size = sizeof(arr)/sizeof(arr[0]);
	printf("N.Of Element = %d\n",size);
	SignValue = arraySign(arr,size);
	printf("OutPut = %d\n",SignValue);
	
}

u32 arraySign(u32 *nums, u32 numsSize)
{
	s32 Product = 1;
	for(u8 i=0;i<numsSize;i++)
		Product *= nums[i];
	printf("Product = %d\n",Product);
	if(Product>0)
		return 1;
	else if(Product<0)
		return -1;
	else 
		return 0;
}
