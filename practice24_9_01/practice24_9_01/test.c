#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void menu()
{
	printf("**********  1.add           2.del  *********\n");
	printf("**********  3.search        4.modify *******\n");
	printf("**********  5. show         6.sort *********\n");
	printf("**********  0.exit                 *********\n");
}

//int main()
//{
//	contact con;
//	InitPeoInfo(&con);
//	int input = 0;
//	void(*p[])() = {Exit,AddPeo ,DelPeo,SearchPeo,ModifyPeo,ShowPeoInfo,SortPeo,DestroyContact};
//	do
//	{
//		menu();
//		printf("Input Your Election:>");
//		scanf("%d", &input);
//		p[input](&con);
//	} while (input);
//	return 0;
//}


int removeElement(int* nums, int numsSize, int val) {
	
}
int main()
{
	int arr[] = {1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = removeElement(arr, sz, 1);
	for (int i = 0; i < ret; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
