#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int* x, int* y)//用指针变量x和指针变量y分别接受局部变量a的地址和局部变量b的地址
{
	int tmp = 0;//交换两个变量的值
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前a=%d,b=%d\n", a, b);//打印交换前的两个局部变量
	swap(&a,&b);//传局部变量a,局部变量b的地址过去
	printf("交换后a=%d,b=%d\n", a, b);
	return 0;
}