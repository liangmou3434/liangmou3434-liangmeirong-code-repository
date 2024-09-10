#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int(*p)(int, int) = Add;
	int c = Add(2, 3);//函数名调用
	int d = (*p)(3, 4);//函数指针调用
	int e = p(3, 4);//函数指针调用->更简便的写法
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	return 0;
}
