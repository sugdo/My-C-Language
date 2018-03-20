
#include <stdio.h>
#pragma warning(disable:4996)
#define size 100


int	Queue[size];
int front = -1;
int rear = -1;

void enqueue(int);
int dequeue();
int queue_full();
int queue_empty();
void printA();

int main()
{
	int data;
	int choice;

	printf("Enter choice number\n");
	scanf("%d", &choice);

	while (choice != 4)
	{
		switch (choice)
		{
		case 1:
			if (queue_full != -1)
			{
				printf("Enter number to push");
				scanf("%d", &data);
				enqueue(data);
			}
			else
				printf("stack is full\n");
			break;

		case 2:
			if (queue_empty() != -1)
			{
				printf("%d is pop\n", dequeue());
			}
			break;
		case 3:
			if (queue_empty() != -1)
				printA();
			else
				printf("stack is empty\n");
			break;
		}
		printf("\nEnter choice\n");
		scanf("%d", &choice);
	}

}

int queue_empty()
{
	if ((front == -1) || (rear < front))
		return -1;
	else
		return 0;
}

int queue_full()
{
	if (rear == size - 1)
		return -1;
	else
		return 0;

}

void enqueue(int data)
{
	if (rear == -1)
	{
		front++;
	}
	rear++;
	Queue[rear] = data;
}


int dequeue()
{
	return Queue[front++];
}

void printA()
{
	int i = 0;
	for (i = front; i <=rear; i++)
	{
		printf("%d ", Queue[i]);
	}
}