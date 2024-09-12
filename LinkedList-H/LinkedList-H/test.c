#define	_CRT_SECURE_NO_WARNINGS
#include"LinkedList.h"
LinkedList InitList()
{
	Node* head = (Node*)malloc(sizeof(Node));
	if (head == NULL)
	{
		printf("%s", strerror(errno));
		exit(1);
	}
	else
	{
		head->data = 0;
		head->next = head;
		head->prev = head;
	}
	return head;
}
void ListPushFront(LinkedList head, EleType e)
{
	assert(head);
	Node* NewNode = (Node*)malloc(sizeof(Node));
	if (NewNode == NULL)
	{
		printf("%s", strerror(errno));
		exit(1);
	}

	NewNode->data = e;
	NewNode->next = head->next;
	NewNode->prev = head;
	head->next->prev = NewNode;
	head->next = NewNode;
}
void ListPushBack(LinkedList head, EleType e)
{
	assert(head);
	Node* NewNode = (Node*)malloc(sizeof(Node));
	if (NewNode == NULL)
	{
		printf("%s", strerror(errno));
		exit(1);
	}
	NewNode->data = e;
	head->prev->next = NewNode;
	NewNode->prev =	head->prev;
	NewNode->next = head;
	head->prev = NewNode;
}

void PrintList(LinkedList head)
{
	Node* cur = head->next;
	while (cur != head)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}





