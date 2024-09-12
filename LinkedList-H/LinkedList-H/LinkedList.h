#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>

#define EleType int

typedef struct Node
{
	struct Node* next;
	struct Node* prev;
	EleType data;
}Node,*LinkedList;

LinkedList InitList();
void ListPushFront(LinkedList head, EleType e);
void ListPushBack(LinkedList head, EleType e);
void ListPopFront(LinkedList head);
void ListPopBack(LinkedList head);
void PrintList(LinkedList head);
