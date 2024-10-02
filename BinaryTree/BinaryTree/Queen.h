#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

struct BinaryTreeNode;

 
typedef struct BinaryTreeNode* Eletype;

typedef struct QNode
{
	Eletype data;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void InitQueue(Queue* queue);
void DestoryQueue(Queue* queue);
void PrintQueue(Queue* queue);

void QueuePush(Queue* queue,Eletype e);
void QueuePop(Queue* queue);
Eletype QueueFront(Queue* queue);
Eletype QueueBack(Queue* queue);
size_t QueueSize(Queue* queue);
bool IsEmpty(Queue* queue);