#include <stdio.h>
#include <stdlib.h>
#include"STD_TYPES.h"
#include "DL.h"

Node_t *Head = NULL;

void Insert(u16 Value)
{
  static Node_t *New = (Node_t *)malloc(sizeof(Node_t));

  
  New -> Data = Value;
  
  if( Head == NULL )
  {
	New -> Prev = NULL;  
    New -> Next = NULL;
    Head = New;
  }
  else
  {
	New -> Prev = NULL;
    New -> Next = Head;
	Head -> Prev = New;
    Head = New;
  }
  
}
void Display(void)
{
  if(CheckEmpty() == 0)
  {
    printf("Empty\n");
  }
  else
  {
  Node_t *Temp = Head;
  while(Temp != NULL)
  {
    printf("%d -> ", Temp -> Data);
    Temp = Temp -> Next;
  }
  
  }
}

void Remove(void)
{
  Node_t *Temp = Head;
  if(Temp -> Next == NULL)
  {
    Head = NULL;
    free(Temp);
  }
  else
  {
	Temp = Head;
    Head = Head -> Next;
	Head -> Prev = NULL;
    free(Temp);
  }
}
u16  CheckEmpty(void)
{
  if(Head == NULL)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}