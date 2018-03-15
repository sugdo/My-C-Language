#include <stdio.h>
#pragma warning (disable:4996)
#define size 100

int queue1[size];
int queue2[size];
int front1 = -1;
int rear1 = -1;
int front2 = -1;
int rear2 = -1;



int queue1_empty();
int queue2_empty();
int queue_full();
void enqueue1(int data);
void enqueue2(int data);
int dequeue1();
int dequeue2();
void queue_print();


int main(void)
{
	int choice = 0;
	int data;
	int i;

	while (choice != 4) {
		printf("1: enqueue, 2: dequeue, 3: print, 4: exit\n");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			if (-1 == queue_full()) {
				printf("Queue is full.\n");
				break;
			}
			printf("Enter a data: ");
			scanf_s("%d", &data);
			enqueue1(data);
			break;

		case 2:
			if (-1 == queue1_empty()) {
				printf("Queue is empty.\n");
				break;
			}


			for (i = front1; i < rear1; i++)
				enqueue2(dequeue1());

			printf("Dequeue data: %d\n", dequeue1(queue1));

			while (!queue2_empty())
				enqueue1(dequeue2());

			break;
		case 3:
			if (-1 == queue1_empty()) {
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
int queue1_empty()
{
	if ((front1 == -1) || (rear1 < front1))
		return -1;
	else
		return 0;
}

/*
queue2_empty function
description : check queue2 for input
input : none
output : return -1 if queue2 is empty, else return 0
*/
int queue2_empty()
{
	if ((front2 == -1) || (rear2 < front2))
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
	if (rear1 - front1 == size - 1)
		return -1;
	else
		return 0;

}

/*enqueue1 function
description : appends data to the queue1
input : data to append(the Queue is a global structure)
output : none
*/

void enqueue1(int data)
{
	if (rear1 == -1)
		front1++;

	queue1[++rear1] = data;
}


/*
enqueue2 function
description : appends data to the queue2
input : data to append(the Queue is a global structure)
output : none
*/
void enqueue2(int data)
{
	if (rear2 == -1)
		front2++;

	queue2[++rear2] = data;
}

/*
dequeue1 function
description : removes data from the queue1
input : none
output : data on bottom of the Queue
*/
int dequeue1()
{
	return queue1[front1++];
}
/*
dequeue2 function
description : removes data from the queue2
input : none
output : data on bottom of the Queue
*/
int dequeue2()
{
	return queue2[front2++];
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
	for (i = front1; i <= rear1; i++)
	{
		printf("%d ", queue1[i]);
	}
	printf("\n");
}

