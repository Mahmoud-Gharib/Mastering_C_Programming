#include <stdio.h>

void main(void)
{
    char  Num = 4 ;     //0000 0101
    char count = 0;
    char x = Num;
    while( Num != 0)
    {
       if( (Num & 1) == 1) 
       {
           count++;
       }
       Num = Num >> 1;
    }
    if(count % 2 == 0)
    {
        printf("%d is Even",x);
    }
   else
    {
        printf("%d is ODD",x);
    }
    
}



/*
void Func_Swap(int arr1[] ,int arr2[] ,int size);
void main(void)
{
    int arr1[] = { 1 , 2 , 3 , 2 ,5};
    int arr2[] = { 10 , 2 , 3 , 40 , 50};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    Func_Swap(arr1 , arr2 , size);
    for(int i = 0 ; i < size ; i++)
    {
       printf("%d => ",arr1[i]);
    }
    printf("\n");
    for(int i = 0 ; i < size ; i++)
    {
       printf("%d => ",arr2[i]);
    }
}

void Func_Swap(int arr1[] ,int arr2[] ,int size)
{
    int flag[10] = {0};
    for(int i = 0 ; i < size/2 ; i++)
    {
        for(int j= 0 ; j <= size/2 ; j++)
        {
            if(arr1[i] == arr1[j])
            {
                flag[j]++;
            }
            else if(arr1[i] == arr2[j])
            {
                flag[j]++;
            }
            else
            {
                flag[j] = flag[j];
            }
           
        }
    }
    
    for(int i = 0 ; i < size ; i++)
    {
       printf("%d is Reated  %d time ",arr1[i],flag[i]);
       printf("\n");
    }
    
    
    for(int i = 0 ; i < size ; i++)
    {
        arr1[i] = arr1[i] ^  arr2[i];
        arr2[i] = arr1[i] ^  arr2[i];
        arr1[i] = arr1[i] ^  arr2[i];
    }
    
    for(int i = 0 , j = size - 1 ; i < size/2 ; i++ ,j--)
    {
        arr1[i] = arr1[i] ^  arr1[j];
        arr1[j] = arr1[i] ^  arr1[j];
        arr1[i] = arr1[i] ^  arr1[j];
        
        arr2[i] = arr2[i] ^  arr2[j];
        arr2[j] = arr2[i] ^  arr2[j];
        arr2[i] = arr2[i] ^  arr2[j];
    }
}*/