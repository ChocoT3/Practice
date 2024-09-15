#define	_CRT_SECURE_NO_WARNINGS
#include"Queen.h"
int isEmpty(QNode* newNode)
{
	if (newNode != NULL)
		return 1;
	else
		return 0;
}

void InitQueen(Queue* Queue)
{
	Queue->head = NULL;
	Queue->tail = NULL;
}



void QueuePush(Queue* Queue, eleType e)
{	
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode != NULL)
	{
		newNode->data = e;
		newNode->next = NULL;
		if (Queue->tail == NULL)
		{
			Queue->head = Queue->tail = newNode;
		}
		else
		{
			Queue->tail->next = newNode;
		}
		Queue->tail = newNode;
	}
	else
	{
		printf("memory allocated failed");
		exit(1);
	}

}