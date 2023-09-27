#include <stdio.h>

void main()
{
    int arr1[]={1,2,3, 4,5};
    
    int flag = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(flag == 0)
        {
            if(arr1[i] < arr1[i + 1])
            {
                
            }
            else
            {
               arr1[i] = arr1[i] ^ arr1[i + 1];
               arr1[i+1] = arr1[i] ^ arr1[i + 1];
               arr1[i] = arr1[i] ^ arr1[i + 1];
            }
            flag++;
        }
        else if(flag == 1)
        {
            if(arr1[i] > arr1[i + 1])
            {
                
            }
            else
            {
               arr1[i] = arr1[i] ^ arr1[i + 1];
               arr1[i+1] = arr1[i] ^ arr1[i + 1];
               arr1[i] = arr1[i] ^ arr1[i + 1];
            }
            flag--;
        }
    }
    
   for(int i = 0 ; i < 5 ; i++)
   {
       printf("%d => ",arr1[i]);
   }
}












#include <stdio.h>

void main()
{
    int arr1[]={18,20,10};
    int arr2[]={9,11,8};
    int arr3[10];
    int flag = 0;
    int j = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(flag == 0)
        {
            if(arr1[i] < arr2[i])
            {
                arr3[j++] = arr1[i];
                arr3[j++] = arr2[i];
            }
            else
            {
               arr3[j++] = arr2[i];
               arr3[j++] = arr1[i];
            }
            flag++;
        }
        else if(flag == 1)
        {
            if(arr1[i] > arr2[i])
            {
                arr3[j++] = arr2[i];
                arr3[j++] = arr1[i];
            }
            else
            {
                arr3[j++] = arr1[i];
                arr3[j++] = arr2[i];
            }
            flag--;
        }
    }
    
   for(int i = 0 ; i < 6 ; i++)
   {
       printf(" %d < ",arr3[i]);
      
   }
}