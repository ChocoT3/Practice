#define  _CRT_SECURE_NO_WARNINGS
#include"Mylib.h"

//void my_strcpy(char* dest,char* src)
//{
//	assert(src != NULL);
//	//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	char* p = NULL;
//	my_strcpy(arr1,p);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//水仙花数；n位，每位的n次方之和等于自身；
//	int count = 0;
//	for(int i = 1;i<100000;i++)
//	{
//		if (i == pow(10, count))
//		{
//			count++;
//		}
//		int ret = 0;
//		int temp = i;
//		//153
//		while (temp)
//		{
//			ret += pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (ret == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	printf("Finished");
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int temp = (2 * n - 1) / 2;
//
//	for (int i = 1; i <n ; i++)
//	{
//		int j = 2*i - 1;
//		for (int h = 0; h < temp; h++)
//		{
//			printf(" ");
//
//		}
//		temp--;
//		while (j)
//		{
//			printf("*");
//			j--;
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	//整型提升
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
	//10000000 00000000 00000000 00000001源码
	//11111111 11111111 11111111 11111111补码
	// char截断11111111
	// 无符号整型提升 00000000 00000000 00000000 11111111源码~255
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	 char a = 128;
//	//10000000 00000000 00000000 10000000源码
//	//11111111 11111111 11111111 10000000补码
//	//char截断10000000
//	//整型提升   11111111 11111111 11111111 10000000
//
//	 int i = -20;
//	 unsigned int j = 10;
//	 printf("%d\n", i + j);
//	 printf("%u\n", a);
//	 printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u ", i);
//		Sleep(1000);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000] = "0";
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d ", strlen(a));
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	int count = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		//printf("hello world\n");
//		count++;
//	}
//	printf("%d ", count);
//	return 0;
//}

//void my_range(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_range(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define A 100
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[A];
//	int arr2[A];
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int u = 0;
//	int l = 0;
//	for (int i = 0; i < m + n; i++)
//	{
//		if (u < m && l < n)
//		{
//			if (arr1[u] <= arr2[l])
//			{
//				printf("%d ", arr1[u]);
//				u++;
//			}
//			else
//			{
//				printf("%d ", arr2[l]);
//				l++;
//			}
//		}
//		else if (u < m)
//		{
//			printf("%d ", arr1[u]);
//			u++;
//		}
//		else if (l < n)
//		{
//			printf("%d ", arr2[l]);
//			l++;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int (*pc)[5] = arr1;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*pc)[i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr[2][3] = { {1,2,3 },{4,5,6}};
//	char (*pc)[3] = (char (*)[3])&arr;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", pc[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//char arr[5] = {0};
//	//char (*pc)[5] = &arr;
//	//for (int i = 0; i < 5; i++) {
//	//	printf("%d ", (*pc)[i]);
//	//}
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = arr;
//
//	return 0;
//}

//void print(int* arr)
//{
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	char* arr[5] = {0};//指针数组，每个元素是char*的指针
//	char* (*parr)[5] = arr;//数组指针，指向arr数组，每个数组元素的类型是char*
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", parr);
//	}
//	return 0;
//}

//void print(int(*p)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print(arr,3,5);
//	return 0;
//}

//总结：
//指针数组，数组里全（是）指针的（数组）。
//数组指针，数组里面全（是）指向这个数组元素的（指）针。

//void menu()
//{
//		printf("***** 1.Add		2.Sub ****\n");
//		printf("***** 3.mul		4.DIv ****\n");
//		printf("***** 0.Exit	****\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("ENTER TOW NUMBER:>");
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("ELECT:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("EXIT");
//			break;
//		case 1:
//			calc(arr[input-1]); 
//			break;
//		case 2:
//			calc((arr[input - 1]));
//			break;
//		case 3:
//			calc((arr[input - 1]));
//			break;
//		case 4:
//			calc((arr[input - 1]));
//			break;
//		default:
//			printf("ELECT FAILED");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//	int a = 0;
//int b = 0;
//int c = 0;
//int arr[] = { 1,2,3,4,5 }; 数组
//int(*parr)[5] = &arr;数组指针
//int* arr[] = (&a, &b, &c);指针数组
//int* pf = Add;函数指针
//int(*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };函数指针数组
//int(*(*ppf[5]))(int, int) = &pf;指向函数指针数组指针
//void BubbleSort(int* arr, int sz)
//{
//	int flag = 1;
//	for (int j = 0; j < sz-1; j++)
//	{
//		for (int i = 0; i < sz - j - 1; i++)
//		{
//			if (arr[i + 1] < arr[i])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//
//
//	sort1
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = i+1; j < sz; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//	sort2
//	int count = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				int temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//				count++;
//			}
//		}
//	}
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//
//int main()
//{
//	int arr[] = { 1,8,7,4,5,6,3,2,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//BubbleSort(arr, sz);
//	qsort(arr, sz, sizeof(int), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//void qsort( 
// void *base, //排序起始位置
// size_t num, //数据长度
// size_t width, 数据类型大小
// int (__cdecl *cmp )(const void *e1, const void *e2 ) //函数指针
// );
//void Swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//
//void BubbleSort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	//int flag = 1;
//	//	for (int j = 0; j < sz-1; j++)
//	//	{
//	//		for (int i = 0; i < sz - j - 1; i++)
//	//		{
//	//			if (cmp((char*)base + i*width, (char*)base + (i+1) * width)>0)
//	//			{
//	//				Swap((char*)base + i * width, (char*)base + (i + 1) * width, width);
//	//				flag = 0;
//	//			}
//	//		}
//	//		if (flag == 1)
//	//			break;
//	//	}
//
//			//sort1
//			for (int i = 0; i < sz; i++)
//			{
//				for (int j = i+1; j < sz; j++)
//				{
//					if (cmp((char*)base + i * width, (char*)base + (i + 1) * width) > 0)
//					{
//						Swap((char*)base + i * width, (char*)base + (i + 1) * width, width);
//					}
//				}
//			}
//}
//
//int cmp_struct_char(const void* e1, const void* e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//int cmp_struct_int(const void* e1, const void* e2)
//{
//	return (*(int*)e2)-(*(int*)e1);
//}
//
//typedef struct stu
//{
//	char name[20];
//	int age;
//}stu;
//
//int main()
//{
//
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	stu s[] = { {"zhangsan",15},{"lisi",25},{"wangwu",35} };
//	int sz2 = sizeof(s) / sizeof(s[0]);
//	BubbleSort(arr,sz,sizeof(arr[0]),cmp_int);
//	BubbleSort(s, sz2, sizeof(s[0]), cmp_struct_char);
//	BubbleSort(s, sz2, sizeof(s[0]), cmp_struct_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%zu\n", sizeof(arr));//6
//	//printf("%zu\n", sizeof(arr+0));//8
//	//printf("%zu\n", sizeof(*arr));//1
//	//printf("%zu\n", sizeof(arr[1]));//1
//	//printf("%zu\n", sizeof(&arr));//8
//	//printf("%zu\n", sizeof(&arr+1));//8
//	//printf("%zu\n", sizeof(&arr[0] + 1));//8
//	////printf("%zu\n", strlen(*arr));//野指针
//	//printf("%zu\n", strlen(&arr));//无'\0'
//	//printf("%zu\n", strlen(&arr+1));//无'\0'
//	//printf("%zu\n", strlen(&arr[0] + 1));//无'\0'
//
//
//	int arr[3][4] = { 0 };
//	printf("%zu\n", sizeof(arr));//48
//	printf("%zu\n", sizeof(arr[0][0]));//4第一个元素
//	printf("%zu\n", sizeof(arr[0]));//16第一行数组名
//	printf("%zu\n", sizeof(arr[0]+1));//8第二行地址
//	printf("%zu\n", sizeof(*(arr[0]+1)));//4不知道
//	printf("%zu\n", sizeof(arr+1));//8第二行地址
//	printf("%zu\n", sizeof(*(arr+1)));//16第二行数组元素
//	printf("%zu\n", sizeof(&arr[0]+1));//8第二行数组地址
//	printf("%zu\n", sizeof(*(&arr[0] + 1)));//16第二行数组名
//	printf("%zu\n", sizeof(*arr));//16第一行
//	printf("%zu\n", sizeof(arr[3]));//16第三行
//
//	int arr[3][4] = { 0 };
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(arr[0][0]));
//	printf("%zu\n", sizeof(arr[0]));
//	printf("%zu\n", sizeof(arr[0] + 1));
//	printf("%zu\n", sizeof(*(arr[0] + 1)));
//	printf("%zu\n", sizeof(arr + 1));
//	printf("%zu\n", sizeof(*(arr + 1)));
//	printf("%zu\n", sizeof(&arr[0] + 1));
//	printf("%zu\n", sizeof(*(&arr[0] + 1)));
//	printf("%zu\n", sizeof(*arr));
//	printf("%zu\n", sizeof(arr[3]));
//
//
//
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//	int arr[3][4] = { 0 };  // 定义一个 3x4 的二维数组，总共 12 个元素，每个元素初始化为 0
//
//	printf("%zu\n", sizeof(arr));//48          // 输出整个数组的大小，3*4*sizeof(int) = 48 个字节 (假设 int 是 4 个字节)
//
//	printf("%zu\n", sizeof(arr[0][0]));//4    // 输出第一个元素的大小，sizeof(int) = 4 个字节
//
//	printf("%zu\n", sizeof(arr[0]));//16       // 输出第一行的大小，4*sizeof(int) = 16 个字节
//
//	printf("%zu\n", sizeof(arr[0] + 1));      // 输出指针的大小，arr[0] + 1 是指向第二个元素的指针，通常指针大小为 8 个字节 (在 64 位系统上)
//
//	printf("%zu\n", sizeof(*(arr[0] + 1)));//4   // 解引用指针，访问第二个元素的大小，sizeof(int) = 4 个字节
//
//	printf("%zu\n", sizeof(arr + 1));//8      // 输出指针的大小，arr + 1 是指向第二行的指针，通常为 8 个字节 (在 64 位系统上)
//
//	printf("%zu\n", sizeof(*(arr + 1)));   // 解引用指针，访问第二行的大小，4*sizeof(int) = 16 个字节
//
//	printf("%zu\n", sizeof(&arr[0] + 1));//8  // 输出指针的大小，&arr[0] + 1 是指向第二行的指针，通常为 8 个字节 (在 64 位系统上)
//
//	printf("%zu\n", sizeof(*(&arr[0] + 1)));//16   // 解引用指针，访问第二行的大小，4*sizeof(int) = 16 个字节
//
//	printf("%zu\n", sizeof(*arr));//16         // 解引用指针，访问第一行的大小，4*sizeof(int) = 16 个字节
//
//	printf("%zu\n", sizeof(arr[3]));//16       // 输出第四行（超出范围）的大小，但计算 sizeof 不需要有效索引，4*sizeof(int) = 16 个字节
//
//	return 0;
//
//	//arr第一行（地址）  arr[0]第一行  arr[0]+1 第一行第二个元素地址  &arr[0]第一行地址
//	//！！！！！！但是 arr   int（*）【】 == &arr[0]   int（*）【】
//	//！！！！！！     &arr int (*)[3][4]   != arr[0]  int[4]
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d %d ", *(arr + 1), *(ptr - 1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////假设P的值为0x100000.如下表达式的值分别为多少？
////已知，结构体Test的变量大小为20个字节。
// //x86
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//x86
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)((int)arr + 1);
//	printf("%x %x ", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int arr[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = arr[0];
//	printf("%d ", p[0]);
//	return 0;
//}

size_t my_strlen(const char* arr)
{
	assert(arr);
	size_t count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
char* my_strmat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
char* my_strncpy(char* dest, const char* src, size_t count)
{
	assert(dest && src);
	char* start = dest;
	while ((*dest++ = *src++) && count)
		count--;
	if (count)
		while (--count)
			*dest++ = '\0';
	return start;
}
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* start1 = str1;
	const char* start2 = str2;
	while (*start1)
	{
		while (*str2 && *str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return start1;
		start1++;
		str1 = start1;
		str2 = start2;
	}
	return NULL;
}
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* start = dest;
	while (num--)
	{
		*((char*)dest)++ = *((char*)src)++;
	}
	return start;
}
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* start = dest;
	if (dest > src)
	{
		while (num--)
		{
			*((char*)dest+num) = *((char*)src+num);
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest) = *((char*)src);
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	return start;
}
int main()
{
	//char arr1[20] = "abcde";
	//char arr2[] = "aaa";
	//char main[] = "1052937217@qq.com";
	//char tmp[] = "1052937217@qq.com";
	//char sep[] = ".@";
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20];
	//char substr[] = "bba";
	//size_t ret = my_strlen(arr1);
	//my_strcpy(arr1, arr2);
	//my_strmat(arr1, arr1);
	//int ret = my_strcmp(arr1, arr2);
	//my_strncpy(arr1, arr2, 2);
	//strncpy(arr1, arr2, 4);
	//my_strncpy(arr1, arr2, 5);
	//char* p = my_strstr(main, substr);
	//char* ret = NULL;
	//my_memcpy(arr1+2, arr1, 20);
	my_memmove(arr1, arr1 + 2, 20);
	for (int i = 0; i < 10;i++)
	{
		printf("%d ", arr1[i]);
	}
	//for ( ret = strtok(tmp, sep); ret != NULL; ret = strtok(NULL, sep))
	//{
	//	printf("%s\n", ret);
	//}
	//printf("%s\n", p);
	//printf("%s\n", main);

	//if (p != NULL)
	//	printf("%s ", p);
	//else
	//	printf("non-found");
	//return 0;
}

//KMP
//a  b  a  b  c  a  b  c  d  a  b  c  d  e
//-1 0  0  1  2  0  1  2  0  0  1  2  0  0

//a  b  c  a  b  c  a  b  c  a  b  c  d  a  b  c  d  e
//-1 0  0  0  1  2  3  4  5  6  7  8  9  0  1  2  3  0  