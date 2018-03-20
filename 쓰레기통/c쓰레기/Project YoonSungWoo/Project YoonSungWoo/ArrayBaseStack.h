#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100
int topIndex;



typedef int Data;

typedef struct _arrayStack
{
	int data;
	struct _arrayStack * next;

}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(void);
void SPush(Stack*pstack, Data data);
Data SPop(Stack * pstack);


#endif