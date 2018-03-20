#include <Stdio.h>

typedef struct _node
{
	int data;
	struct _node * next;
	struct _node * nexts;

}Node;


int main()
{
	printf("%d", sizeof(Node));


}