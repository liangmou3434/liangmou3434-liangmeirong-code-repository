#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] ="xxxxxxxxxxx";
	strncpy(arr2, arr1, 8);//把arr1的字符串长度为8拷贝到arr2数组上,先把arr1的七个字符abcdef\0拷贝到arr2字符数组上,剩下的不够用\0补齐
	printf("%s\n", arr2);
	return 0;
}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	strncpy(arr2, arr1, 3);//把arr1的字符串长度为3拷贝到arr2数组上,但arr2数组上没有'\0'
//	printf("%s\n", arr2);
//	return 0;
//}