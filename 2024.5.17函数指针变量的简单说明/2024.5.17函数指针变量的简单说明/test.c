#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int main()//函数指针变量是指针-》用来存放函数地址 指向函数
{
	//打印函数地址
	int c = Add(2, 3);
	printf("%p\n", &Add);//&函数名和函数名都是函数的地址 所以用两种方法都能打印
	printf("%p\n", Add);
	//将函数的地址存进函数指针变量里
	int (*p)(int, int) = Add;
	//函数指针的写法 int（*）（）；
	//int 为指向函数的返回类型 p为函数指针的变量名 （int，int）为指向函数的参数类型的个数的交代
	return 0;
}