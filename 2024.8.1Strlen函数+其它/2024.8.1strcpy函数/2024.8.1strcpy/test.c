#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	asser(src != NULL);
//	assser(dest != NULL);
//	//拷贝\0前面的字符
//	while (*src != '\0')
//	{
//		/**dest = *src;
//		dest++;
//		src++;*/
//		*dest++ = *src++;//先把*src赋值给*dest再++
//    }
//	*dest = *src;//拷贝\0字符
//}


char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while(*dest++ = *src++)//当src是\0时,\0的ASCII码值为0 while循环停止
	{
		;
	}
	return ret;//返回拷贝好字符数组的数组起始地址
}

int main()
{
	char arr1[] = "guangzhou";
	char arr2[20] = { 0 };
	char* ret = my_strcpy(arr2, arr1);//把arr1字符数组的内容拷贝arr2字符数组上
	printf("%s\n", ret);//guangzhou
	return 0;
}

//char* p = "abcdef";为常量字符串,常量字符串的长度和内容是不可变的
//int main()
//{
//	char arr1[] = "guangzhou";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);//把arr1字符数组的内容拷贝arr2字符数组上
//	printf("%s\n", arr2);//guangzhou
//	return 0;
//}