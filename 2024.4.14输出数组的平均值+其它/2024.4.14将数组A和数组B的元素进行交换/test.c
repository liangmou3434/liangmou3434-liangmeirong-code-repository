#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Input(int x, int arr[10])
{
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void print(int y, int arr[10])
{
	for (int i = 0 ; i < y ; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int n = 0;//nΪarr1�����arr2����Ĵ�С
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d", &n);//������������Ĵ�С
	Input(n, arr1);//��������arr1
	Input(n, arr2);//��������arr2
	for (int i = 0; i < n; i++)//������arr1������arr2��Ԫ���������
	{
		int result = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = result;
	}
	print(n, arr1);//��ӡ����arr1
	printf("\n");
	print(n, arr2);//��ӡ����arr2
	return 0;
}