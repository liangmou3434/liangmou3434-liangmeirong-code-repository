#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印下标为5的元素
//	printf("%d ", arr[5]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zd\n", sizeof(arr));//计算数组的大小
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0]));//计算数组内一个元素的大小
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0]));//计算数组内的元素个数
//	return 0;
//}

int main()
{
	char arr[] = "abcde";
	int result = sizeof(arr);
	int result1 = strlen(arr);//sizeof会读取\0 strlen不会读取字符串中最后的结束标志\0
	printf("%d\n", result);//sizeof会读取字符串的结束标志\0->所以为6
	printf("%d\n", result1);//strlen不会读取字符串最后的结束标志为5
	return 0;
}