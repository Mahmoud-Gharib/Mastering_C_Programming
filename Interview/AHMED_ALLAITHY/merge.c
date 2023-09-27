#include <stdio.h>
#define Size_Merge         20

void Merge(int arr1[] ,int  arr2[] , int arr3[] , int size1 ,int size2);

void main(void)
{
    int arr1[] = { 1,2,3,4,5};
    int arr2[] = { 10,20,30,40,50};
    int arr3[Size_Merge];
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    Merge(arr1 , arr2 , arr3 , size1 , size2);
    
    for(int i = 0 ; i < size1 + size2 ; i++)
    {
       printf("%d => " ,arr3[i] );
    }
    
}
void Merge(int arr1[] ,int  arr2[] , int arr3[] , int size1 ,int size2)
{
    int i = 0 , j = 0 , k = 0;
    
    for(i = 0 ; i < size1 ; i++)
    {
       arr3[k] = arr1[i];
       k++;
    }
    for(j = 0 ; j < size2 ; j++)
    {
       arr3[k] = arr2[j];
       k++;
    }
}




***************************************************************************************


#include <stdio.h>

void Merge(int arr1[] ,int  arr2[] , int arr3[] , int size1 ,int size2);

void main(void)
{
    int arr1[] = { 1,2,3,4,5};
    int arr2[] = { 10,20,30,40,50};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int *arr3 = (int *)malloc(sizeof(int) * (size1+size2)) ;
    Merge(arr1 , arr2 ,arr3 , size1 , size2);
    
    for(int i = 0 ; i < size1 + size2 ; i++)
    {
       printf("%d => " ,arr3[i] );
    }
    
}
void Merge(int arr1[] ,int  arr2[] , int arr3[] , int size1 ,int size2)
{
    int i = 0 , j = 0 , k = 0;
    
    for(i = 0 ; i < size1 ; i++)
    {
       arr3[k] = arr1[i];
       k++;
    }
    for(j = 0 ; j < size2 ; j++)
    {
       arr3[k] = arr2[j];
       k++;
    }
}