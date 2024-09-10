#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
void init(int arr[5])//将数组初始化为0
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[5])//打印数组
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[5])//完成数组元素的逆置
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
	print(arr);//打印原数组的元素
	init(arr);//将数组所有元素初始化为0
	for (int i = 0; i < 5; i++)//输入数组
	{
		scanf("%d", &arr[i]);
	}
	reverse(arr);
	for (int i = 0; i < 5; i++)//打印转置后的数组
	{
		printf("%d ", arr[i]);
	}
}