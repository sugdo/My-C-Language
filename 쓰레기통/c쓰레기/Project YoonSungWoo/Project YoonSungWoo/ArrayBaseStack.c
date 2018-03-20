#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack * pstack)
{
	topIndex = -1;

}

int SIsEmpty(void)
{
	if (topIndex == -1)
		return TRUE;
	else
		return FALSE;

}

void SPush(Stack * pstack, Data data) {
	Stack * new_node = (Stack*)malloc(sizeof(Stack*));
	topIndex += 1;
	new_node->data = data;
	pstack->next = new_node;
	
}

Data SPop(Stack * pstack)
{
	int rIdx;
	if (SIsEmpty())
	{
		printf("Stack Memory Error!");
		exit(-1);
	}
  
	rIdx = pstack->data;
	topIndex -= 1;
	free(pstack);
	return rIdx;

}


