#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<errno.h>

#define eleType int

typedef struct LNode
{
	eleType data;
	struct LNode* next;
}LNode;

typedef struct LinkedList
{
	struct LNode* head;
	size_t size;
}LinkedList;

void InitLinkedList(LinkedList* List)
{
	assert(List);
	List->head = NULL;
	List->size = 0;
}

void LinkedListDestory(LinkedList* List)
{
	assert(List);
	while (List->head)
	{
		LNode* temp = List->head;
		List->head = List->head->next;
		free(temp);
	}
	List->size = 0;
}

void LinkedListInsert(LinkedList* List, int index, eleType element)
{
	assert(List);
	if (index < 0 || index > List->size)
	{
		printf("Invalid Index\n");
		return;
	}
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	newNode->data = element;
	if (index == 0)
	{
		newNode->next = List->head;
		List->head = newNode;
	}
	else
	{
		LNode* current = List->head;
		for (int i = 0; i < index-1; i++)
		{
			current = current->next;
		
		}
		newNode->next = current->next;
		current->next = newNode;
	}
	List->size++;
}
void LinkedListRemove(LinkedList* List, int index)
{
	assert(List);
	if (index < 0 || index > List->size)
	{
		printf("Invalid Index\n");
		return;
	}
	LNode* current = List->head;
	if (index == 0)
	{
		LNode* next = List->head->next;
		free(List->head);
		List->head = next;
	}
	for (int i = 0; i < index -1; i++)
	{
		current = current->next;
	}
	LNode* next = current->next->next;
	free(current->next);
	current->next = next;
}

LNode* LinkedListFind(LinkedList* List, eleType element)
{
	assert(List);
	LNode* current = List->head;
	while(current)
	{
		if (current->data == element)
		{
			return current;
		}
		current = current->next;
	}
	return NULL;
}

LNode* LinkedListGet(LinkedList* List, int index)
{
	assert(List);
	if (index < 0 || index > List->size)
	{
		printf("Invalid Index\n");
		return NULL;
	}
	LNode* current = List->head;
	for (int i = 0; i < index; i++)
	{
		current = current->next;
	}
	return current;
}

void LinkedListUpdata(LinkedList* List, int index, eleType element)
{
	assert(List);
	LNode* node = LinkedListGet(List, index);
	if (node)
	{
		node->data = element;
	}
}

void LinkedListPrint(LinkedList* List)
{
	LNode* current = List->head;
	while (current)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int main()
{
	LinkedList list;
	InitLinkedList(&list);
	LinkedListInsert(&list, 0, 10);
	LinkedListInsert(&list, 1, 20);
	LinkedListInsert(&list, 2, 30);
	LinkedListInsert(&list, 3, 40);
	printf("Original List:");
	LinkedListPrint(&list);
	LinkedListRemove(&list, 2);
	LinkedListUpdata(&list, 1, 100);
	LinkedListPrint(&list);
	LNode* found = LinkedListFind(&list, 30);
	if (!found)
	{
		printf("Element Not Found\n");
	}
	return 0;
}





