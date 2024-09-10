#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
void menu()
{
	printf("0-Eixt\t1-Insert\t2-Delete\t3-Set\t4-Find\t5-Print\t6-Size\n");
}
int main()
{
	SeqList L1;
	SeqListInit(&L1);
	int input = 0;
	int findBy = 0;
	int retSize = 0;
	int retFindByIndex = 0;
	int retFindByElement = 0;
	do
	{
		menu();
		printf("Election:>");
		scanf("%d", &input);
		switch (input)
		{
		case Insert:
			SeqListInsert(&L1);
			break;
		case Delete:
			SeqListDelete(&L1);
			break;
		case Set:
			SeqListSet(&L1);
			break;
		case Find:
			printf("0-Exit\t1-FindByElement\tFindByIndex:>");
			do
			{
				scanf("%d", &findBy);
				if (findBy == 0)
					break;
				else if (findBy == 1)
				{
					retFindByElement = SeqListFindByElement(&L1);
					printf("%d", retFindByElement);
					break;
				}
				else if (findBy == 2)
				{
					retFindByIndex = SeqListFindByIndex(&L1);
					printf("%d", retFindByIndex);
					break;
				}
				else
					printf("Input Again:>");
			} while (findBy);
			break;
		case Print:
			SeqListPrint(&L1);
			break;
		case Size:
			 retSize = SeqListSize(&L1);
			 printf("%d\n", retSize);
			break;
		case Exit:
			printf("Eixt\n");
		default:
			printf("Election Error!\n");
			break;
		}
	} while (input);
	SeqListDestroy(&L1);
	return 0;
}