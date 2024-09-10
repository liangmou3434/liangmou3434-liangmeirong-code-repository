#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
int main()
{
	//strlen是c语言的库函数,返回值为size_t,只用来统计字符串长度,遇到\0停止计数
	size_t len = strlen("abcdef");
	printf("%zd\n", len);
	//或者
	const char* str = "abcdef";//char*变量str里面存的是字符串中首字符的地址用字符指针变量来统计字符串长度
	//字符串和数组一样,在内存中也是连续存放的,与字符数组不同的是字符串在内存中以\0结尾
	printf("%zd\n", strlen(str));
	//或者
	char arr[] = "abcdef";
	printf("%zd\n", strlen(arr));//数组名存是首元素地址,从首元素开始往后计数遇到\0停止

	int a = 10;
	short s = 2;
	printf("%zd\n", sizeof(s = (a + 2)));//结果为2 a为int类型 与a加减的2也为int类型 放到short类型的变量内会发生截断变成2
	return 0;
}

int main1()
{
	int a = 10;
	printf("%zd\n", sizeof(a));//sizeof不是函数
	printf("%zd\n", sizeof a);
	printf("%zd\n", sizeof(int));//sizeof只关注占用内存的大小，不关心内存中放的是什么数据

	return 0;
}