//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//
////void menu()
////{
////	printf("*******************\n");
////	printf("***** 1.paly ******\n");
////	printf("***** 0.exit ******\n");
////	printf("*******************\n");
////}
////
////void game()
////{
////	int guess = 0;
////	int ret = rand()%100+1;
////
////	do {
////		printf("����������:>");
////		scanf("%d", &guess);
////		if (guess > ret) printf("�´���\n");
////		else if (guess < ret) printf("��С��\n");
////		else
////		{
////			printf("�¶���\n");
////			break;
////		}
////	} while (1);
////
////}
////int main()
////{
////
////	srand((unsigned int)time(NULL));
////	int input = 0;
////	do
////	{
////		menu();
////		printf("��ѡ��:>");
////		scanf("%d", &input);
////		if (-1 == input)
////		{
////			break;
////		}
////		switch (input)
////		{
////			case 1:
////				game();
////				break;
////			case 2:
////				printf("�˳���Ϸ");
////				break;
////		default:
////			printf("ѡ���������ѡ��");
////			break;
////		}
////	} while (input);
////	printf("����");
////
////	return 0;
////}
//
//int main()
//{	
//    char arr1[] = "welcome to bit...";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //whileѭ��ʵ��
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //forѭ��ʵ��
//    for (left = 0, right = strlen(src) - 1;
//        left <= right;
//        left++, right--)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", target);
//    }
//    retutn 0;
//
//}

////������
//#include <stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//
//#define OVERFLOW -2
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//#define INFEASTIBLE -1
//
//typedef int ElemType;
//#define Init_Size 100
//#define ListIncrement 10
//
//typedef struct
//{
//	ElemType* data;//�׵�ַ
//	int length;//��
//	int capacity;//����
//}SqList;
//
//int Init_List(SqList* L)
//{
//	L->data = (ElemType*)malloc(Init_Size * sizeof(ElemType));
//	if (!L->data) exit(OVERFLOW);//����ʧ��
//	L->capacity = Init_Size;
//	L->length = 0;//��Ϊ0
//	return OK;
//}
//
//
//
//void List_Print(SqList* L)
//{
//	for (int i = 0; i <=L->length - 2; i++)
//	{
//		printf("%d ", L->data[i]);
//	}
//	printf("%d ", L->data[L->length - 1]);
//}
//
//int List_Insert(SqList* L,int pos,int e)
//{
//	int(* newbase) = (int*)malloc(40);
//	if (pos >= 1 && pos <= L->length + 1)
//	{
//		if(L->length >=  L->capacity)
//		{
//			newbase = (ElemType*)realloc(L->data, (L->capacity + ListIncrement) * sizeof(ElemType));
//			if (newbase == NULL)
//			{
//				printf("����ʧ��");
//				return ERROR;
//			}
//			L->data = newbase;
//			L->capacity += ListIncrement;
//		}
//		int* q = &(L->data[L->length - 1]);
//		int* p = &(L->data[pos - 1]);
//		for (q; q >= p; --q)
//		{
//			*(q + 1) = *q;
//		}
//		*p = e;
//		++L->length;
//		return OK;
//	}
//	else
//		return OVERFLOW;
//}
//
//int main()
//{
//	SqList L;
//	int ret_Init = Init_List(&L);
//	if (ret_Init != OK)
//	{
//		printf("����ʧ��");
//		return -1;
//	}
//	for (int i = 1; i < 10; i++)
//	{
//		List_Insert(&L, i, i);
//	}
//	printf("��ʼ��˳��Ϊ: ");
//	List_Print(&L);
//	free(L.data);
//}


//#include<stdio.h>
//
//void bubble_sort(int* arr,int sz)
//{
//	int j = 0;
//	int i = 0;
//	for(i = 0;i < sz - 1;i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int* data;     // �洢���ݵ�ָ��
//    int length;    // ��ǰ��ĳ���
//    int capacity;  // �������
//} DynamicArray;
//
//// ������̬���Ա�
//DynamicArray* createDynamicArray(int capacity) {
//    DynamicArray* array = (DynamicArray*)malloc(sizeof(DynamicArray));
//    if (array == NULL) {
//        printf("Memory allocation failed\n");
//        return NULL;
//    }
//
//    array->data = (int*)malloc(capacity * sizeof(int));
//    if (array->data == NULL) {
//        printf("Memory allocation failed\n");
//        free(array);
//        return NULL;
//    }
//
//    array->length = 0;
//    array->capacity = capacity;
//    return array;
//}
//
//// ��ʼ����̬���Ա�
//void initDynamicArray(DynamicArray* array) {
//    array->length = 0;
//}
//
//// ��ָ��λ�ò���Ԫ��
//void insertElement(DynamicArray* array, int index, int element) {
//    if (index < 0 || index > array->length) {
//        printf("Invalid index\n");
//        return;
//    }
//
//    // ����
//    if (array->length == array->capacity) {
//        int newCapacity = array->capacity * 2;
//        int* newData = (int*)realloc(array->data, newCapacity * sizeof(int));
//        if (newData == NULL) {
//            printf("Memory allocation failed\n");
//            return;
//        }
//        array->data = newData;
//        array->capacity = newCapacity;
//    }
//
//    // ������λ�ú��Ԫ�������ƶ�һλ
//    for (int i = array->length; i > index; i--) {
//        array->data[i] = array->data[i - 1];
//    }
//
//    // ������Ԫ��
//    array->data[index] = element;
//    array->length++;
//}
//
//// ��ӡ���е�Ԫ��
//void printElements(DynamicArray* array) {
//    printf("Elements in the array: ");
//    for (int i = 0; i < array->length; i++) {
//        printf("%d ", array->data[i]);
//    }
//    printf("\n");
//}
//
//// �ͷ��ڴ�
//void freeDynamicArray(DynamicArray* array) {
//    free(array->data);
//    free(array);
//}
//
//int main() {
//    DynamicArray* array = createDynamicArray(10);
//    if (array == NULL) {
//        return 1;
//    }
//
//    initDynamicArray(array);
//
//    // ����Ԫ��
//    insertElement(array, 0, 10);
//    insertElement(array, 1, 20);
//    insertElement(array, 2, 30);
//
//    // ��ӡ���е�Ԫ��
//    printElements(array);
//
//    // �ͷ��ڴ�
//    freeDynamicArray(array);
//
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//
//typedef int ElemType;
//
//#define Init_Size 10
//#define Increasing 10
//
//
//#define ERROR -1
//#define OK 1
//
//typedef struct
//{
//	ElemType* data;
//	ElemType length;
//	ElemType capacity;
//}Sq_List;
//
//void Init_Sq_List(Sq_List* L)
//{
//	ElemType* newbase = (ElemType*)malloc(Init_Size * sizeof(ElemType));
//	 newbase = (ElemType*)malloc(Init_Size * sizeof(ElemType));
//
//
//	if (newbase == NULL)
//	{
//		printf("����ʧ��");
//		exit(EXIT_FAILURE);
//	}
//	L->data = newbase;
//	L->length = Init_Size;
//	L->capacity = Init_Size;
//
//}
//
//int List_Insert(Sq_List* L,int pos,int e){
//	ElemType* newbase = (ElemType*)malloc(Init_Size);
//	if (pos >= 0 && pos <= L->length + 1)
//	{
//		if (L->length >= L->capacity)
//		{
//			newbase = (ElemType*)realloc(L->data, (L->capacity + Increasing) * sizeof(ElemType));
//			if (newbase == NULL)
//			{
//				printf("����ʧ��");
//				exit(EXIT_FAILURE);
//			}
//			L->data = newbase;
//			L->capacity += Increasing;
//		}
//		for (int i = L->length;i >= pos;i--)
//		{
//			L->data[i] = L->data[i -1];
//		} 
//		L->data[pos - 1] = e;
//		L->length++;
//	}
//	else
//	{
//		return ERROR;
//	}
//}
//
//void Sq_List_Print(Sq_List* L)
//{
//	printf("��ӡ���Ա�:> ");
//	for (int i = 0; i < L->length; i++)
//	{
//		printf("%d ", L->data[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	Sq_List L;
//	Init_Sq_List(&L);
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = 0;
//		printf("%d ", L.data[i]);
//	}
//	printf("\n");
//	int pos = 0;
//	int e = 0;
//	//scanf("%d %d",&pos,&e);
//	//List_Insert(&L, pos, e);
//	List_Insert(&L, 2, 30);
//	//List_Insert(&L, 3, 40);
//	//List_Insert(&L, 4, 50);
//	Sq_List_Print(&L);
//	free(L.data);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//    int* data;     // �洢���ݵ�ָ��
//    int length;    // ��ǰ��ĳ���
//    int capacity;  // �������
//} LinearList;
//
//void initLinearList(LinearList* list, int initialCapacity) {
//    list->data = (int*)calloc(initialCapacity, sizeof(int));
//    if (list->data == NULL) {
//        printf("�ڴ����ʧ��\n");
//        exit(EXIT_FAILURE);
//    }
//    list->length = 0;
//    list->capacity = initialCapacity;
//}
//
//void modifyElement(LinearList* list, int index, int newValue) {
//    if (index < 0 || index >= list->length) {
//        printf("�޸�λ�÷Ƿ�\n");
//        return;
//    }
//
//    list->data[index] = newValue;
//}
//
//void printElements(const LinearList* list) {
//    printf("���е�Ԫ��: ");
//    for (int i = 0; i < list->length; i++) {
//        printf("%d ", list->data[i]);
//    }
//    printf("\n");
//}
//
//void freeLinearList(LinearList* list) {
//    free(list->data);
//    list->data = NULL;
//    list->length = 0;
//    list->capacity = 0;
//}
//
//int main() {
//    LinearList list;
//    initLinearList(&list, 5);
//
//    list.length = 3;
//    list.data[0] = 10;
//    list.data[1] = 20;
//    list.data[2] = 30;
//
//    printElements(&list);
//
//    modifyElement(&list, 1, 50);
//
//    printElements(&list);
//
//    freeLinearList(&list);
//
//    return 0;
//}
// 
// 
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",arr[4]);
//	int* p = arr;
//	*(p + 4) = 5;
//	arr[4] = 4;
//	printf("%d \n" ,arr[4]);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//
//#define Init_Size 10
//#define Increasing 10
//
//#define ERROR -1
//#define OK 1
//
//typedef struct {
//    ElemType* data;
//    ElemType length;
//    ElemType capacity;
//} Sq_List;
//
//int Init_Sq_List(Sq_List* L) {
//    ElemType* newbase = (ElemType*)malloc(Init_Size * sizeof(ElemType));
//    if (newbase == NULL) {
//        printf("����ʧ��");
//        exit(EXIT_FAILURE);
//    }
//    L->data = newbase;
//    L->length = Init_Size;
//    L->capacity = Init_Size;
//    return OK;
//}
//
//void List_Insert(Sq_List* L, int pos, int e) {
//    ElemType* newbase = (ElemType*)realloc(L->data, (L->capacity + Increasing) * sizeof(ElemType));
//    if (newbase == NULL) {
//        printf("����ʧ��");
//        exit(EXIT_FAILURE);
//    }
//    L->data = newbase;
//    L->capacity += Increasing;
//
//    if (pos >= 0 && pos <= L->length + 1) {
//        for (int i = L->length; i >= pos; i--) {
//            L->data[i] = L->data[i - 1];
//        }
//        L->data[pos - 1] = e;
//        L->length++;
//    }
//    else {
//        return ERROR;
//    }
//}
//
//void Sq_List_Print(Sq_List* L) {
//    printf("��ӡ���Ա�:> ");
//    for (int i = 0; i < L->length; i++) {
//        printf("%d ", L->data[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    Sq_List L;
//    Init_Sq_List(&L);
//    for (int i = 0; i < L.length; i++) {
//        L.data[i] = 0;
//        printf("%d ", L.data[i]);
//    }
//    printf("\n");
//    int pos = 0;
//    int e = 0;
//    //scanf("%d %d",&pos,&e);
//    //List_Insert(&L, pos, e);
//    List_Insert(&L, 2, 30);
//    //List_Insert(&L, 3, 40);
//    //List_Insert(&L, 4, 50);
//    Sq_List_Print(&L);
//    free(L.data);
//    return 0;
//}



