#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>

//int main()
//{
//	int a[30] = { 0 };
//	int asize = 0;
//	int n = 0;
//	while (scanf("%d",&n) != EOF)
//	{
//		int x = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			if (x % 2 == 1 && x != 1)
//			{
//				a[asize++] = x;
//			}
//		}
//		int ans = 1;
//		for (int i = 0; i < asize; i++)
//		{
//			ans *= a[i];
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}

//int main()
//{
//	int a[30] = { 0 };
//	int asize = 0;
//	int n = 0;
//	while (scanf("%d",&n)!= EOF)	
//	{
//		int x = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			if (x % 2 == 1 & x != 1)
//			{
//				a[asize++] = x;
//			}
//		}
//		int ans = 1;
//		for (int i = 0; i < asize; i++)
//		{
//			ans *= a[i];
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}

//int main()
//{
//	int a[30] = { 0 };
//	int asize = 0;
//	int n = 0;
//	while (scanf("%d",&n)!= EOF)
//	{
//		int x = 0;
//		int f = 0;
//		int l = 0;
//		int z = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			if (x < 0)
//				f++;
//			else if (x == 0)
//				l++;
//			else
//				z++
//		}
//		printf("%d %d %d", f, l, z);
//	}
//}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#define EleType int

typedef struct LNode
{
	EleType data;
	struct LNode* next;
}LNode;

typedef struct LinkedList
{
	LNode* head;
	int length;
}LinkedList;

void InitList(LinkedList* list)
{
	list->head = NULL;
	list->length = 0;
}

void DestoryList(LinkedList* list)
{
	assert(list);
	LNode* current = list->head;
	while (current != NULL)
	{
		LNode* temp = current;
		current = current->next;
		free(temp);
	}
	//for (int i = 0; i < list->length; i++)
	//{
	//	LNode* temp = list->head;
	//	list->head = temp->next;
	//	free(temp);
	//}
	list->head = NULL;
	list->length = 0;
}

void InsertHead(LinkedList* list, EleType element)
{
	assert(list);
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("%s", strerror(errno));
		return;
	}
	newNode->data = element;
	newNode->next = list->head;
	list->head = newNode;
	list->length++;
}

void Append(LinkedList* list, EleType element)
{
	assert(list);
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL)
	{
		printf("%s", strerror(errno));
		return;
	}
	newNode->data = element;
	newNode->next = NULL;
	if (list->head == NULL)
	{
		list->head = newNode;
		newNode->next = NULL;

	}
	else
	{
		LNode* current = list->head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	list->length++;
}

void Insert(LinkedList* list, int index, EleType element)
{
	if (index < 0 || index > list->length)
	{
		printf("Invalid Index\n");
		return;
	}
	if (index == 0)
	{
		InsertHead(list, element);
	}
	else if (index == list->length)
	{
		Append(list, element);
	}
	else
	{
		LNode* newNode = (LNode*)malloc(sizeof(LNode));
		if (newNode == NULL)
		{
			printf("%s", strerror(errno));
			return;
		}
		newNode->data = element;
		LNode* current = list->head;
		for (int i = 0; i < index - 1; i++)
		{
			current = current->next;

		}
		newNode->next = current->next;
		current->next = newNode;
		list->length++;
	}
}

void RemoveHead(LinkedList* list)
{
	if (list->head == NULL)
	{
		return;
	}
	LNode* temp = list->head;
	list->head = temp->next;
	free(temp);
	list->length--;
}

void RemoveTrail(LinkedList* list)
{
	LNode* current = list->head;
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	free(current->next);
	current->next = NULL;
	list->length--;
}

void Remove(LinkedList* list, int index)
{
	if (index < 0 || index > list->length)
	{
		printf("Invalid Index\n");
		return;
	}
	LNode* current = list->head;
	for (int i = 0; i < index - 1; i++)
	{
		current = current->next;
	}
	LNode* temp = current->next;
	current->next = temp->next;
	free(temp);
	list->length--;
}

void Updata(LinkedList* list, int index, EleType element)
{
	if (index < 0 || index > list->length)
	{
		printf("Invalid Index\n");
		return;
	}
	LNode* current = list->head;

	for (int i = 0; i < index; i++)
	{
		current = current->next;
	}
	current->data = element;
}

LNode* Search(LinkedList* list, int index)
{
	if (index < 0 || index > list->length)
	{
		printf("Invalid Index\n");
		return NULL;
	}
	LNode* current = list->head;
	for (int i = 0; i < index; i++)
	{
		current = current->next;
	}
	return current;
}

int Get(LinkedList* list, EleType element)
{
	LNode* current = list->head;
	int index = 0;
	while (current->next != NULL)
	{
		if (current->data == element)
		{
			return index;
		}
		index++;
		current = current->next;
	}
	return -1;
}

void PrintList(LinkedList* list)
{
	LNode* current = list->head;
	while (current != NULL)
	{
		printf("%d ->", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int main()
{
	LinkedList list;
	InitList(&list);
	InsertHead(&list, 10);
	Append(&list, 30);
	Append(&list, 40);
	Insert(&list, 1, 20);
	printf("Original LinkedList:");
	PrintList(&list); //10 20 30 40
	Updata(&list, 1, 100);
	PrintList(&list);//10 100 30 40
	printf("%d %d\n", Search(&list, 1)->data, Get(&list, 30));//100 2
	RemoveHead(&list);
	RemoveTrail(&list);
	Remove(&list, 1);
	PrintList(&list);//20
	DestoryList(&list);
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//#define eleType int
//
//typedef struct LNode {
//	eleType data;
//	struct LNode* next;
//}LNode;
//
//typedef struct LinkedList
//{
//	LNode* head;
//	int length;
//}LinkedList;
//
//void InitList(LinkedList* list)
//{
//	list->head = NULL;  // 链表为空时，head 应该指向 NULL
//	list->length = 0;
//}
//
//void DestoryList(LinkedList* list)
//{
//	LNode* temp;
//	while (list->head != NULL)
//	{
//		temp = list->head;
//		list->head = list->head->next;
//		free(temp);
//	}
//	list->length = 0;  // 重置长度
//}
//
//void ListInsert(LinkedList* list, int index, eleType element)
//{
//	if (index < 0 || index > list->length)
//	{
//		printf("Invalid Index\n");
//		return;
//	}
//	else if (index == 0)
//	{
//		LNode* newNode = (LNode*)malloc(sizeof(LNode));
//		if (newNode == NULL)
//		{
//			printf("%s", strerror(errno));
//			return;
//		}
//		newNode->data = element;
//		newNode->next = list->head;
//		list->head = newNode;
//		list->length++;
//	}
//	else if (index == list->length)
//	{
//		LNode* newNode = (LNode*)malloc(sizeof(LNode));
//		if (newNode == NULL)
//		{
//			printf("%s", strerror(errno));
//			return;
//		}
//		newNode->data = element;
//		newNode->next = NULL;
//
//		if (list->head == NULL)
//		{
//			list->head = newNode;
//		}
//		else
//		{
//			LNode* current = list->head;
//			while (current->next != NULL)
//			{
//				current = current->next;
//			}
//			current->next = newNode;
//		}
//		list->length++;
//	}
//	else
//	{
//		LNode* newNode = (LNode*)malloc(sizeof(LNode));
//		if (newNode == NULL)
//		{
//			printf("%s", strerror(errno));
//			return;
//		}
//		LNode* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		newNode->data = element;
//		newNode->next = current->next;
//		current->next = newNode;
//		list->length++;
//	}
//}
//
//void ListRemove(LinkedList* list, int index)
//{
//	assert(list);
//	if (index < 0 || index >= list->length)
//	{
//		printf("Invalid Index\n");
//		return;
//	}
//	else if (index == 0)
//	{
//		LNode* temp = list->head;
//		list->head = temp->next;
//		free(temp);
//		list->length--;
//	}
//	else
//	{
//		LNode* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		LNode* temp = current->next;
//		current->next = temp->next;
//		free(temp);
//		list->length--;
//	}
//}
//
//void ListUpdata(LinkedList* list, int index, eleType element)
//{
//	assert(list);
//	if (index < 0 || index >= list->length)
//	{
//		printf("Invalid Index\n");
//		return;
//	}
//	LNode* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	current->data = element;
//}
//
//LNode* ListSearch(LinkedList* list, int index)
//{
//	assert(list);
//	if (index < 0 || index >= list->length)
//	{
//		printf("Invalid Index\n");
//		return NULL;
//	}
//	LNode* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	return current;
//}
//
//void printList(LinkedList* list)
//{
//	assert(list);
//	LNode* current = list->head;
//	while (current != NULL)
//	{
//		printf("%d -> ", current->data);
//		current = current->next;
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	LinkedList list;
//	InitList(&list);
//	ListInsert(&list, 0, 10);
//	ListInsert(&list, 1, 20);
//	ListInsert(&list, 2, 30);
//	ListInsert(&list, 3, 40);
//	printList(&list); // 10 -> 20 -> 30 -> 40 -> NULL
//	DestoryList(&list);
//	return 0;
//}
