#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//横着打印九九乘法表
{
	int i = 0;
	int result = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%dx%d=%d ", j,i, result);
		}
		printf("\n");
	}
	return 0;
}