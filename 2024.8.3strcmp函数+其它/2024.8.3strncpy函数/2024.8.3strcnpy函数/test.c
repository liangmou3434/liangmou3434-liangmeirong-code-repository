#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] ="xxxxxxxxxxx";
	strncpy(arr2, arr1, 8);//��arr1���ַ�������Ϊ8������arr2������,�Ȱ�arr1���߸��ַ�abcdef\0������arr2�ַ�������,ʣ�µĲ�����\0����
	printf("%s\n", arr2);
	return 0;
}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	strncpy(arr2, arr1, 3);//��arr1���ַ�������Ϊ3������arr2������,��arr2������û��'\0'
//	printf("%s\n", arr2);
//	return 0;
//}