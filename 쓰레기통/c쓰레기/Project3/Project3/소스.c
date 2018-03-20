

#include <stdio.h>
#pragma warning(disable:4996)
#define size 100

void push(int);
int pop();
int stack_full();
int stack_empty();
int top = -1;
void printA();

int stack[size];

int main()
{
	int data, choice;

	printf("Enter choice number\n");
	scanf("%d", &choice);
	while (choice != 4)
	{
		switch (choice)
		{
		case 1:
			if (stack_full() != -1)
			{
				printf("Enter number to push\n");
				scanf("%d", &data);
				push(data);

			}
			else
			{
				printf("stack is full\n");
			}
			break;

		case 2:
			if (stack_empty() != -1)
			{
				printf("%d is pop\n",pop());
			}
			else
			{
				printf("stack is empty");
			}
			break;

		case 3:
			printA();
			break;
		}

		printf("\nEnter choice\n");
		scanf("%d", &choice);
	}

}

/*
push
description : appends data to the stack
input : data to append(the stack is a global structure)
output : none
*/

void push(int data) {
	top++;
	stack[top] = data;
}

/*
pop
description: removes data from the stack
input: none
output: data on top of the stack
*/


int pop()
{
	return stack[top--];
}

int stack_full(void)
{
	if (top == size - 1)
		return -1;
	else
		return 0;
}

int stack_empty(void)
{
	if (top == -1)
	{
		printf("it is a empty");
		return -1;
	}
	return 0;
}

void printA()
{
	int i = 0;
	for (i = top; i >= 0; i--)
	{
		printf("%d ", stack[i]);
	}
}

