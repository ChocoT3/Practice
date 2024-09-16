#define	_CRT_SECURE_NO_WARNINGS
#include"Queen.h"

int main()
{
	Queue queue;
	InitQueue(&queue);
	for (int i = 0; i < 10; i++)
	{
		QueuePush(&queue, i * 10);
	}
	QueuePop(&queue);
	PrintQueue(&queue);
	printf("%d %d size = %zu\n", QueueFront(&queue)->data, QueueBack(&queue)->data,QueueSize(&queue));
	if (IsEmpty(&queue) == true)
		printf("Queue Is Empty\n");
	else
		printf("Queue Not Empty\n");
	return 0;
}