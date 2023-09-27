#include <stdio.h>
#include <stdlib.h>
#include"STD_TYPES.h"
#include "SL.h"

Node_t *Head = NULL;

void Insert(u16 Value)
{
  Node_t *New = (Node_t *)malloc(sizeof(Node_t));
  
  New -> Data = Value;
  
  if( Head == NULL )
  {
    New -> Next = NULL;
    Head = New;
  }
  else
  {
    New -> Next = Head;
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
  while(Temp -> Next != NULL)
  {
    printf("%d -> ", Temp -> Data);
    Temp = Temp -> Next;
  }
  printf("%d\n", Temp -> Data);
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
    Head = Temp -> Next;
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