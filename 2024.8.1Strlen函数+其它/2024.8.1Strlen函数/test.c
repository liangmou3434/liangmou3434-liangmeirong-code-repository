#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//计数器版本
//size_t my_strlen(const char* s)
//{
//	assert(s);//判断s是否是野指针
//	int count = 0;
//	while(*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//不能创建临时变量-递归思想
//size_t my_strlen(const char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//	//如果第一个不是\0,则return 1 + my_strlen("bcedf")
//	//return 1+1+my_strlen("cedf")-以此类推
//}

//指针-指针
size_t my_strlen(const char* s)
{
	assert(s);
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;//p遇到\0停止 用字符串最后一个字符的地址值-首字符的地址值
}

int main()
{
	char arr[] = "abcdef";
	size_t len = my_strlen(arr);
	printf("%zd\n", len);
	return 0;
}