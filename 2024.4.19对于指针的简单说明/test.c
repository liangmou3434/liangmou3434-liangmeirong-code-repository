#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;//创建一个局部变量
	int* p = &a;//将a的地址放在p里 p是一个指针变量 p的类型是a相对应的类型
	*p = 0;//*p 等价于a 这里将a改成0
	printf("%d ", a);//a被改变成0 最后打印为0
	return 0;
}