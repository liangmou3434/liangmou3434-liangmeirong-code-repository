#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = NULL;
	//int 类型的指针变量+1跳过四个字节
	printf("%p\n", p);
	printf("%p\n", p + 1);
	char* p1 = NULL;
	printf("%p\n", p1);
	printf("%p\n", p1 + 1);//char 类型的指针变量+1跳过一个字节
	//以此类推 指针变量+1会跳过sizeof（类型）
	return 0;
}