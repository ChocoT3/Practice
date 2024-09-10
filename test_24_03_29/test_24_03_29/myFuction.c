#define  _CRTSECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


//�ӷ�
int Add(int x, int y)
{
	return x + y;
}

//���ֲ���
int binarySearch(int* arr,int k,int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (k < arr[mid])
        {
            right = mid - 1;
        }
        else if (k > arr[mid])
        {
            left = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}

//�ж�����
int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
    {
        return 1;
    }
    else
        return -1;
}

//�ж�������1/����
void SieveOfEratosthenes(int n)
{
    char* isPrime = (char*)malloc((n + 1) * sizeof(char));
    if (isPrime == NULL) { // ����ڴ�����Ƿ�ɹ�
        fprintf(stderr, "Memory allocation failed\n");
        return;
    } // ����ʧ�ܣ���ǰ��ֹ����
    memset(isPrime, 1, (n + 1) * sizeof(char));


    for (int p = 2; p * p <= n; p++)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = 0;
            }
        }
    }
    for(int p = 2;p <= n;p++)
    if (isPrime[p])
    {
        printf("%d ", p);
    }
    free(isPrime);
}

//������������
void swap(int* a, int* b)
{
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}

//���������ֵ
int My_Max(int* arr, int sz)
{
    int max = arr[0];
    int i = 1;
    while (i < sz)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        i++;
    }
    return max;
}

