#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

#define Init_Capacity 10

typedef struct SequentialList
{
	int* elements;
	int size;
	int capacity;
}SeqList;

typedef enum Opration
{
	Exit,
	Insert,
	Delete,
	Set,
	Find,
	Print,
	Size
}Opration;

void SeqListInit(SeqList* L1);
void SeqListDestroy(SeqList* L1);
int SeqListSize(SeqList* L1);
void SeqListInsert(SeqList* L1);
void SeqListDelete(SeqList* L1);
int SeqListFindByElement(SeqList* L1);
int SeqListFindByIndex(SeqList* L1);
void SeqListSet(SeqList* L1);
void SeqListPrint(SeqList* L1);
