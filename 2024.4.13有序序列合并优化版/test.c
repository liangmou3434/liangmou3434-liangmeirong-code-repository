#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[2000] = { 0 };//初始化数组
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);//数组前半段的的元素有n个，数组后半段的元素有m-1个
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);//输入数组前半段的元素
	}
	for (int j = n; j < m+n;j++)
	{
		scanf("%d", &arr[j]);//输入数组后半段的元素
	}
	for (int i = 0; i < n + m; i++)//将数组里的元素从小到大按照顺序排列
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
	for (int i = 0; i < n + m; i++)//打印数组
	{
		printf("%d ", arr[i]);
	}
}