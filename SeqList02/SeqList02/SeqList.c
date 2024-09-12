#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

// ÷∏’Î–¥∑®
int main()
{
	SeqList sl;
	InitSeqList(&sl,InitCapacity);
	for (int i = 0; i < 12; i++)
	{
		SeqListPushBack(&sl, i);
	}// 0 1 2 3 4 5 6 7 8 9 10 11
	SeqListPushFront(&sl, 10);//10 0 1 2 3 4 5 6 7 8 9 10 11
	SeqListPushBack(&sl, 20);//10 0 1 2 3 4 5 6 7 8 9 10 11 20
	SeqListPushBack(&sl, 30);//10 0 1 2 3 4 5 6 7 8 9 10 11 20 30
	SeqListPopFront(&sl);// 0 1 2 3 4 5 6 7 8 9 10 11 20 30
	SeqListPopBack(&sl);// 0 1 2 3 4 5 6 7 8 9 10 11 20
	SeqListInsert(&sl, 0, 100);//100 0 1 2 3 4 5 6 7 8 9 10 11 20
	SeqListPop(&sl, 0);// 0 1 2 3 4 5 6 7 8 9 10 11 20
	SeqListPop(&sl, 2);// 0 1 2 3 4 5 6 7 8 9 10 11 20
	PrintList(&sl);
	printf("%zu ", GerSizeSeq(&sl));
	return 0;
}