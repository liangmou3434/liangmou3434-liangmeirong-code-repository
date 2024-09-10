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
	int n = 0;//n为arr1数组和arr2数组的大小
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d", &n);//输入两个数组的大小
	Input(n, arr1);//输入数组arr1
	Input(n, arr2);//输入数组arr2
	for (int i = 0; i < n; i++)//把数组arr1和数组arr2的元素逐个交换
	{
		int result = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = result;
	}
	print(n, arr1);//打印数组arr1
	printf("\n");
	print(n, arr2);//打印数组arr2
	return 0;
}