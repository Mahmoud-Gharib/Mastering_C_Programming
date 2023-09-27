/*---------------------------------------------------------*
* Write an efficient algorithm that searches for a value   *
* in an m x n matrix. This matrix has the following        *
* properties:                                              *
* Integers in each row are sorted from left to right.      *
* The first integer of each row is greater than the last   *
* integer of the previous row.                             *
*----------------------------------------------------------*/
#include <stdio.h>
#include "STD_TYPES.h"
#define M 3
#define N 4

bool binarySearch1D(u32 arr[], u32 K)
{
	u32 low = 0;
	u32 high = N - 1;
	while (low <= high) {
		u32 mid = low + (high - low) / 2;
		if (arr[mid] == K)
			return true;
		if (arr[mid] < K)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return false;
}

bool searchMatrix(u32 matrix[M][N], u32 K)
{
	u32 low = 0;
	u32 high = M - 1;
	while (low <= high) 
	{
		u32 mid = low + (high - low) / 2;
		if (K >= matrix[mid][0]&& K <= matrix[mid][N - 1])
			return binarySearch1D(matrix[mid], K);
		if (K < matrix[mid][0])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return false;
}

void main(void)
{
	int matrix[M][N] = { { 1, 3, 5, 7 },
						{ 10, 11, 16, 20 },
						{ 23, 30, 34, 50 } };
	int K = 3;
	if (searchMatrix(matrix, K))
		printf("Found");
	else
		printf("Not found");
}



