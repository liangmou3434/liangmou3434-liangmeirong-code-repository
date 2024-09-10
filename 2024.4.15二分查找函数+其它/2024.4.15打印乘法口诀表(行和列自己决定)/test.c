#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void PrintMultiplication()//打印乘法表的函数
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%dx%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}
}
	
int main()
{
	PrintMultiplication();//打印乘法表的函数
	return 0;
}