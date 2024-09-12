#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#pragma region 27 移除元素
//int removeElement(int* nums, int numsSize, int val)
//{
#pragma region 双指针优化写法
	/*int left = 0;
	int right = numsSize - 1;
	while (left < right)
	{
		if (nums[left] == val)
		{
			if (nums[right] != val)
			{
				int temp = nums[left];
				nums[left] = nums[right];
				nums[right] = temp;
			}
			else
			{
				right--;
			}
		}
		else
		{
			left++;
		}
	}
	return right;*/
#pragma endregion
#pragma region 顺序表常规删除写法
	//int i = 0;
	//while (i < numsSize)
	//{
	//	if (nums[i] == val)
	//	{
	//		for (int j = i; j < numsSize - 1; j++)
	//		{
	//			nums[j] = nums[j + 1];
	//		}
	//		numsSize--;
	//	}
	//	else
	//	{
	//		i++;
	//	}
	//}
	//return numsSize;

	//-------------------------------------------------------------------------------------

	/*for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == val)
		{
			for (int j = i; j < numsSize - 1; j++)
			{
				nums[j] = nums[j + 1];
			}
			numsSize--;
			i--;
		}
	}
	return numsSize;*/
#pragma endregion
//}
//
//int main()
//{
//	int nums[] = { 3,2,2,3 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret = removeElement(nums, sz, 3);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//	return 0;
//}
#pragma endregion

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//	int i = m - 1;
//	int j = n - 1;
//	int k = nums1Size-1;
//	while (i>=0 && j>=0)
//	{
//		if (nums1[i] > nums2[j])
//		{
//			nums1[k] = nums1[i];
//			i--;
//			k--;
//		}
//		else
//		{
//			nums1[k] = nums2[j];
//			k--;
//			j--;
//		}
//	}
//	while (j >= 0)
//	{
//		nums1[k] = nums2[j];
//		k--;
//		j--;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,0,0,0 };
//	int arr2[] = { 2,5,6};
//	merge(arr1, 6, 3, arr2, 3, 3);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



