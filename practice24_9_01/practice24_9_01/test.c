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


int main()
{
	int arr[][3] = { {1,2,3},{2,3,4} };
	int (*parr)[3] = arr;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ",*(*(parr + i)+j));
		}
		printf("\n");
	}
	return 0;
}


