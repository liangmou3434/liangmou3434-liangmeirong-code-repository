#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
void init(int arr[5])//�������ʼ��Ϊ0
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[5])//��ӡ����
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[5])//�������Ԫ�ص�����
{
	int n = 4;
	for (int i = 0; i < 5/2; i++)
	{
		int replace = arr[i];
		arr[i] = arr[n - i];
		arr[n - i] = replace;
	}
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	print(arr);//��ӡԭ�����Ԫ��
	init(arr);//����������Ԫ�س�ʼ��Ϊ0
	for (int i = 0; i < 5; i++)//��������
	{
		scanf("%d", &arr[i]);
	}
	reverse(arr);
	for (int i = 0; i < 5; i++)//��ӡת�ú������
	{
		printf("%d ", arr[i]);
	}
}