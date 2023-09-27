//Sorting
#include <stdio.h>
void Sorting(int array[] ,int size);

void main(void)
{
  int array[] = {6, 1 , 5 , 4 , 3 , 2 , 7 };
  int size = sizeof(array) / sizeof(array[0]);
  Sorting(array , size);
  for(int i = 0 ; i < size ; i++)
  {
      printf("%d => ", array[i]);
  }
}

void Sorting(int array[] ,int size)
{
  for(int i = 0 ; i < size-1 ; i++)
  {
      for(int j = 0 ; j < size  - i - 1 ; j++)
      {
          if(array[j] < array[j+1])
          {
              array[j] = array[j] ^ array[j+1];
              array[j+1] = array[j] ^ array[j+1];
              array[j] = array[j] ^ array[j+1];
          }
      }
  } 
}


//Sorting
#include <stdio.h>
void Sorting(int *Ptr ,int size);

void main(void)
{
  int array[] = {6, 1 , 5 , 4 , 3 , 2 , 7 };
  int size = sizeof(array) / sizeof(array[0]);
  Sorting(array , size);
  for(int i = 0 ; i < size ; i++)
  {
      printf("%d => ", array[i]);
  }
}

void Sorting(int *Ptr ,int size)
{
  for(int i = 0 ; i < size-1 ; i++)
  {
      for(int j = 0 ; j < size  - i - 1 ; j++)
      {
          if(*(Ptr+j) < Ptr[j+1])
          {
              *(Ptr+j) = *(Ptr+j) ^ *(Ptr+j+1);
              *(Ptr+j+1)= *(Ptr+j) ^ *(Ptr+j+1);
              *(Ptr+j) = *(Ptr+j) ^ *(Ptr+j+1);
          }
      }
  } 
}


//Searching
#include <stdio.h>
#include <stdbool.h>
bool Searching(int *Ptr ,int Value ,int size);

void main(void)
{
  int array[] = {6, 1 , 55, 4 , 3 , 2 , 7 };
  int value = 55;
  int size = sizeof(array) / sizeof(array[0]);
 if( Searching(array , value ,size) == true )
 {
    printf("Find") ;
 }
 else
 {
    printf("Not Find") ; 
 }
  
}

bool Searching(int *Ptr ,int Value ,int size)
{
  for(int i = 0 ; i < size ; i++)
  {
    if(Value == Ptr[i] )
    {
        return true;
    }
  }
  return false;
}


//Merging
#include <stdio.h>
#include <stdlib.h>
void Merging(int arr1[] ,int size1 , int arr2[] ,int size2 ,int arr3[]);

void main(void)
{
  int array1[] = {1,2,3,4,5 };
  int array2[] = {11,22,33,44,55};
  int size1 = sizeof(array1) / sizeof(array1[0]);
  int size2 = sizeof(array2) / sizeof(array2[0]);
  int *array3 = (int*)malloc(sizeof(int) *(size1 + size2));
  Merging(array1,size1,array2,size2,array3);
  for(int i = 0 ; i < (size1 + size2); i++ )
  {
     printf("%d => ", array3[i]); 
  }
}
void Merging(int arr1[] ,int size1 , int arr2[] ,int size2 ,int arr3[])
{
  int i =0 , j = 0;
  for(int i = 0 ; i < (size1); i++ )
  {
     arr3[j] = arr1[i];
     j++;
  }
  for(int i = 0 ; i < (size2); i++ )
  {
     arr3[j] = arr2[i];
     j++;
  }
}


//Zigzag
#include <stdio.h>

void Zigzag(int arr[] ,int size );

void main(void)
{
  int array[] = {90 ,99,5,1 ,6 };
  int size = sizeof(array) / sizeof(array[0]);
  Zigzag(array,size);
  for(int i = 0 ; i < size; i++ )
  {
     printf("%d => ", array[i]); 
  }
}
void Zigzag(int arr[] ,int size )
{
  int flag = 0 ;
  for(int i = 0 ; i < size; i++ )
  {
      if(flag == 0)
      {
        if(arr[i] > arr[i+1])
        {
          arr[i] = arr[i] ^ arr[i+1];
          arr[i+1] = arr[i] ^ arr[i+1]; 
          arr[i] = arr[i] ^ arr[i+1];  
        }
        else
        {
            
        }
        flag++;  
      }
      else
      {
        if(arr[i] < arr[i+1])
        {
          arr[i] = arr[i] ^ arr[i+1];
          arr[i+1] = arr[i] ^ arr[i+1]; 
          arr[i] = arr[i] ^ arr[i+1];   
        }
        else
        {
            
        }
        flag--;  
      }
  }
}

//Merge_Zigzag
#include <stdio.h>
#include<stdlib.h>
void Zigzag(int arr1[] ,int size1 , int arr2[] ,int size2 ,int arr3[]);

void main(void)
{
  int array1[] = {1,2,3,7 };
  int array2[] = {4,5,6,9 };
  int size1 = sizeof(array1) / sizeof(array1[0]);
  int size2 = sizeof(array2) / sizeof(array2[0]);
  int *array3 = (int*)malloc(sizeof(int) *(size1+size2));
  Zigzag(array1,size1,array2,size2,array3);
  for(int i = 0 ; i < (size1+size2); i++ )
  {
     printf("%d => ", array3[i]); 
  }
}
void Zigzag(int arr1[] ,int size1 , int arr2[] ,int size2 ,int arr3[])
{
  int flag = 0 ,j = 0;
  for(int i = 0 ; i < size1; i++ )
  {
      if(flag == 0)
      {
        if(arr1[i] < arr2[i])
        {
          arr3[j++] = arr1[i] ;
          arr3[j++] = arr2[i] ; 
        }
        else
        {
          arr3[j++] = arr2[i] ;
          arr3[j++] = arr1[i] ;  
        }
        flag++;  
      }
      else
      {
        if(arr1[i] > arr2[i])
        {
           arr3[j++] = arr2[i] ;
           arr3[j++] = arr1[i] ;  
        }
        else
        {
           arr3[j++] = arr1[i] ;
           arr3[j++] = arr2[i] ;   
        }
        flag--;  
      }
  }
}

//Freq
#include <stdio.h>
#include<stdlib.h>
void Freq(int arr[] ,int size,int arr3[]);

void main(void)
{
  int array[] = {1,2,3,3,4,2,2,1,1,5,2 };
  int size = sizeof(array) / sizeof(array[0]);
  int *array3 = (int*)malloc(sizeof(int) *(size));
  
  Freq(array,size,array3);
  
  for(int i = 0 ; i < (size); i++ )
  {
     printf("element %d => freq %d times \n",array[i], array3[i]); 
  }
}
void Freq(int arr[] ,int size,int arr3[])
{
  
  for(int i = 0 ; i < size; i++ )
  {
    for(int j = 0 ; j < size ; j++) 
    {
        if(arr[i] == arr[j] )
        {
            arr3[i]++;
        }
    }
  }
}
