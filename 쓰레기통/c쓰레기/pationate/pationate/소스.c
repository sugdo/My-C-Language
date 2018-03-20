#include <stdio.h>
#pragma warning (disable:4996)
#define size 6

int queue[size];
int front = 0;
int rear = 0;
int queue_empty();
int queue_full();
void enqueue(int data);
int dequeue();
void queue_print();


int main(void)
{
	int choice = 0;
	int data;


	while (choice != 4) {
		printf("1: enqueue, 2: dequeue, 3: print, 4: exit\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			if (-1 == queue_full()) {
				printf("Queue is Overflow.\n");
				break;
			}
			printf("Enter a data: ");
			scanf_s("%d", &data);
			enqueue(data);
			break;

		case 2:
			if (-1 == queue_empty()) {
				printf("Queue is underflow\n");
				break;
			}
			printf("%d is dequeue\n", dequeue());


			break;
		case 3:
			if (-1 == queue_empty()) {
				printf("Queue is empty.\n");
				break;
			}
			queue_print();
			break;
		case 4:
			printf("Exit.\n");
			break;
		default:
			continue;
		}

	}

}



/*
queue1_empty function
description : check queue1 for input
input : none
output : return -1 if queue1 is empty, else return 0
*/
int queue_empty()
{
	if (front == 0)
		return -1;
	else
		return 0;
}


/*
queue_full function
description : check Queue1 for remove
input : none
output : return -1 if queue1 is full, else return 0
*/
int queue_full()
{
	if ((front = 1 && rear == 5) || (front == rear + 1))
		return -1;
	else
		return 0;

}

/*enqueue1 function
description : appends data to the queue1
input : data to append(the Queue is a global structure)
output : none
*/

void enqueue(int data)
{
	if (front == 0 && rear == 0)
		front++;

	rear++;

	if (rear > 5)
		rear = 1;

	queue[rear] = data;

}


/*
dequeue function
description : removes data from the queue1
input : none
output : data on bottom of the Queue
*/
int dequeue()
{
	int delete_data;
	delete_data = queue[front];
	queue[front] = 0;

	if (front == 5) {
		front = 1;
		return delete_data;
	}
	if (front == rear)
	{
		front = rear = 0;
		return delete_data;
	}
	front++;

	if (front > 5)
		front = 1;

	return delete_data;
}

/*
queue_print function
description: print Queue1
input: none
output: none
*/

void queue_print()
{
	int i = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n");
}

