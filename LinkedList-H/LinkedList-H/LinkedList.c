#define	_CRT_SECURE_NO_WARNINGS
#include"LinkedList.h"



int main()
{
	LinkedList head = InitList();
	size_t size = 0;
	ListPushBack(head, 10);
	ListPushBack(head, 20);
	ListPushBack(head, 30);
	ListPushBack(head, 40);
	PrintList(head);
	return 0;
}



