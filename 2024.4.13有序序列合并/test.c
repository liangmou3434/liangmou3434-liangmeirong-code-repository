#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Stdlib.h>
void Input(int x,int arr[1000])
{
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &arr[i]);//输入两个数组
    }
}

int main()
{
	int arr1[1000] = { 0 };//arr1的数组长为n
	int arr2[1000] = { 0 };//arr2的数组长为k
	int n = 0;
	int k = 0;
	int arr3[3000] = { 0 };
	scanf("%d%d", &n, &k);//输入两个数组的大小
	Input(n, arr1);//调用函数输入arr1数组
	Input(k, arr2);//调用函数输入arr2数组
	for (int i = 0; i < n; i++)//把第一个数组和第二个数组较小 从小到大进行排列并放到第一个数组中
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
	for (int i = 0; i < k; i++)//调整第二数组的顺序 从小到大排列
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
	for (int i = 0; i < n; i++)//将第一个数组的值赋给第三个数组
	{
		arr3[i] = arr1[i];
	}
	for (int j = 0; j < k; j++)//将第二个数组的值赋给第三个数组
	{
		arr3[n] = arr2[j];
		n++;
	}
	for (int i = 0; i < n; i++)//打印第三个数组
	{
		printf("%d ", arr3[i]);
	}
}
	

