#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cur = str1;
	if (*str2 == '\0')
		return (char*)str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr[] = "abbcdef";
	const char* p = "bbc";
	char* ret = my_strstr(arr, p);//在arr里面寻找p 返回从p第一次出现的位置的地址
	printf("%s\n", ret);
	return 0;
}

//int main()
//{
//	char arr[] = "this is an apple";
//	const char* p = "An";
//	char* ret = strstr(arr, p);//在arr里面寻找p 返回从p第一次出现的位置的地址
//	printf("%s\n", ret);//如果p不存在,则返回空指指针
//	//打印结果为(null)
//	return 0;
//}

//int main()
//{
//	char arr[] = "this is an apple";
//	const char* p = "is";
//	char* ret = strstr(arr, p);//在arr里面寻找p 返回从p第一次出现的位置的地址
//	printf("%s\n", ret);//从p第一出现的位置开始向后打印到\0停止
//	//打印结果为is is an apple
//	return 0;
//}