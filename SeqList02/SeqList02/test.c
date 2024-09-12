#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
void InitSeqList(SeqList* sl,size_t capacity)
{
	EleType* NewPtr = (EleType*)malloc(sizeof(EleType) * capacity);
	if (NewPtr != NULL)
	{
		sl->data = NewPtr;
		memset(sl->data, 0, sizeof(EleType) * capacity);
		sl->size = 0;
		sl->capacity = capacity;
	}
	else
	{
		printf("Memory Allocated Faild\n");
		exit(1);
	}
}
//void DestoryList(SeqList* sl)
//{
//
//}
void IsFull(SeqList* sl)
{
	if (sl->size == sl->capacity)
	{
		EleType* NewPtr = (EleType*)realloc(sl->data, sizeof(EleType) * sl->capacity * 2);
		if (NewPtr != NULL)
		{
			sl->data = NewPtr;
			return;
		}
		else
		{
			printf("Memory Allocated Failed\n");
			exit(1);
		}
	}
	return;
}
void SeqListPushFront(SeqList* sl,EleType element)
{
	IsFull(sl);
	size_t i = 0;
	for ( i = sl->size; i > 0; i--)
	{
		sl->data[i] = sl->data[i - 1];
	}
	sl->data[i] = element;
	sl->size++;
}
void SeqListPushBack(SeqList* sl, EleType element)
{
	IsFull(sl);
	sl->data[sl->size++] = element;
}
void SeqListInsert(SeqList* sl, size_t index, EleType element)
{
	if (index > sl->size)
	{
		printf("Invalid Index\n");
		exit(1);
	}
	else if (index == 0)
	{
		SeqListPushFront(sl, element);
		return;
	}
	else if (index == sl->size)
	{
		SeqListPushBack(sl, element);
		return;
	}
	else
	{
		IsFull(sl);
		for (size_t i = sl->size; i > index; i--)
		{
			sl->data[i] = sl->data[i - 1];
		}
		sl->data[index] = element;
		sl->size++;
	}
}
void SeqListPopBack(SeqList* sl)
{
	sl->size--;
}
void SeqListPopFront(SeqList* sl)
{
	for (size_t i = 0; i < sl->size - 1; i++)
	{
		sl->data[i] = sl->data[i + 1];
	}
	sl->size--;
}
void SeqListPop(SeqList* sl, size_t index)
{
	if (index >= sl->size)
	{
		printf("Invalid Index\n");
		exit(1);
	}
	else if (index == 0)
	{
		SeqListPopFront(sl);
		return;
	}
	else if (index == sl->size - 1)
	{
		SeqListPopBack(sl);
		return;
	}
	else
	{
		for (size_t i = index; i < sl->size - 1; i++)
		{
			sl->data[i] = sl->data[i + 1];
		}
		sl->size--;
	}
}
size_t GerSizeSeq(SeqList* sl)
{
	return sl->size;
}
void PrintList(SeqList* sl)
{
	for (int i = 0; i < sl->size; i++)
	{
		printf("%d ", sl->data[i]);
	}
	printf("\n");
}





