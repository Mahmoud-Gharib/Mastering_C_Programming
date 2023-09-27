#include <stdio.h>

#define   CODE     114

#if      CODE    == 1
#elif      CODE    == 17
/*C function to Check if string mirror or not*/
int Check_Mirror(char *Ptr);
void main(void)
{
	//char *Ptr = "abccba";
	char *Ptr = "abdcba";
	printf(" %d ",Check_Mirror(Ptr));
}
int Check_Mirror(char *Ptr)
{
	int Length = strlen(Ptr);
	int Counter = 0  ;
	for(int i = 0 ; i < (Length / 2) ; i++)
	{
		if ( *(Ptr + i) == *(Ptr + Length - 1 - i) )
		{
			Counter++;
		}
	}
	if( Counter == (Length / 2) )
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
#elif      CODE    == 18
/*Swap Two variables without using Temperature Variable or pointer.*/
void main(void)
{
	int a = 5 , b = 6;
	
	printf( " a = %d  , b = %d \n", a, b);
	
	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b ;
	
	printf( " a = %d  , b = %d \n", a, b);
}

#elif      CODE    == 38
/*Swap Two Pointers of integers and Draw the Stack when i call The Function.*/
void main(void)
{
	int a = 5 , b = 6;
	int *Ptra = &a;
	int *Ptrb = &b;
	
	*Ptra = *Ptra ^ *Ptrb ;
	*Ptrb = *Ptra ^ *Ptrb ;
	*Ptra = *Ptra ^ *Ptrb ;
	
	printf( " Ptra = %d  , Ptrb = %d \n", *Ptra, *Ptrb);
}
#elif      CODE    == 52
/*C function to reverse a string */

void Reverse_String(char *Ptr);
void main(void)
{
	char array[] = "GHARIB";
	Reverse_String(array);
	printf("%s",array);
}
void Reverse_String(char *Ptr)
{
	int Length = strlen(Ptr);
	for(int i = 0 , j = Length - 1  ; i < (Length /2) ; i++, j--)
	{
		*(Ptr + i ) = *(Ptr + i ) ^ *(Ptr + Length - 1 - i );
		*(Ptr + Length - 1 - i ) = *(Ptr + i ) ^ *(Ptr + Length - 1 - i );
		*(Ptr + i ) = *(Ptr + i ) ^ *(Ptr + Length - 1 - i );
	}
	
}
#elif      CODE    == 60
/*C function to print array elements using pointer*/
void Print_Elment(int* Ptr , int size);
void main(void)
{
	int array[] = { 1,2,3,4,5,6,7,8,9,0 };
	Print_Elment( array , ( sizeof(array) /sizeof(array[0]) ));
}
void Print_Elment(int* Ptr , int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		printf("%d >> ", *(Ptr + i));
	}		
}
#elif      CODE    == 86
/*C function to search for a specific string in a stream of data.*/
int Search( char *Ptr , char *Ptrs);
void main(void)
{
	char array[]  =  "Mahmoud Mustafa Gharib";
	char search[] = "Gharib";
	printf("%d",Search(array , search));
}
int Search( char *Ptr , char *Ptrs)
{
	int Length = strlen(Ptrs);
	int i = 0 ,j = 0 ,Counter = 0;
	while( *Ptr != '\0' )
	{
		if( *Ptr != ' ')
		{
			if( *(Ptrs + j) == *(Ptr + i) )
			{
				Counter++;
			}
			j++;
			i++;
		}
		else if( *Ptr == ' ')
		{
			if(Counter == Length)
			{
				return 1;
				break;
			}
			else
			{
				Counter = 0;
				j = 0;
			}
		}	
	}
	return 0;
}

#elif      CODE    == 94
/*C function to remove all characters in a string expect alphabet.*/
char* Remove(char *Ptr);
void main(void)
{
    char *String  =  "1997MahmoudGharib";
    printf("%s",String);
    String = Remove(String);
    printf("%s",String);
    printf("%s",Remove(String));
}
char* Remove(char *Ptr)
{
    static char array[20];
    int i = 0,j = 0;
    while( Ptr[j] != '\0' )
    {
        if( (Ptr[j] <= 'z' && Ptr[j] >= 'a') || (Ptr[j] <= 'Z' && Ptr[j] >= 'A') )
        {
            array[i] = Ptr[j];
            i++;
        }
        j++;    
    }
    array[i] = '\0';
    return array;
    
}
#elif      CODE    == 97
/*C function to reverse string*/
//   the same CODE    == 52

#elif      CODE    == 114
/*Write a function that prints the frequency of a certain character in a string.*/
void Frequency(char *Ptr, char search);
void main(void)
{
	char array[] = "MahMoud Mustafa Gharib";
	
	Frequency(array,'M');
}
void Frequency(char *Ptr, char search)
{
	int Counter = 0;
	while(*Ptr != '\0' )
	{
		if( search == *Ptr)
		{
			Counter++;
		}
		Ptr++;
	}
	printf("%d", Counter);
}
#elif      CODE    == 119
/*C Program to read 10 integers into an array from user and print them in reversing order using pointers*/
#define   size    10
void main(void)
{
	int array[size] ;
	int *Ptr = array;
	for(int i = 0 ; i < size ; i++)
	{
		scanf("%d >> ", (Ptr + i));
	}
	
	for(int i = size - 1 ; i >= 0 ; i--)
	{
		printf("%d >> ", *(Ptr + i));
	}
}

#elif      CODE    == 120
/*C Program to find length of a given string using pointer*/
#define   size    10
void main(void)
{
	char *Ptr = "GHARIB" ,i = 0;
	while( *Ptr  != '\0' )
	{
		i++;
		Ptr++;
	}
	printf("LENGTH = %d ", i);
}

#endif