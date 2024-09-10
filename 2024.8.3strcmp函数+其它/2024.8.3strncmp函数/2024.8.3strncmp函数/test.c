#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "abqedfhi";
	int ret = strncmp(arr1, arr2, 6);//最多比较6个字符但到第三个字符时,第二个字符串arr2已经大于第一个字符串arr1,不会再比较后面的字符
	printf("%d\n", ret);//-1
	return 0;
}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abqedfhi";
//	int ret = strncmp(arr1, arr2, 2);//只比较两个字符,两个字符串的前两个字符相等,所以返回0
//	printf("%d\n", ret);//0
//	return 0;
//}