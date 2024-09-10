#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()//用传统方式输入输出数组
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);//输入数组
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);//输出数组
	}
	return 0;
}

int main2()//用指针方式输入输出数组  数组名为数组首元素的地址 p等价于arr 
{
	int arr[10] = { 0 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", p + i);//输入数组 或arr+i 
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", *(p + j));//输出数组 或*(arr+j) p[i]
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &i[arr]);//输入数组 或arr+i=i+arr也可以实现 &arr[i] = &i[arr] []为下标引用操作符 实际上与“+”的交换律原理相同
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", *(p + j));//输出数组 或*(arr+j) p[i] i[p]
	}
	return 0;
}

