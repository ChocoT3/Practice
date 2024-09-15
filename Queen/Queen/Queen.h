#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

#define eleType int

typedef struct QueueNode {
	eleType data;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void InitQueen(Queue* Queue);
void QueuePush(Queue* Queue, eleType e);