#include <stdio.h>

#define CODE   2

#if CODE == 1
#define True     1
#define False    0

char Compare(char *Ptr1 , char *Ptr2, char Size);

void main(void)
{
  char arr1[] = "GAARIB";
  char arr2[] = "BIRAHG";
  
  int size = sizeof(arr1);
  
  if(Compare(arr1 , arr2, size) == True)
  {
    printf(" Same ");
  }
  else
  {
    printf(" Different ");
  }
}

char Compare(char *Ptr1 , char *Ptr2 , char Size)
{
  char Count = 0;
  for(int i = 0 ; i <= Size - 2 ; i++)
  {
    if( *(Ptr1+i) == *(Ptr2+Size - 2 - i) )
    {
      Count++;
    }
    else
    {
      break;
    }
  }
  if(Count == (Size - 1))
  {
    return True;
  }
  else
  {
    return False;
  }
  
}
#elif CODE == 2

int Xor(int x , int y);
void main(void)
{
  int a = 5 ;    //   0000 0101
  int b = 4 ;    //   0000 0100   ^
                 //   0000 0001
  printf( " Xor = %d",Xor(a,b));
}
int Xor(int x , int y)
{
  //return (x ^ y);
  //return ((x | y) & (~x | ~y));
  return ((x | y) & ~(x & y));
//  return ((~x & y) | (x & ~y));

}


#endif