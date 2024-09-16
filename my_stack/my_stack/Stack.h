#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//#define EleType int
//#define InitCapacity 10

//typedef struct Stack
//{
//	EleType* data;
//	int top;
//	size_t capacity;
//}Stack;
//
//void InitStack(Stack* stack);
//void PrintStack(Stack* stack);
//
//void StackPush(Stack* stack, EleType e);
//void StackPop(Stack* stack);
//EleType StackTop(Stack* stack);
//bool IsEmpty(Stack* stack);
//size_t StackSize(Stack* stack);

#define Eletype int

typedef struct STNode
{
	Eletype data;
	struct STNode* next;
}STNode;

typedef struct Stack
{
	size_t size;
	STNode* head;
}Stack;

void InitStack(Stack* stack);
void DestoryStack(Stack* stack);
void PrintStack(Stack* stack);


void StackPush(Stack* stack,Eletype e);
void StackPop(Stack* stack);
STNode* StackTop(Stack* stack);




