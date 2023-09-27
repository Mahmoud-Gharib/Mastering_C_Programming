#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int Data;
    struct Node *Next;
}Node_t;

Node_t *Top = NULL;

void push(int value) 
{ 
    Node_t *Temp =(Node_t  *)malloc(sizeof(Node_t ));
    if (Top == NULL)
    {
    Temp->Next = NULL;
    Temp->Data = value;
    }
    else
    {
      Temp->Next = Top;
        Temp->Data = value;
    }
    Top = Temp;
}

void pop(void) 
{
    Node_t *Temp = Top;
    if (Temp == NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        Temp = Temp->Next;
        free(Top);
        Top = Temp;
    }
}



#include <stdio.h>

typedef struct Node
{
  int Data;
  struct Node *Next;
  
}Node_t;

Node_t *Top = NULL;

void Push(int value);
void Pop(void);
void Display(void);
void Search(int Number);

void main(void)
{
  Push(5);
  Push(10);
  Push(15);
  Search(10);
  Search(30);
  //Pop();
 // Pop();
 // Pop();
 // Pop();
  Display();
}

void Push(int value)
{
  Node_t *New = (Node_t *)malloc(sizeof(Node_t));
  New -> Data = value;
  if( Top == NULL )
  {
    New -> Next = NULL;
    Top = New;
  }
  else
  {
    New -> Next = Top;
    Top = New;
  }
  
}

void Pop(void)
{
  if( Top == NULL )
  {
    printf(" Stack is Empty \n");
  }
  else
  {
    Node_t *Ptr = Top -> Next ;
    free(Top);
    Top = Ptr;
  }
}
void Display(void)
{
  Node_t *Temp = Top;
  while( Temp != NULL)
  {
    printf("%d ==> ",Temp -> Data);
    Temp = Temp -> Next;
  }
}

void Search(int Number)
{
  int flag = 0;
  
  Node_t *Temp = Top;
  
  while(Temp != NULL )
  {
    if(Number == Temp -> Data)
    {
      flag = 1;
      printf("%d Found\n",Number);
      break;
    }
    Temp = Temp -> Next;
  }
  if(flag == 0)
  {
    printf("Not Found\n");
  }
}


Std_types.h
main.c
Stack.c
Stack.h

void display(void) 
{
    Node_t *Temp = Top;
 
    if (Temp == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }
    
    printf("The stack is \n");
    while (Temp != NULL)
    {
        printf("%d--->", Temp->Data);
        Temp = Temp->Next;
    }
    printf("NULL\n\n");

}

int main() {
  push(25);
  push(50);
  //push(75);
  //push(100);
  pop();
  //pop();
  //pop();
  display();

    return 0;
}
