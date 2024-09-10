#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	//把strlen的返回值“6” 作为printfd的参数
	//printf的返回值是打印在屏幕上的个数
	return 0;
}

定义和声明分开
//int Add(int x, int y);//先定义

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	printf("a=");
//	scanf("%d", &a);
//	printf("b=");
//	scanf("%d", &b);
//	z = Add(a, b);
//	printf("a+b=%d\n", z);
//   	return 0;
//}
//int Add(int x, int y)//再声明
//{
//	return x + y;
//}