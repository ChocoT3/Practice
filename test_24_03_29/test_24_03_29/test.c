#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#pragma region 初识结构体
//typedef struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//}stu;
//int main()
//{
//	stu s = { "zhangsan",20,"male","16608230614" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	return 0;
//}
#pragma endregion

#pragma region getchar的使用
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码>: ");
//	scanf("%s", password);
//	int ch = 0;
//	printf("%s\n", password);
//	while (ch = getchar() != '\n')
//	{
//			;
//	}
//
//	printf("请确认密码:>(Y/N)");
//	int ret = getchar();
//	if (ret == 'Y')
//		printf("y\n");
//	else
//	{
//		printf("n\n");
//	}
//	return 0;
//}  
#pragma endregion

#pragma region 只输出限定asc码范围内的字符
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch != '\0')
//		{
//			if (ch < '0' || ch > '9')
//				continue;
//			else
//			{
//				printf("%c", ch);
//				continue;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}  
#pragma endregion

#pragma region 输出对应ASC码数值'0'-48 'A'-65 'a'-97
//int main()
//{
//	//char input = '\0';
//	//printf("请输入字符>:");
//	//scanf("%c", &input);
//	//printf("%d", input);
//
//	//printf("请输入字符>:");
//	//int ret = getchar();
//	//printf("%d ", ret);
//	return 0;
//}  
#pragma endregion

#pragma region 输入十进制数，输出对应ASC码值
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("请输入数字>:");
//		int input = 0;
//		scanf("%d", &input);
//		putchar(input);
//		printf("\n");
//		i++;
//	}
//	return 0;
//}  
#pragma endregion

#pragma region 输入生日年月日（中间无符号，如20130103），分别输出年月日
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year:%d\n", year);
//	printf("month:%02d\n", month);
//	printf("day:%02d\n", day);
//	return 0;
//}  
#pragma endregion

#pragma region 通过输入数字比较最大值
//int main()
//{
//    int arr[10];
//    int i = 0;
//    int n = 0;
//    printf("你要比较多少个数字?>:");
//    scanf("%d", &n);
//    while (i < n)
//    {
//        printf("输入数字>:");
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = My_Max(arr,sz);
//    printf("max num is %d\n", ret);
//    return 0;
// }  
#pragma endregion

#pragma region 未命名
//int main()
//{
//    float r = 0.0f;
//    printf("Enter ball r >;");
//    scanf("%f", &r);
//    float pai = 3.1415926;
//    float v = 4/3. * pai * r * r * r;//注意格式
//    printf("%.3f", v);
//    return 0;
//}    
#pragma endregion

#pragma region for循环
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)//死循环
//        k++;
//    return 0;
//}  
#pragma endregion

#pragma region 计算 n的阶乘
//int main()
//{
//    int n = 10;
//    int ret = 1;
//    for (int i = 1; i < 11; i++)
//    {
//        ret*=i;
//    }
//    printf("%d", ret);
//    return 0;
//}
#pragma endregion

#pragma region 二分查找
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int k = 7;
//    int left = 0;
//    int right = sz - 1;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (k < arr[mid])
//        {
//            right = arr[mid];
//        }
//        else if (k > arr[mid])
//        {
//            left = arr[mid];
//        }
//        else
//            break;
//    }
//    printf("%d", mid);
//    return 0;
//}  
#pragma endregion

//#include<Windows.h>
//int main()
//{
//    char arr1[] = "hello world!!";
//    char arr2[] = "#############";
//    int left = 0;
//    int right = strlen(arr2) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//        Sleep(1000);
//        system("cls");
//    }
//    printf("%s", arr2);
//    return 0;
//}

//小游戏
//#include<time.h>
//
//void menu()
//{
//    printf("************************\n");
//    printf("******  1.  paly  ******\n");
//    printf("******  0.  exit  ******\n");
//    printf("************************\n");
//}
//
//void game()
//{
//
//    int ret = rand()%100 + 1;//0~RAND_MAX
//    //printf("%d\n", ret);
//    do
//    {
//        printf("请猜数字>:");
//        int  guess = 0;
//        scanf("%d", &guess);
//        if (guess < ret)
//        {
//            printf("小了\n");
//        }
//        else if (guess > ret)
//        {
//            printf("大了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//                break;
//        }
//    } while (1);
//}
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择>:");
//        scanf("%d", &input);
//        switch (input)
//        {   
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏");
//            break;
//        default:
//            printf("输入错误,重新选择");
//            break;
//        }
//    } while (input);
//    printf("游戏结束");
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int b = 20;
//    swap(&a, &b);
//    printf("a = %d b = %d", a, b);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    printf("Prime numbers up to %d are: \n", n);
//    SieveOfEratosthenes(n);
//    return 0;
//}

//int main()
//{
//    int year = 0;
//    printf("Enter A Year: ");
//    scanf("%d", &year);
//    int ret = isLeapYear(year);
//    if (ret == -1)
//    {
//        printf("%d is not leap year\n",year);
//    }
//    else
//        printf("%d is leap year\n",year);
//    return 0;
//}

//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//   int sz = sizeof(arr) / sizeof(arr[0]);
//    int k = 0;
//    printf("Enter Search Number: ");
//    scanf("%d", &k);
//    int ret = binarySearch(arr,k,sz);
//    if (ret == -1)
//        printf("Number not found \n");
//    else
//        printf("Number found ar index %d\n", ret);
//    return 0;
//}

//输入数字，连续输出他的每一位，空格隔开
//int main()
//{
//    char num[10];
//    printf("Enter a number: ");
//    scanf("%s", &num);
//    int sz = strlen(num);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%c ", num[i]);
//    }
//    return 0;
//}

//my_strlen
//int my_strlen(const char* arr)
//{
//    if (*arr == 0)
//        return 0;
//    else
//        return 1 + my_strlen(arr + 1);
//}
//int main()
//{
//    char arr[] = "hello world";
//    int i = 0;
//    int ret = my_strlen(arr);
//    printf("%d", ret);
//    return 0;
//}

//阶乘
//int factorial(int n)
//{
//    if (1 == n)
//        return n;
//    return n * factorial(n-1);
//}
//int main()
//{
//    int n = 0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    int ret = factorial(n);
//    printf("%d",ret);
//    return 0;
//}

//fibonacci sequence 
//int fibonacci(int n)
//{
//    if (0 == n)
//        return 0;
//    else if (1 == n)
//        return 1;
//    return  fibonacci(n-1) + fibonacci(n-2);
//}
//int main()
//{
//
//    int n = 0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    int ret = fibonacci(n);
//    printf("%d", ret);
//    return 0;
//}
// 
// 
//汉诺塔
//void hanoi(int n,char from_rod,char to_rod,char aux_rod)
//{
//    if (n == 1)
//    {
//        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
//        return;
//    }
//    hanoi(n - 1, from_rod, aux_rod, to_rod);
//    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
//    hanoi(n - 1, aux_rod, to_rod, from_rod);
//}
//int main()
//{
//    int n;
//    printf("Enter the number of disks: ");
//    scanf("%d", &n);
//    hanoi(n, 'A', 'B','C');
//    return 0;
//}
//

//反转字符串
//int my_strlen(const char* arr)
//{
//    if (*arr == '\0')
//        return 0;
//    else
//        return 1 + my_strlen(arr + 1);
//}
//void reverse(char* str,int left,int right)
//{
//    if (left >= right)
//        return;
//    char temp = str[left];
//    str[left] = str[right];
//    str[right] = temp;
//    reverse(str, left + 1, right - 1);
//}
//int main()
//{
//    char str[] = "hello world";
//    int length = my_strlen(str);
//    reverse(str,0,length - 1);
//    printf("%s", str);
//    return 0;
//}

//int my_max_helper(const int* arr,int index,int sz)
//{
//
//    if (index == sz - 1)
//        return arr[index];
//    int rest = my_max_helper(arr, index + 1, sz);
//    return arr[index] > rest ? arr[index] : rest;
//}
//
//int my_max(const int* arr, int sz)
//{
//    return my_max_helper(arr,0,sz);
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = my_max(arr, sz);
//    printf("%d", ret);
//    return 0;
//}

//int sum(const int* arr,int index, int sz)
//{
//    if (index == sz - 1)
//        return 0;
//    return   sum(arr, index + 1,sz) + arr[index];
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = sum(arr,0,sz);
//    printf("%d", ret);
//    return 0;
//}

#pragma region Fibonacci Func
//int fibonacci(n)
//{
//    if (n <= 2)
//    {
//        return n;
//    }
//    else
//        return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main()
//{
//    int n;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    int ret = fibonacci(n);
//    printf("%d", ret);
//    return 0;
//}
#pragma endregion
//
//int main()
//{
//	int n = 0;
//	char arr[20] = "0";
//	scanf("%d\n", &n);
//	for (int i = 0; i < 2*n; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	printf("Enter A Num To Delete:>");
//	int Del = 0;
//	scanf("%d", &Del);
//	char DelChar = Del + '0';
//	for (int i = 0; i < 2 * n; i++)
//	{
//		if (Del == arr[i])
//		{
//			for (int j = i; j < 2 * n-1; j++)
//			{
//				arr[j] == arr[++j];
//			}
//			arr[2 * n - 1] = '/0';
//		}
//		i--;
//		n--;
//	}
//	for (int i = 0; i < 2 * n; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
// }


#pragma region 结构体初始化与打印
//struct Peo
//{
//	char name[20];
//	char num[12];
//	char sex[10];
//	int hight;
//};
//
//void Set_Peo(struct Peo* p1)
//{
//	strcpy(p1->name, "zhangsan");
//	strcpy(p1->num, "12312");
//	strcpy(p1->sex, "male");
//	p1->hight = 123;
//
//}
//
//void Print_Peo1(struct Peo* p1)
//{
//	printf("%s %s %s %d\n", p1->name, p1->num, p1->sex, p1->hight);
//}
//
//void Print_Peo2(struct Peo p1)
//{
//	printf("%s %s %s %d\n", p1.name, p1.num, p1.sex, p1.hight);
//}
//
//int main()
//{
//	struct Peo p1 = { 0 };
//	Set_Peo(&p1);
//	Print_Peo1(&p1);//指向地址，不开辟新空间
//	Print_Peo2(p1);//开辟新空间，占内存
//
//	return 0;
//}
#pragma endregion

//Fuc1
//int count_num_of_1(int input)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((input >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//Fuc2
//int count_num_of_1(unsigned int input)
//{
//	int count = 0;
//	while (input)
//	{
//		if (input % 2 == 1)
//		{
//			count++;
//		}
//		input /= 2;
//	}
//	return count;
//}


//Fuc3
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{	
//		n = n & (n - 1);
//		//1111n
//		//1110n-1
//		//1110n
//		//1101n-1
//		//1100n
//		//1001n-1
//		//1000n
//		//0111n-1
//		//0000n
//		count++;
//	}
//	return count;
//}


//判断一个数是不是2^n次方
//if (n & (n - 1) == 0)
//int main()
//{
//	int input1 = 0;
//	scanf("%d", &input1);
//	int ret = count_num_of_1(input1);
//	printf("%d",ret);
//	return 0;
//}

//int main()
//{
//	int a = 10;//1010
//	int i = 0;
//	int temp = 0;
//	//打印奇数位的二进制数
//	for (i = 0; i < 32; i+=2)
//	{
//		temp = (a >> i) & 1;
//		printf("%d ",temp);
//	}
//	//打印偶数位的二进制数
//	printf("\n");
//	for (i = 1; i < 32; i+=2)
//	{
//		temp = (a >> i) & 1;
//		printf("%d ", temp);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	char arr[20][20] = { ' ' };
//	for (int j = 0; j < i; j++)
//	{
//		for (int h = 0; h < i; h++)
//		{
//			arr[j][h] = ' ';
//		}
//	}
//
//	for (int j = 0; j < i; j++)
//	{
//			arr[j][j] = arr[j][i-j-1] = '*';
//
//	}
//	for (int j = 0; j < i; j++)
//	{
//		for (int h = 0; h < i; h++)
//		{
//			printf("%c", arr[j][h]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int year = 0;
	int month = 0;
	while (scanf("%d %d", &year, &month) == 2)
	{
		if (month != 2)
		{
			switch (month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30");
				break;
			default:
				break;
			}
		}
		else
		{
		 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("29");
		}
		else
			printf("28");
		}

	}
	return 0;
}