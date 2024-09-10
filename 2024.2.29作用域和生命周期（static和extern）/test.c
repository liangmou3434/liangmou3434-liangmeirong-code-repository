#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);//a的作用域为第二个大括号内
//	}
//	printf("%d\n", a);//此a为作用域之外，所以a为未声明的标识符
//	return 0;
//}

//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);//test函数的i为局部变量，每次进入函数时，i会创建且i=0
//}                           故打印结果为5个1
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//void test()
//{
//	static int n = 0;//static用于保留n上一次循环留下的值用于下一次循环
//	n++;             //延长了n的生命周期但作用域不变
//	printf("%d ", n);
//}
//int main()
//{
//	  static int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}