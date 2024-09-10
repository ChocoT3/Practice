#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


void SeqListInit(SeqList* L1)
{
	assert(L1);
	L1->elements = (int*)calloc(Init_Capacity,sizeof(int));
	L1->size = Init_Capacity;
	L1->capacity = Init_Capacity;
	printf("INITED\n");
}

void SeqListDestroy(SeqList* L1)
{
	assert(L1);
	if (L1->elements)
	{
		free(L1->elements);
		L1->elements = NULL;
	}
}

int SeqListSize(SeqList* L1)
{
	assert(L1);
	return L1->size;
}

void SeqListInsert(SeqList* L1)
{
	assert(L1);
	int index = 0;
	int element = 0;
	int* newElements = NULL;
	printf("Enter Index And Element To Insert:>");
	scanf("%d %d", &index, &element);
	if (index < 0 || index > L1->size)
	{
		printf("Invalid index\n");
		return;
	}
	if (L1->size == L1->capacity)
	{
		
		newElements = (int*)realloc(L1->elements, sizeof(int) * L1->capacity * 2);
		if (newElements == NULL)
		{
			printf("%s\n", strerror(errno));
			return;
		}
		L1->elements = newElements;
		L1->capacity *= 2;
	}
	for (int i = L1->size; i > index; i--)
	{
		L1->elements[i] = L1->elements[i - 1];
	}
	L1->elements[index] = element;
	L1->size++;
}

void SeqListDelete(SeqList* L1)
{
	assert(L1);
	int index = 0;
	printf("Enter Index To Delete:>");
	scanf("%d", &index);
	if (index < 0 || index > L1->size)
	{
		printf("Invalid index\n");
		return;
	}
	for (int i = index; i < L1->size-1; i++)
	{
		L1->elements[i] = L1->elements[i + 1];
	}
	L1->size--;
}

int SeqListFindByElement(SeqList* L1)
{
	assert(L1);
	int element = 0;
	printf("Enter Element TO Find:>");
	scanf("%d", &element);
	for (int i = 0; i < L1->size; i++)
	{
		if (L1->elements[i] == element)
		{
			return i;
		}
	}
	return -1;
}	


int SeqListFindByIndex(SeqList* L1)
{
	assert(L1);
	int index = 0;
	printf("Enter Index To Find:>");
	scanf("%d", &index);
	if (index < 0 || index > L1->size)
	{
		printf("Invalid index\n");
		return -1;
	}
	return L1->elements[index];
}

void SeqListSet(SeqList* L1)
{
	assert(L1);
	int index = 0;
	int element = 0;
	printf("Enter Index And Element To Set:>");
	scanf("%d %d", &index, &element);
	if (index < 0 || index > L1->size)
	{
		printf("Invalid index\n");
		return;
	}
	L1->elements[index] = element;
}


void SeqListPrint(SeqList* L1)
{
	for (int i = 0; i < L1->size; i++)
	{
		printf("%d ", L1->elements[i]);
	}
	printf("\n");
	return;
}
