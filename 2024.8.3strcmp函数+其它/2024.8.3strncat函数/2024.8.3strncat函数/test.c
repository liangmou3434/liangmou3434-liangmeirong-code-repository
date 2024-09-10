#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

int main()
{
	//需要追加的字符串大于源字符串长度
	char arr1[] = "abcdef";
	char arr2[20] = "xx";
	char* ret = strncat(arr2, arr1, 8);//将arr1字符串长度为8追加到arr2上,仅仅追加长度为7的字符串
	printf("%s", ret);//xxabcdef
	return 0;
}

//int main()
//{
//	//需要追加的字符串小于源字符串长度
//	char arr1[] = "abcdef";
//	char arr2[20] = "xx";
//	char* ret = strncat(arr2, arr1, 3);//将arr1字符串长度为3追加到arr2上,则追加的为abc\0
//	printf("%s", ret);//xxabc 内存中其实存放的是xxabc\0
//	return 0;
//}