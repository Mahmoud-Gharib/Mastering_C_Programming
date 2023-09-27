#include <stdio.h>
#define    CODE     2

#if      CODE  ==   0
void main(void)
{
	int (*Ptr)();
	int (*Ptr)[10];
	void (*Ptr[10])(int,int);
	char (*(*x())[]) ();
	char (*(*x[3]) () )[5];
	
}
#elif    CODE  ==   1
void main(void)
{
	/************* Introduction ************/
  #define code      3   
  #if     code == 1
    unsigned char x = 25;    
    unsigned char *Ptr = &x;       //Reference
    *Ptr = 50;                     //DeReference
    printf("x =%d\n",x);
    printf("*Ptr = %d\n",*Ptr);
  #elif  code ==  2  
    unsigned char x = 250 ;
    unsigned int *Ptr = &x;
    *Ptr = 1000;
    printf("x =%d\n",x);
    printf("*Ptr = %d\n",*Ptr);
  #elif  code ==  3  
    unsigned int x = 250 ;
    unsigned char *Ptr = &x;
    *Ptr = 1000;
    printf("x =%d\n",x);
    printf("*Ptr = %d\n",*Ptr);
  #elif  code ==  4  
    unsigned int x = 250 ;
    unsigned int *Ptr = &x;
    *Ptr = 1000;
    printf("x =%d\n",x);
    printf("*Ptr = %d\n",*Ptr);
  #endif  
}

#elif    CODE  ==   2
void main(void)
{
	/************ Size of Pointer ************/
	/*      	 Size of Address Bus   		*/
	unsigned char   a = 5;
	unsigned int    b = 10;
			 float  c = 10.4; 
			 double d = 25.55;
	 
	unsigned char   *Ptra = &a;
	unsigned int    *Ptrb = &b;
			 float  *Ptrc = &c;
			 double *Ptrd = &d;
	
	printf(" Size of Ptra %d \n",sizeof(Ptra));
	printf(" Size of Ptrb %d \n",sizeof(Ptrb));
	printf(" Size of Ptrc %d \n",sizeof(Ptrc));
	printf(" Size of Ptrd %d \n",sizeof(Ptrd));
}
#elif    CODE  ==   3
void main(void)
{
	/***************  Initialize *************/
	unsigned int    x = 50;
	unsigned int *Ptr = &x;
	
	printf("Value  of  x  = %d\n",x);
	printf("Adress of  x  = %d\n",&x);
	printf("Value  of  x  = %d\n",*Ptr);
	printf("Adress of  x  = %d\n",Ptr);
	printf("Adress of Ptr = %d\n",&Ptr);
	
}
#elif    CODE  ==   4
void main(void)
{
	/**************** Wild Pointer *************/
 /* Pointer hasnot been Initialized(Point) to any thing */
    unsigned int *Ptr ;
	printf("Value = %d \n", *Ptr);   // Error
	*Ptr = 50;                       // Error
	printf("Value = %d \n", *Ptr);
	
	/***********************  Solution Of Wild Pointer ************/
	/* 1)   Local Pointer  ==> Init By NULL						  */
	/* 2)   Local Pointer  ==> Init By Variable int *Ptr = &x;    */
	/* 3)   Make it Global Pointer ==> Global Init By zero Value  */
    /************************************************************ */
}
#elif    CODE  ==   5
void main(void)
{
	/**************** NULL Pointer *************/
	/* Pointer Point to No thing  or (0x00)*/
    unsigned int *Ptr = NULL;
	/*
		int x = 5;
		Ptr = &x;
		*Ptr = 50;
		printf("Value = %d \n", *Ptr);
	*/
	
	/*    Not Allow To Edit (Derefernce)    */
	printf("Value = %d \n", *Ptr);   // Error
	*Ptr = 500;                      // Error   
	printf("Value = %d \n", *Ptr);
	
}
#elif    CODE  ==   6
void main(void)
{
	/************* Operating on Pointer **********/
	unsigned int x = 5;
	unsigned int y = 10;
	
	unsigned int *Ptrx = &x;
	unsigned int *Ptry = &y;
	
	/* 1) Subtract 2 Pointers  */
	int z = Ptrx - Ptry;       /* Step */
	printf("Step Ptrx = %d  and Ptry = %d  => %d step \n",Ptrx,Ptry,z);
	
	/* 2) Add 2 Pointers  */
	//	int z = Ptrx + Ptry;   /* Not Allow */
	
	/* 3) Comparing  Pointers  */
	printf("  Ptrx  > Ptry  = %d \n",(Ptrx  > Ptry));
	printf("  Ptrx  < Ptry  = %d \n",(Ptrx  < Ptry));
	printf("  Ptrx  == Ptry  = %d \n",(Ptrx  == Ptry));
	
}
#elif    CODE  ==   7
void main(void)
{
	/************* Operating on Pointer **********/
    unsigned int arr[] = {1,2,3,4,5,6};
    unsigned int *Ptr = arr;
    
    printf("Value ==> %d\n",*Ptr);
    
    Ptr++;
    printf("Value ==> %d\n",*Ptr);
    
    Ptr = Ptr + 1;
    printf("Value ==> %d\n",*Ptr);
    
    Ptr--;
    printf("Value ==> %d\n",*Ptr);
    
    *Ptr = *(Ptr)+3;
    printf("Value ==> %d\n",*Ptr);
    
    ++Ptr;
    printf("Value ==> %d\n",*Ptr);

    printf("Value ==> %p\n",Ptr++);  // ==> 3
    printf("Value ==> %p\n",++Ptr);  // ==> 5	
}
#elif    CODE  ==   8
int *Func(int x ,int y);
void main(void)
{
	/*********** Dangling Pointer ***********/
	/*  			Function Call	       */
	int a = 5, b = 10;
	int *Ptr = Func(a,b);
    	
	printf("%d",*Ptr);
}
int *Func(int x ,int y)
{
	static unsigned int Sum = 0;   // ==> Solve By Static Keyword
	Sum = x + y ;
	return (&Sum);
}
#elif    CODE  ==   9
void Sum(int x , int y, int *result);
void (*Ptr)(int x , int y, int *result);  // ==> Pointer to Function
void main(void)
{ 
	int r = 0;
	Ptr = Sum;         // ==> Name of Function is Constant Address
    Ptr(5,10,&r);    // Calling
	printf("%d",r);
}
void Sum(int x , int y, int *result)
{
	*result = x + y;
}
#elif    CODE  ==   10
   /************ Passing Array To Function ***********/
void Func(int arr[] , int size);
void main(void)
{
	int arr[] = { 1 , 2 ,3 ,4 };
	Func(arr,4);
	printf("%d",arr[2]);
}
void Func(int arr[] , int size)
{
	arr[2] = 7;
}
#elif    CODE  ==   11
/************* Pointer To Array with Function ***************/
int Arr_Sum(int *Ptr,int size);
void main(void)
{
	int arr[] = { 1 , 2 ,3 ,4 };
	printf("sum = %d",Arr_Sum(arr,4));
}
int Arr_Sum(int *Ptr,int size)
{
	int sum = 0;
	for(int i = 0; i < size ; i++)
	{
		//sum += Ptr[i];
		sum += *(Ptr+i);
	}
	return sum;
	//arr++
	//(*arr++)
	//(*arr)++
	//*(arr++)
}
#elif    CODE  ==   12
void main(void)
{
	/*********** Array Of Pointers ************/
	int N1 = 5 , N2 = 10 , N3 = 15;
	int *arr[3];
	arr[0] = &N1 ;
	arr[1] = &N2 ;
	arr[2] = &N3 ;
	
	printf(" size   = %d ",sizeof(arr));
	printf(" size   = %d ",sizeof(*arr));
}
#elif    CODE  ==   13
void main(void)
{
	/***********  Pointer to an N Element of Array ******** ** **/ 
    int arr[] = {1, 2 ,3 ,4};
	int (*Ptr)[3] = arr;
	
	Ptr++;
    printf("  %d \n",Ptr);
	//*Ptr[0] = 30;
	//printf("%d", arr[0]);
	printf(" size   = %d \n",sizeof(Ptr));
	printf(" size   = %d \n",sizeof(*Ptr));
}
#elif    CODE  ==   14
void main(void)
{
	/***********  Pointer to String ******** ** **/ 
	int *Str = "GHARIB";
	
	//*Str = "MAHMOUD";      // ==> ERROR
	printf("%s\n",Str);
	Str = "MAHMOUD";
	printf("%s\n",Str);	
}
#elif    CODE  ==   15
void main(void)
{
	/***********  Void Pointer  ******** ** **/ 
	void *Ptr ;
	int x = 5;
	Ptr = &x;
	printf("%d",*((int *)Ptr));
}
#elif    CODE  ==   16

#pragma pack(1)
typedef struct 
{
	char a;
    short int x;
    int y;
}Struct;

void main(void)
{
    /*********** Pointer To Struct **************/
    Struct S;
	printf("%d",sizeof(S));
    Struct *Ptr = &S;
    
    Ptr -> x = 50;
    (*Ptr).y = 60;
	/*
	Struct S[2];
    Struct *Ptr[2];
    
    Ptr[0] = &S[0];
    Ptr[0] -> x = 50;
    */ 
}
#elif    CODE  ==   17
void main(void)
{
    /*********** Pointer with Constant **************/
    int *Ptr;
	int *const Ptr ;
	const int *Ptr;
	const int *const Ptr;
}
#endif

