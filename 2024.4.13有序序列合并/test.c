#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Stdlib.h>
void Input(int x,int arr[1000])
{
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &arr[i]);//������������
    }
}

int main()
{
	int arr1[1000] = { 0 };//arr1�����鳤Ϊn
	int arr2[1000] = { 0 };//arr2�����鳤Ϊk
	int n = 0;
	int k = 0;
	int arr3[3000] = { 0 };
	scanf("%d%d", &n, &k);//������������Ĵ�С
	Input(n, arr1);//���ú�������arr1����
	Input(k, arr2);//���ú�������arr2����
	for (int i = 0; i < n; i++)//�ѵ�һ������͵ڶ��������С ��С����������в��ŵ���һ��������
	{
		for (int j = 0; j < k; j++)
		{
			if (arr2[j] < arr1[i])
			{
				int result = arr1[i];
				arr1[i] = arr2[j];
				arr2[j] = result;

			}
		}
	}
	for (int i = 0; i < k; i++)//�����ڶ������˳�� ��С��������
	{
		for (int j = i + 1; j < k; j++)
		{
			if (arr2[i] > arr2[j])
			{
				int result = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = result;
			}
		}
	}
	for (int i = 0; i < n; i++)//����һ�������ֵ��������������
	{
		arr3[i] = arr1[i];
	}
	for (int j = 0; j < k; j++)//���ڶ��������ֵ��������������
	{
		arr3[n] = arr2[j];
		n++;
	}
	for (int i = 0; i < n; i++)//��ӡ����������
	{
		printf("%d ", arr3[i]);
	}
}
	

