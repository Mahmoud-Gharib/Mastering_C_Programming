#ifndef SL_H
#define SL_H


typedef struct Node
{
	u16 Data;
	struct Node *Next;
}Node_t;

void Insert(u16 Value);
void Remove(void);
void Display(void);
u16  CheckEmpty(void);





#endif