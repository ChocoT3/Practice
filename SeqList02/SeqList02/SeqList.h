#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

#define EleType int
#define InitCapacity 10
#define N 100

typedef struct SeqList
{
	EleType* data;
	size_t size;
	size_t capacity;
}SeqList;

void InitSeqList(SeqList* sl,size_t capacity);
void SeqListPushBack(SeqList* sl,EleType element);
void SeqListPushFront(SeqList* sl,EleType element);
void SeqListInsert(SeqList* sl, size_t index, EleType element);
void SeqListPopBack(SeqList* sl);
void SeqListPopFront(SeqList* sl);
void SeqListPop(SeqList* sl, size_t index);
void PrintList(SeqList* sl);
size_t GerSizeSeq(SeqList* sl);



