#include <stdio.h>
#pragma warning (disable:4996)
#define size 100

int	Queue1[size];
int	Queue2[size];
int front = -1;
int rear = -1;

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
	Queue1[rear] = data;
}


int dequeue(int * arr)
{
	return arr[front++];
}

void printA()
{
	int i = 0;
	for (i = front; i <= rear; i++)
	{
		printf("%d ", Queue[i]);
	}
}

int main()
{


}