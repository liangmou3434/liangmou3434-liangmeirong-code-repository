#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void PrintMultiplication()//��ӡ�˷���ĺ���
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
	PrintMultiplication();//��ӡ�˷���ĺ���
	return 0;
}