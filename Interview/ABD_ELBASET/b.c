#include <stdio.h>

#define   CODE     16

#if      CODE    ==   1
/*Write c function to take an integer number and calculate its square root*/

void SQUAR_ROOT(int x );
void main(void)
{
   SQUAR_ROOT(25);
}
void SQUAR_ROOT(int x )
{
  int i = 0 ;
  while( i <= x )
  {
    if((i*i) == x)
    {
       printf("%d",i);
       break;
    }
    i++;
  }
}

#elif    CODE    ==   2
/* Write c function to check Whether a Number is Prime or Not*/
void Check_Prim(int x);
void main(void)
{
  Check_Prim(5);
}
void Check_Prim(int x)
{
  int Count = 0;
  for( int i = 1 ; i <= x ; i++)
  {
    if(( x % i ) == 0)
    {
      Count++;
    }
  }
  if((Count == 2) && (x != 1))
  {
    printf(" x is Prime Number "); 
  }
  else
  {
    printf(" x is Not Prime Number "); 
  }
  
}
#elif    CODE    ==   3
/*Write c function to take 2 numbers and print all prime numbers between them. */
void Print_All_Prim(int x , int y);
void main(void)
{
  Print_All_Prim(2 , 30);
}
void Print_All_Prim(int x ,int y)
{
  int Count = 0;
  for( int i = x ; i <= y ; i++)
  {
    Count = 0;
    for( int j = 1 ; j <= i ; j++)
    {
      if(( i % j ) == 0)
      {
        Count++;
      }
    }
    if((Count == 2) && (i != 1))
    {
      printf(" %d >> ",i); 
    }
    
  }
  
}
#elif    CODE    ==   4
/*Write c function to take a number and get the nearest 10th number (number 73 return 70 ,number 78 return 80).*/
int Nearest10Th(int x);
void main(void)
{
  printf("%d ", Nearest10Th(25));
  printf("%d ", Nearest10Th(36));
  printf("%d ", Nearest10Th(74));
  printf("%d ", Nearest10Th(70));
}
int Nearest10Th(int x)
{
  if( (x % 10) >= 0 && (x % 10) <= 4 )
  {
    return (x - (x % 10));  
  }
  if( (x % 10) >= 5 && (x % 10) <= 9 )
  {
    return (x - (x % 10) + 10);  
  }
}
#elif    CODE    ==   5
/*Write c function to take a number and sum all its digits (number 126 , sum = 1+2+6).*/
int SumDigits(int x);
void main(void)
{
  printf("%d ", SumDigits(255));
  printf("%d ", SumDigits(36));
 
}
int SumDigits(int x)
{
  int sum = 0;
  while(x != 0)
  {
    sum = sum +( x % 10) ;
    x = x / 10;
  }
  return sum;
}
#elif    CODE    ==   6
/*Write c function to reverse digits in number (number 2371 return 1732)*/
int ReverseDigits(int x);
void main(void)
{
  printf("%d ", ReverseDigits(255));
  printf("%d ", ReverseDigits(36));
 
}
int ReverseDigits(int x)
{
  int Reverse = 0;
  while(x != 0)
  {
    Reverse = (Reverse * 10) +( x % 10) ;
    x = x / 10;
  }
  return Reverse;
}
#elif    CODE    ==   7
/*Write c function to check Whether the Number base is 2 or not (numbers
like1,2,4,8,16,32) try it in 4 different ways*/

void CheckBase2(int x);
void main(void)
{
 CheckBase2(1);
 CheckBase2(2);
 CheckBase2(5);
 CheckBase2(10);
 CheckBase2(16);
 CheckBase2(30);
}
void CheckBase2(int x)
{
  
  printf(" Not Base of 2 \n" );
  printf(" Base of 2 \n" );
}
#elif    CODE    ==   8
/*Write c function to count number of ones in the binary representation of a 
number ( 10-> 1010 return 2) try to optimize your codes*/

int Nofones(int x);
void main(void)
{
  printf("%d ", Nofones(10));   // 1010
  printf("%d ", Nofones(25));
  printf("%d ", Nofones(255));
}
int Nofones(int x)
{
  int Bit = 0 , Count = 0;
  while( Bit < 32 )
  {
    if( ((x >> Bit)  & 1) == 1 )
    {
      Count++;
    }
    Bit++;
  }
  return Count;
}
#elif    CODE    ==   9
/*Write c function to print the binary representation of a number try not to print 
zeros on the left ( 5-> 101)*/

void Binary(int x);
void main(void)
{
  Binary(5);
  Binary(25);
  Binary(255);
}
void Binary(int x)
{
  int Bit = 31 , Count = 0;
  while( Bit >= 0 )
  {
    if( (x & (1 << Bit)) >= 1 )
    {
      printf("%d",1);
      Count = 1;
    }
    else if ((Count == 1) && ((x & (1 << Bit)) == 0))
    {
      printf("%d",0);
    }
    Bit--;
  }
  
  printf("\n");
}
#elif    CODE    ==   10

#elif    CODE    ==   11
/*Write c function to sum numbers from 1 to 100 (without loop).*/

void SUM(int x ,int y);
void main(void)
{
  SUM( 1 , 5);
  SUM( 1 , 15);
  SUM( 1 , 100);
}
void SUM(int x ,int y)
{
  printf("%d\n" , (y*(y+1))/2);
}
#elif    CODE    ==   12
/*Write c function to calculate the factorial of number (factorial of 5 is 
5*4*3*2*1) try in 2 different way.*/

void Factorial(int x);
void main(void)
{
  Factorial(0);
  Factorial(-5);
  Factorial(5);
 
}
void Factorial(int x)
{
  int fact = 1 , Counter = 1;
  if( x <= 1)
  {
    printf(" Factorial of %d is %d\n",x,fact);
  }
  else
  {
    while(Counter < (x+1) )
    {
      fact = fact * Counter;
      Counter++;
    }
    printf(" Factorial of %d is %d\n",x,fact);
  }
  
}
#elif    CODE    ==   13
/*Write c function to find a number in a sorted array (try to optimize your code).*/

void SortArray(int *Ptr , int size);
void main(void)
{
  int array[] = { 1,4,2,3,5,8,6,7,9,0 };
  SortArray(array , (sizeof(array)/sizeof(array[0])) );
}
void SortArray(int *Ptr , int size)
{
  for(int i = 0 ; i < size - 1 ;i++)
  {
    for(int j = 0 ; j < size - 1 - i ; j++)
    {
      if( *(Ptr + j) < *(Ptr + j + 1) )
      {
      *(Ptr + j) = *(Ptr + j) ^ *(Ptr + j + 1);
      *(Ptr + j + 1) = *(Ptr + j) ^ *(Ptr + j + 1);
      *(Ptr + j) = *(Ptr + j) ^ *(Ptr + j + 1);
      }
    }
  }
  for(int i = 0 ; i < size  ;i++)
  {
    printf("%d >> ", *(Ptr + i) );
  }
}
#elif    CODE    ==   14
/*C function to return the maximum and minimum number in an array and there 
index (try 3 different way to return more than one variable from function).
*/
typedef struct 
{
  int Max;
  int Min;
}Struct;
void ReturnMaxMin(int *Ptr , int size , Struct *PtrStruct);
void main(void)
{
  Struct S;
  Struct *Ptr = &S;
  int array[] = { 1,4,2,3,5,8,6,7,9,0 };
  ReturnMaxMin(array , (sizeof(array)/sizeof(array[0])) , Ptr);
  printf("Max = %d  Min = %d ",S.Max ,S.Min);
}
void ReturnMaxMin(int *Ptr , int size , Struct *PtrStruct)
{
  for(int i = 0 ; i < size - 1 ;i++)
  {
    for(int j = 0 ; j < size - 1 - i ; j++)
    {
      if( *(Ptr + j) > *(Ptr + j + 1) )
      {
      *(Ptr + j) = *(Ptr + j) ^ *(Ptr + j + 1);
      *(Ptr + j + 1) = *(Ptr + j) ^ *(Ptr + j + 1);
      *(Ptr + j) = *(Ptr + j) ^ *(Ptr + j + 1);
      }
    }
  }
  PtrStruct -> Max = *(Ptr + 0);
  PtrStruct -> Min = *(Ptr + size - 1);
}
#elif    CODE    ==   16
/*Write c function to take an array and reverse its elements.*/

void ReverseArray(int *Ptr , int size);
void main(void)
{
  int array[] = { 0,1,2,3,4,5,6,7,8,9 };
  ReverseArray(array , (sizeof(array)/sizeof(array[0])) );
}
void ReverseArray(int *Ptr , int size)
{
  for(int i = 0 ; i <= (size - 1)/2 ; i++)
  {
    
    *(Ptr + i) = *(Ptr + i) ^ *(Ptr + size - i - 1 );
    *(Ptr + size - i - 1 ) = *(Ptr + i) ^ *(Ptr + size - i - 1 );
    *(Ptr + i) = *(Ptr + i) ^ *(Ptr + size - i - 1 );

  }
  for(int i = 0 ; i < size  ;i++)
  {
    printf("%d >> ", *(Ptr + i) );
  }
}
#elif    CODE    ==   20
/*Write c function to take an string and reverse words (My name is Mohamed 
Ali->Ali Mohamed is name my) try it without use external arrays.*/

void Reverse_Words( char *Ptr);
void main(void)
{
  
  char array[] = "My name is Mohamed Ali";
  Reverse_Words(array);
  printf("%s",array);
}

void Reverse_Words( char *Ptr)
{
  int length = strlen(Ptr);
  int i = 0;
  int j = length - 1;
  while( i != (length /2))
  {
     Ptr[i] = Ptr[i] ^ Ptr[j];
     Ptr[j] = Ptr[i] ^ Ptr[j];
     Ptr[i] = Ptr[i] ^ Ptr[j];
    i++;
    j--;
  }
  int start = 0, end = 0;
    while(end <= length) {
        if(Ptr[end] == ' ' || Ptr[end] == '\0') 
        {
        
            for(int i=start, j=end-1   ;  i<j  ;   i++, j--)
            {
                Ptr[i] = Ptr[i] ^ Ptr[j];
                Ptr[j] = Ptr[i] ^ Ptr[j];
                Ptr[i] = Ptr[i] ^ Ptr[j];
            }
            start = end+1;
        }
        end++;
    }
  
}
#endif