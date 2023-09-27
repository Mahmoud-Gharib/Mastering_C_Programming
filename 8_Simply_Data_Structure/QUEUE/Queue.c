#include <stdio.h> 
#include <stdlib.h>

typedef struct Node 
{
    int Data;
    struct Node * Next;
}Node_t;

Node_t * Front = NULL;
Node_t * Rear  = NULL;

void enqueue(int value) 
{
    Node_t * New = (Node_t * ) malloc(sizeof(Node_t));
    New -> Data = value;
    New -> Next = NULL;

    if ((Front == NULL) && (Rear == NULL)) 
    {
        Front = Rear = New;
    } 
    else
    {
        Rear -> Next = New;
        Rear = New;

    }

}

void dequeue(void) {
    if (Front == NULL) 
    {
        printf("\nUnderflow\n");
    } 
    else 
    {
        Node_t * Temp = Front;
        Front = Front -> Next;
        free(Temp);
    }
}

void display(void) 
{
    Node_t * Temp = Front;
    if ((Front == NULL) && (Rear == NULL)) 
    {
        printf("\nQueue is Empty\n");
    } 
    else 
    {
        while (Temp != NULL) 
        {
            printf("%d--->", Temp -> Data);
            Temp = Temp -> Next;
        }
    }
}

int main() {
  enqueue(25);
  enqueue(50);
  enqueue(75);
  enqueue(100);
  dequeue();
 // dequeue();
 // display();

    return 0;
}
