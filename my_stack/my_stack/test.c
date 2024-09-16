#define	_CRT_SECURE_NO_WARNINGS
#include"Stack.h"

//void InitStack(Stack* stack)
//{
//	stack->data = (EleType*)malloc(sizeof(EleType)*InitCapacity);
//	stack->capacity = InitCapacity;
//	stack->top = -1;
//}
//void StackPush(Stack* stack, EleType e)
//{
//	if (stack->top == stack->capacity)
//	{
//		EleType* newPtr = (EleType*)realloc(stack->data, sizeof(EleType) * stack->capacity * 2);
//		if (newPtr != NULL)
//		{
//			stack->data = newPtr;
//		}
//		else
//		{
//			printf("memory allocated failed!");
//			exit(-1);
//		}
//	}
//	stack->top++;
//	stack->data[stack->top] = e;
//}
//
//void StackPop(Stack* stack)
//{
//	if (stack->top != -1)
//	{
//		stack->top--;
//	}
//}
//
//EleType StackTop(Stack* stack)
//{
//	return stack->data[stack->top];
//}
//
//bool IsEmpty(Stack* stack)
//{
//	if (stack->top == -1)
//		return true;
//	else
//		return false;
//}
//size_t StackSize(Stack* stack)
//{
//	return stack->top + 1;
//}
//
//
//void PrintStack(Stack* stack)
//{
//	int temp = stack->top;
//	while (temp != -1)
//	{
//		printf("%d ", stack->data[temp]);
//		temp--;
//	}
//	printf("\n");
//}


//--------------------------------------------------------------------------------------------------------------------------------------------------------
void InitStack(Stack* stack)
{
	stack->head = NULL;
}
void DestoryStack(Stack* stack)
{
	STNode* cur = stack->head;
	while (cur)
	{
		STNode* temp = stack->head;
		cur = temp->next;
		free(temp);
	}
}

void StackPush(Stack* stack, Eletype e)
{
	STNode* newNode = (STNode*)malloc(sizeof(STNode));
	if (newNode != NULL)
	{
		newNode->data = e;
		newNode->next = stack->head;
		stack->head = newNode;
		stack->size++;
	}
	else
	{
		printf("memory allocated failed!\n");
		exit(-1);
	}
}

void StackPop(Stack* stack)
{
	if (stack->head != NULL)
	{
		STNode* cur = stack->head;
		stack->head = cur->next;
		free(cur);
		stack->size--;
	}
	else
	{
		printf("Stack Empty!\n");
		exit(-1);
	}
}

STNode* StackTop(Stack* stack)
{
	return stack->head;
}

void PrintStack(Stack* stack)
{
	if (stack->head != NULL)
	{
		STNode* cur = stack->head;
		while (cur)
		{
			printf("%d->", cur->data);
			cur = cur->next;
		}
		printf("NULL\n");
	}
	else
	{
		printf("Stack Empty!");
		exit(-1);
	}

}






