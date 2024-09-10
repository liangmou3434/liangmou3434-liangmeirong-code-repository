#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int* p = &a;//一级指针 存放a的地址
	int** pp = &p;//二级指针 存放指针变量p的地址
	//(int*** ppp = &pp；）-》 三级指针 合法但不合理
	//pp二级指针变量存放的是指针变量p的地址 解一次是指针变量p中存放的a的地址,解两次是a的值
	printf("%p\n", *pp);//打印指针变量p中存放的a的地址 
	printf("%p\n", &a);//a的地址
	printf("%d\n", **pp);//对p的地址进一步解引用 打印a *pp为指针变量p的地址*(*pp)对指针变量p解引用
	return 0;
}