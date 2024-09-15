#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

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


//206 反转链表
//struct ListNode* reverseList(struct ListNode* head) {
	//struct ListNode* newHead = NULL;
	//struct ListNode* cur = head;
	//struct ListNode* curNext = NULL;
	//while (cur)
	//{
	//	curNext = cur->next;
	//	cur->next = newHead;
	//	newHead = cur;
	//	cur = curNext;
	//}
	//return newHead;
//}
//876 返回链表中间节点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* middleNode(struct ListNode* head) {
//	int count = 0;
//	struct ListNode* cur = head;
//	struct ListNode* middleNode = head;
//	while (cur->next)
//	{
//		count++;
//		if (count % 2 == 1)
//		{
//			middleNode =middleNode->next;
//		}
//		cur = cur->next;
//	}
//	return middleNode;
//}

//21 合并两个有序链表 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//	struct ListNode dummy;
//	struct ListNode* current = &dummy;
//	dummy.next = NULL;
//	while (list1 != NULL && list2 != NULL) {
//		if (list1->val <= list2->val) {
//			current->next = list1;
//			list1 = list1->next;
//		}
//		else {
//			current->next = list2;
//			list2 = list2->next;
//		}
//		current = current->next;
//	}
//	if (list1 != NULL) {
//		current->next = list1;
//	}
//	else {
//		current->next = list2;
//	}
//	return dummy.next;
//}

//141 判断是否有环
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//bool hasCycle(struct ListNode* head) {
//	if (head == NULL || head->next == NULL) {
//		return 0; // 无环
//	}
//
//	// 初始化快慢指针
//	struct ListNode* slow = head;
//	struct ListNode* fast = head;
//
//	while (fast != NULL && fast->next != NULL) {
//		slow = slow->next;         // 慢指针每次走一步
//		fast = fast->next->next;   // 快指针每次走两步
//
//		if (slow == fast) {
//			return 1; // 有环
//		}
//	}
//
//	return 0; // 无环
//
//}

//返回环的起点
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* detectCycle(struct ListNode* head) {
//	if (head == NULL || head->next == NULL) {
//		return NULL; // 无环
//	}
//
//	struct ListNode* slow = head;
//	struct ListNode* fast = head;
//
//	// 快慢指针判断链表是否有环
//	while (fast != NULL && fast->next != NULL) {
//		slow = slow->next;
//		fast = fast->next->next;
//
//		if (slow == fast) {
//			// 有环，寻找环的起点
//			struct ListNode* ptr = head;
//			while (ptr != slow) {
//				ptr = ptr->next;
//				slow = slow->next;
//			}
//			return ptr; // 返回环的起点
//		}
//	}
//
//	return NULL; // 无环
//}