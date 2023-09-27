/* Write c function to take an array (with unknown size) contain 2 zeros swap the 
3 element after the first zero with the 3 element after the second zero 
( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7). */

#include<stdio.h>

typedef unsigned char    u8 ;

void Func_Reverse(u8 arr[] ,u8 size);


void main(void)
{
    u8 array[] = { 0 , 1 , 2 , 3 , 4 , 0 , 5 , 6 , 7 , 8 };
    int size = sizeof(array) / sizeof(array[0]);
    Func_Reverse(array , size);
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ," ,array[i]);
    }

}

void Func_Reverse(u8 arr[] ,u8 size)
{
    u8 First , Last,Count = 0;
    for(int i = 0  ; i < size ; i++ )
    {
        if(Count == 0 &&  arr[i] == 0)
        {
            First = i;
            Count++;
        }
        else if(Count == 1 &  arr[i] == 0)
        {
            Last = i;
            break;
        }
    }
    for(int i = First + 1 ,j = Last + 1 ; i <= First + 3  ; i++ , j++)
    {
        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];
    }
}