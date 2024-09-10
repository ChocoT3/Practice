#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

typedef int ElemType;

#define Init_Size 10
#define Increasing 5

typedef struct
{
	ElemType* data;
	int length;
	int capacity;
}Sq_Linear;

void Init_Linear(Sq_Linear* list)
{
	list->data = (ElemType*)calloc(Init_Size,sizeof(ElemType));
	if (list->data == NULL)
	{
		printf("申请失败");
		exit(EXIT_FAILURE);
	}
	list->length = Init_Size;
	list->capacity = Init_Size;
}

int Is_Empty(Sq_Linear* list)
{
	if (list->length == 0) return 1;
	else return 0;
}

void Expand_Linear(Sq_Linear* list)
{
	int newCapacity = list->capacity + Increasing;
	if (newCapacity >= INT_MAX)
	{
		printf("扩容失败");
		exit(EXIT_FAILURE);
	}
	ElemType* newbase = (ElemType*)realloc(list->data, newCapacity * sizeof(ElemType));
	if (newbase == NULL)
	{
		printf("扩容失败");
		exit(EXIT_FAILURE);
	}
	list->data = newbase;
	list->capacity = newCapacity;
}

//头插
void tou_Insert_Linear(Sq_Linear* list,int pos,ElemType e)
{
	if (pos < 1 || pos > list->length + 1)
	{
		printf("位置非法\n");
		exit(EXIT_FAILURE);
	}

	if (list->length >= list->capacity)
	{
		Expand_Linear(list);
	}

	if (Is_Empty(list))
	{
		list->data[0] = e;
		list->length++;
	}
	else
	{
		for(int i = list->length - 1; i >= 0; i--)
		{
			list->data[i + 1] = list->data[i];
		}
		list->data[pos - 1] = e;
		list->length++;
	}

}

//尾插
void wei_Insert_Linear(Sq_Linear* list, int pos, ElemType e)
{
	if (pos < 1 || pos > list->length + 1)
	{
		printf("位置非法\n");
		exit(EXIT_FAILURE);
	}

	if (list->length >= list->capacity)
	{
		Expand_Linear(list);
	}

	if (Is_Empty(list))
	{
		list->data[0] = e;
		list->length++;
	}
	else
	{
		list->data[list->length] = e;
		list->length++;
	}

	//中间插

}
void Print(Sq_Linear* list)
{
	printf("线性表元素: ");
	for (int i = 0; i < list->length; i++)
	{
		printf("%d ", list->data[i]);
	}
	printf("\n");
}

void Free_Linear(Sq_Linear* list)
{
	free(list->data);
	list->data = NULL;
	list->capacity = 0;
	list->length = 0;
}

int main()
{
	Sq_Linear L;
	Init_Linear(&L);
	Print(&L);
	for (int i = 1; i <= 11; i++)
	{
		wei_Insert_Linear(&L, i, 10);
	}
	Print(&L);
	Free_Linear(&L);
	return 0;
}