#define	_CRT_SECURE_NO_WARNINGS
#include"Queen.h"

void InitQueue(Queue* queue)
{
	queue->head = queue->tail = NULL;
}
void DestoryQueue(Queue* queue)
{
	while (queue->head)
	{
		QNode* temp = queue->head;
		queue->head = temp->next;
		free(temp);
	}
	queue->head = queue->tail = NULL;
}
void PrintQueue(Queue* queue)
{
	QNode* cur = queue->head;
	while (cur)
	{
		printf("%p->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


void QueuePush(Queue* queue, Eletype e)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode != NULL)
	{
		newNode->data = e;
		newNode->next = NULL;
		if (queue->head == NULL)
		{
			queue->head = newNode;
			queue->tail = newNode;
		}
		queue->tail->next = newNode;
		queue->tail = newNode;
	}
	else
	{
		printf("memory allocated failed!");
		exit(-1);
	}
}

void QueuePop(Queue* queue)
{
	assert(queue);
	assert(queue->head);
	if (queue->head->next == NULL)
	{
		free(queue->head);
		queue->head = queue->tail = NULL;
	}
	else
	{
		QNode* cur = queue->head->next;
		free(queue->head);
		queue->head = cur;
	}

}

Eletype QueueFront(Queue* queue)
{
	if(queue->head != NULL)
		return queue->head->data;
	else
	{
		printf("Queue Empty!\n");
		exit(-1);
	}
}
Eletype QueueBack(Queue* queue)
{
	if (queue->tail != NULL)
		return queue->tail->data;
	else
	{
		printf("Queue Empty!\n");
		exit(-1);
	}
}

size_t QueueSize(Queue* queue)
{
	QNode* cur = queue->head;
	size_t size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

bool IsEmpty(Queue* queue)
{
	if (queue->head == NULL)
		return 1;
	else
		return 0;
}



