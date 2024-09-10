#define  _CRT_SECURE_NO_WARNINGS
#include"Fuction.h"


#include <stdio.h>
#include <string.h>

//int lengthOfLongestSubstring(char* s) 
//{
//        int inx1 = 0, inx2 = 0, inx3 = 0, maxlong = 0;
//        while (s[inx3] != '\0') {
//            for (inx2 = inx1; inx2 < inx3; inx2++) {
//                if (s[inx3] == s[inx2]) {
//                    inx1 = inx2 + 1;
//                    break;
//                }
//            }
//            if (inx3 - inx1 + 1 > maxlong) {
//                maxlong = inx3 - inx1 + 1;
//            }
//            inx3++;
//        }
//        return maxlong;
//    int left = 0;
//    int right = 1;
//    int MaxLen = 0;
//    int i = 0;
//    int j = 0;
//    int sz = strlen(s);
//    if (sz == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        for (i = 1; i < sz; i++)
//        {
//            int temp = 0;
//            for (j = left; j < i; j++)
//            {
//                if (*(s + i) == *(s + j))
//                {
//                    temp = i - left;
//                    MaxLen = temp > MaxLen ? temp : MaxLen;
//                    left++;
//                    i = right;
//                    break;
//                }
//            }
//            if (j == i)
//            {
//                MaxLen = i - left+1 > MaxLen ? i - left+1 : MaxLen;
//            }
//        }
//        return MaxLen;
//    }
// }
//
//int main() {
//    char s[] = "abac";
//    int result = lengthOfLongestSubstring(s);
//    printf("The length of the longest substring without repeating characters is %d\n", result);
//    return 0;
//}

int main()
{
	int a = 2;
	printf("%d\n", a);
	return 0;
}


