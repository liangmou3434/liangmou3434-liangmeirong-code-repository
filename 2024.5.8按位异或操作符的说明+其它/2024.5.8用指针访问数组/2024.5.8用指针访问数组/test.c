#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()//�ô�ͳ��ʽ�����������
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤��
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);//��������
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);//�������
	}
	return 0;
}

int main2()//��ָ�뷽ʽ�����������  ������Ϊ������Ԫ�صĵ�ַ p�ȼ���arr 
{
	int arr[10] = { 0 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤��
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", p + i);//�������� ��arr+i 
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", *(p + j));//������� ��*(arr+j) p[i]
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤��
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &i[arr]);//�������� ��arr+i=i+arrҲ����ʵ�� &arr[i] = &i[arr] []Ϊ�±����ò����� ʵ�����롰+���Ľ�����ԭ����ͬ
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", *(p + j));//������� ��*(arr+j) p[i] i[p]
	}
	return 0;
}

