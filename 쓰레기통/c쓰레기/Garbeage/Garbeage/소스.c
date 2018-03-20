#include <Stdio.h>

typedef struct _node
{
	int data;
	struct _node * next;


}Node;


int main()
{
	printf("%d", sizeof(Node));


}