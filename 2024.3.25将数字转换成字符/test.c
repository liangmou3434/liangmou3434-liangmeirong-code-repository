#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number = 1;//��ʼ��һ����������1 ���������ݷŽ��ַ�������Ҫ����������ת�����ַ�
	//������1 ת�����ַ�1
	number = 1 + '0';
	char arr[2][2] = { {'a','b'},{'c',number}};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}