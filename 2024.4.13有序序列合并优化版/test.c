#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[2000] = { 0 };//��ʼ������
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);//����ǰ��εĵ�Ԫ����n����������ε�Ԫ����m-1��
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);//��������ǰ��ε�Ԫ��
	}
	for (int j = n; j < m+n;j++)
	{
		scanf("%d", &arr[j]);//����������ε�Ԫ��
	}
	for (int i = 0; i < n + m; i++)//���������Ԫ�ش�С������˳������
	{
		for (int j = i + 1; j < n + m; j++)
		{
			if (arr[i] > arr[j])
			{
				int result = arr[i];
				arr[i] = arr[j];
				arr[j] = result;
			}
		}
	}
	for (int i = 0; i < n + m; i++)//��ӡ����
	{
		printf("%d ", arr[i]);
	}
}