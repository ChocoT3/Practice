#define _CRT_SECURE_NO_WARNINGS

//#pragma region 栈的顺序表实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//#define eleType int
//
//typedef struct Stack
//{
//	eleType* elements;
//	int size;
//	int capacity;
//}Stack;
//
//void InitStack(Stack* stk)
//{
//	stk->elements = (eleType*)malloc(sizeof(eleType) * 8);
//	stk->size = 0;
//	stk->capacity = 8;
//}
//
//void DestoryStack(Stack* stk)
//{
//	free(stk->elements);
//	stk->elements = NULL;
//	stk->size = 0;
//	stk->capacity = 0;
//}
//
//void ResizeStack(Stack* stk)
//{
//	eleType* newPtr = NULL;
//	newPtr = (eleType*)realloc(stk->elements, sizeof(eleType) * stk->capacity * 2);
//	if (newPtr == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	stk->elements = newPtr;
//	stk->capacity *= 2;
//}
//
//void PushStack(Stack* stk,eleType element)
//{
//	if (stk->size == stk->capacity)
//	{
//		ResizeStack(stk);
//	}
//	stk->elements[stk->size++] = element;//压栈，size++；
//}
//
//eleType PopStack(Stack* stk)
//{
//	if (stk->size == 0)
//	{
//		printf("Stack underflow\n");
//		exit(1);
//	}
//	return stk->elements[--stk->size];
//}
//
//eleType TopStack(Stack* stk)
//{
//	if (stk->size == 0)
//	{
//		printf("Stack is empty!\n");
//		exit(1);
//	}
//	return stk->elements[stk->size - 1];
//}
//
//int GetSizeStack(Stack* stk)
//{
//	return stk->size;
//}
//
//int main()
//{
//	Stack stack;
//	InitStack(&stack);
//	for (int i = 0; i < 8; i++)
//	{
//		PushStack(&stack, i);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", PopStack(&stack));
//	}
//	printf("%d\n",GetSizeStack(&stack));
// DestoryStack(&stack);
//	return 0;
//}
//#pragma endregion


//#pragma region 栈的链表实现
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//#define eleType int
//
//typedef struct SNode
//{
//	eleType data;
//	struct SNode* next;
//}SNode;
//typedef struct Stack
//{
//	SNode* head;
//	int size;
//}Stack;
//void InitStack(Stack* stk)
//{
//	stk->head = NULL;
//	stk->size = 0;
//}
//void DestroyStack(Stack* stk)
//{
//	SNode* current = stk->head;
//	while (current != NULL)
//	{
//		SNode* temp = stk->head;
//		stk->head = temp->next;
//		free(temp);
//	}
//	stk->head = NULL;
//	stk->size = 0;
//}
//void PushStack(Stack* stk, eleType element)
//{
//	SNode* newSNode = (SNode*)malloc(sizeof(SNode));
//	if (newSNode == NULL)
//	{
//		printf("%s ", strerror(errno));
//		return;
//	}
//	newSNode->data = element;
//	newSNode->next = stk->head;
//	stk->head = newSNode;
//	stk->size++;
//}
//eleType PopStack(Stack* stk)
//{
//	if (stk->size == 0)
//	{
//		printf("Stack is empty!\n");
//		exit(1);
//	}
//	eleType ret = stk->head->data;
//	SNode* temp = stk->head;
//	stk->head = temp->next;
//	free(temp);
//	stk->size--;
//	return ret;
//}
//eleType TopStack(Stack* stk)
//{
//	if (stk->size == 0)
//	{
//		printf("Stack is empty!\n");
//		exit(1);
//	}
//	return stk->head->data;
//}
//int GetSizeStack(Stack* stk)
//{
//	return stk->size;
//}
//int main()
//{
//	Stack stk;
//	InitStack(&stk);
//	for (int i = 0; i < 10; i++)
//	{
//		PushStack(&stk, i);
//	}
//	printf("%d \n", GetSizeStack(&stk));//10
//	printf("%d \n", TopStack(&stk));//9
//	printf("%d \n", PopStack(&stk));//9
//	int temp = GetSizeStack(&stk);
//	for (int i = 0; i < temp; i++)
//	{
//		printf("%d ->", PopStack(&stk));//8 7 6 5 4 3 2 1 0
//	}
//	printf("NULL\n");
//	printf("%d \n", GetSizeStack(&stk));//0
//	DestroyStack(&stk);
//	return 0;
//}
//
//#pragma endregion


//#pragma region 不带头结点双向链表
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//#define eleType int
//
//typedef struct Node
//{
//	struct Node* previous;
//	struct Node* next;
//	eleType data;
//}Node;
//
//typedef struct LinkedList
//{
//	Node* head;
//	int size;
//}LinkedList;
//
//void InitList(LinkedList* list)
//{
//	list->head = NULL;
//	list->size = 0;
//}
//
//void DestoryList(LinkedList* list)
//{
//	Node* current = list->head;
//	while (list->head != NULL)
//	{
//		Node* temp = list->head;
//		list->head = temp->next;
//		free(temp);
//	}
//	list->head = NULL;
//	list->size = 0;
//}
//
//void InsertHead(LinkedList* list, eleType element)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	newNode->data = element;
//	newNode->next = list->head;
//	if(list->head != NULL)
//		list->head->previous = newNode;
//	list->head = newNode;
//	newNode->previous = NULL;
//	list->size++;
//}
//
//void Append(LinkedList* list, eleType element)
//{
//	if (list->size == 0)
//	{
//		InsertHead(list, element);
//		return;
//	}
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	newNode->data = element;
//	newNode->next = NULL;
//	Node* current = list->head;
//	while (current->next != NULL)
//	{
//		current = current->next;
//	}
//	current->next = newNode;
//	newNode->previous = current;
//	list->size++;
//}
//
//void Insert(LinkedList* list,int index, eleType element)
//{
//	if (index < 0 || index > list->size)
//	{
//		printf("Invalid index\n");
//		return;
//	}
//	else if (index == 0)
//	{
//		InsertHead(list, element);
//		return;
//	}
//	else if (index == list->size)
//	{
//		Append(list, element);
//		return;
//	}
//	else
//	{
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		if (newNode == NULL)
//		{
//			printf("%s", strerror(errno));
//			return;
//		}
//		newNode->data = element;
//		Node* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		newNode->next = current->next;
//		current->next->previous = newNode;
//		current->next = newNode;
//		newNode->previous = current;
//		list->size++;
//	}
//}
//
//void RemoveHead(LinkedList* list)
//{
//	if (list->size == 0)
//	{
//		printf("List is empty!");
//		return;
//	}
//	Node* temp = list->head;
//	list->head = temp->next;
//	free(temp);
//	if (list->head != NULL)
//		list->head->previous = NULL;
//	list->size--;
//}
//
//void RemoveTrail(LinkedList* list)
//{
//	if (list->size == 0)
//	{
//		printf("List is empty!");
//		return;
//	}
//	if (list->size == 1)
//	{
//		RemoveHead(list);
//		return;
//	}
//	Node* current = list->head;
//	while (current->next->next != NULL)
//	{
//		current = current->next;
//	}
//	free(current->next);
//	current->next = NULL;
//	list->size--;
//}
//
//void Remove(LinkedList* list,int index)
//{
//	if (list->size == 0)
//	{
//		printf("List is empty!");
//		return;
//	}
//	if (index < 0 || index >= list->size)
//	{
//		printf("Invalid index\n");
//		return;
//	}
//	if (index == 0)
//	{
//		RemoveHead(list);
//		return;
//	}
//	else if (index == list->size - 1)
//	{
//		RemoveTrail(list);
//		return;
//	}
//	Node* current = list->head;
//	for (int i = 0; i < index - 1; i++)
//	{
//		current = current->next;
//	}
//	Node* temp = current->next;
//	current->next = temp->next;
//	temp->next->previous = current;
//	free(temp);
//	list->size--;
//}
//
//void UpdataList(LinkedList* list, int index, eleType element)
//{
//	if (index < 0 || index >= list->size)
//	{
//		printf("Invalid index\n");
//		return;
//	}
//	Node* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	current->data = element;
//}
//
//Node* Get(LinkedList* list, int index)
//{
//	if (index < 0 || index >= list->size)
//	{
//		printf("Invalid index\n");
//		return NULL;
//	}
//	Node* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	return current;
//}
//
//int GetSizeList(LinkedList* list)
//{
//	return list->size;
//}
//
//void PrintList(LinkedList* list)
//{
//	Node* current = list->head;
//	while (current!= NULL)
//	{
//		printf("%d ->", current->data);
//		current = current->next;
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	LinkedList list;
//	InitList(&list);
//	for (int i = 0; i < 10; i++)
//	{
//		Append(&list, i);
//	}
//	PrintList(&list);
//	RemoveHead(&list);
//	RemoveTrail(&list);
//	Remove(&list, 0);
//	int size = GetSizeList(&list);
//	UpdataList(&list, size - 1,100);
//	PrintList(&list);
//	DestoryList(&list);
//	return 0;
//}
//#pragma endregion


//#pragma region 不带头节点的单向链表
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//#define eleType int
//
//typedef struct Node
//{
//	eleType data;
//	struct Node* next;
//}Node;
//
//typedef struct LinkedList
//{
//	Node* head;
//	int size;
//}LinkedList;
//
//void InitList(LinkedList* list)
//{
//	list->head = NULL;
//	list->size = 0;
//}
//
//void DestoryList(LinkedList* list)
//{
//	while (list->head != NULL)
//	{
//		Node* temp = list->head;
//		list->head = temp->next;
//		free(temp);
//	}
//	list->head = NULL;
//	list->size++;
//}
//
//void InsertHead(LinkedList* list,eleType element)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = element;
//	newNode->next = list->head;
//	list->head = newNode;
//	list->size++;
//}
//
//void Append(LinkedList* list, eleType element)
//{
//	if (list->size == 0)
//	{
//		InsertHead(list, element);
//		return;
//	}
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = element;
//	newNode->next = NULL;
//	Node* current = list->head;
//	while (current->next != NULL)
//	{
//		current = current->next;
//	}
//	current->next = newNode;
//	list->size++;
//}
//
//
//void Insert(LinkedList* list, int index, eleType element)
//{
//	if (index < 0 || index > list->size)
//	{
//		printf("Invalid index\n");
//		exit(1);
//	}
//	if (index == 0)
//	{
//		InsertHead(list,element);
//		return;
//	}
//	else if (index = list->size)
//	{
//		Append(list,element);
//		return;
//	}
//	else
//	{
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		newNode->data = element;
//		newNode->next = NULL;
//		Node* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		Node* temp = current->next;
//		current->next = newNode;
//		newNode->next = temp->next;
//		free(temp);
//		list->size++;
//	}
//}
//
//void RemoveHead(LinkedList* list)
//{
//	if (list->size == 0)
//	{
//		return;
//	}
//	Node* temp = list->head;
//	list->head = temp->next;
//	free(temp);
//	list->size--;
//}
//
//void RemoveTrail(LinkedList* list)
//{
//	if (list->size == 0)
//	{
//		printf("Empty\n");
//		exit(1);
//	}
//	Node* current = list->head;
//	while (current->next->next != NULL)
//	{
//		current = current->next;
//	}
//	Node* temp = current->next;
//	current->next = NULL;
//	free(temp);
//	list->size--;
//}
//
//void Remove(LinkedList* list,int index)
//{
//	if (index < 0 || index > list->size)
//	{
//		printf("Invalid index\n");
//		exit(1);
//	}
//	if (index == 0)
//	{
//		RemoveHead(list);
//		return;
//	}
//	else if (index = list->size)
//	{
//		RemoveTrail(list);
//		return;
//	}
//	else
//	{
//		Node* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		Node* temp = current->next;
//		current->next = temp->next;
//		free(temp);
//		list->size--;
//	}
//}
//
//void Updata(LinkedList* list,int index,eleType element)
//{
//	Node* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	current->data = element;
//}
//
//Node* Get(LinkedList* list, int index)
//{
//	Node* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	return current;
//}
//
//void PrintList(LinkedList* list)
//{
//	Node* current = list->head;
//	while (current != NULL)
//	{
//		printf("%d->", current->data);
//		current = current->next;
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	LinkedList list;
//	InitList(&list);
//	InsertHead(&list,10);
//	Append(&list, 30);
//	Append(&list, 40);
//	Insert(&list, 1, 20);
//	PrintList(&list);// 10 20 30 40
//	RemoveHead(&list);
//	RemoveTrail(&list);
//	Remove(&list, 1);
//	PrintList(&list);// 30
//	Updata(&list, 0, 100);
//	PrintList(&list);//100
//	DestoryList(&list);
//	printf("1");
//	return 0;
//}
//#pragma endregion


//#pragma region 带头节点的单向链表
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//#define eleType int
//
//typedef struct Node
//{
//	eleType data;
//	struct Node* next;
//}Node;
//
//typedef struct LinkedList
//{
//	Node* head;
//	int size;
//}LinkedList;
//
//void InitList(LinkedList* list)
//{
//	list->head = (Node*)malloc(sizeof(Node));
//	list->head->data = 0;
//	list->head->next = NULL;
//	list->size = 0;
//}
//
//void DestoryList(LinkedList* list)
//{
//	while (list->head->next != NULL)
//	{
//		Node* temp = list->head->next;
//		list->head->next = temp->next;
//		free(temp);
//	}
//	free(list->head);
//	list->head = NULL;
//	list->size = 0;
//}
//
//void InsertHead(LinkedList* list, eleType element)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = element;
//	newNode->next = NULL;
//	newNode->next = list->head->next;
//	list->head->next = newNode;
//	list->size++;
//}
//
//void Append(LinkedList* list, eleType element)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = element;
//	newNode->next = NULL;
//	Node* current = list->head;
//	while (current->next != NULL)
//	{
//		current = current->next;
//	}
//	current->next = newNode;
//	list->size++;
//}
//
//void Insert(LinkedList* list, int index, eleType element)
//{
//
//	if (index == 0)
//	{
//		InsertHead(list, element);
//		return;
//	}
//	else if (index == list->size)
//	{
//		Append(list, element);
//		return;
//	}
//	else
//	{
//		Node* newNode = (Node*)malloc(sizeof(Node));
//		newNode->data = element;
//		newNode->next = NULL;
//		Node* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		newNode->next = current->next;
//		current->next = newNode;
//		list->size++;
//	}
//}
//
//void RemoveHead(LinkedList* list)
//{
//	Node* temp = list->head->next;
//	list->head->next = temp->next;
//	free(temp);
//	list->size--;
//}
//void RemoveTrail(LinkedList* list)
//{
//	Node* current = list->head;
//	while (current->next->next != NULL)
//	{
//		current = current->next;
//	}
//	free(current->next);
//	current->next = NULL;
//	list->size--;
//}
//void Remove(LinkedList* list, int index)
//{
//	if (index < 0 || index > list->size)
//	{
//		printf("Invalid index\n");
//		exit(1);
//	}
//	else if (index == 0)
//	{
//		RemoveHead(list);
//		return;
//	}
//	else if (index == list->size)
//	{
//		RemoveTrail(list);
//		return;
//	}
//	else
//	{
//		Node* current = list->head;
//		for (int i = 0; i < index - 1; i++)
//		{
//			current = current->next;
//		}
//		Node* temp = current->next;
//		current->next = temp->next;
//		free(temp);
//		list->size--;
//	}
//}
//
//void Updata(LinkedList* list, int index, eleType element)
//{
//	Node* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	current->data = element;
//}
//
//Node* Get(LinkedList* list,int index)
//{
//	Node* current = list->head;
//	for (int i = 0; i < index; i++)
//	{
//		current = current->next;
//	}
//	return current;
//}
//
//void PrintList(LinkedList* list)
//{
//	Node* current = list->head->next;
//	while (current != NULL)
//	{
//		printf("%d->", current->data);
//		current = current->next;
//
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	LinkedList list;
//	InitList(&list);
//	InsertHead(&list,10);
//	Append(&list, 30);
//	Append(&list, 40);
//	Insert(&list, 2, 20);
//	PrintList(&list);// 10 20 30 40
//	RemoveHead(&list);
//	RemoveTrail(&list);
//	Remove(&list, 1);
//	PrintList(&list);// 30
//	Updata(&list, 1, 100);
//	PrintList(&list);//100
//	DestoryList(&list);
//	printf("1");
//	return 0;
//}
//#pragma endregion


#pragma region test
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//#define eleType int
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node, * LinkedList;
//
//
//
//LinkedList CreateList()
//{
//	LinkedList head = (Node*)malloc(sizeof(Node));
//	if (head != NULL)
//	{
//		head->next = NULL;
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		return NULL;
//	}
//	return head;
//}
//
//void DetoryList(LinkedList head)
//{
//	while (head != NULL)
//	{
//		Node* temp = head;
//		head = temp->next;
//		free(temp);
//	}
//}
//
//void InsertHead(LinkedList head, eleType element)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode != NULL)
//	{
//		newNode->data = element;
//		newNode->next = NULL;
//		head->next = newNode;
//		head->data++;
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//
//}
//
//void PrintList(LinkedList head)
//{
//	Node* current = head->next;
//	while (current != NULL)
//	{
//		printf("%d->", current->data);
//		current = current->next;
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	LinkedList head = CreateList();
//	InsertHead(head, 10);
//	PrintList(head);
//	DetoryList(head);
//	return 0;
//}
#pragma endregion
