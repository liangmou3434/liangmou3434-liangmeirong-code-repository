#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double sum = 0;
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);//输入数组的元素
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];//将数组的元素加起来
	}
	double result = sum / (double)n ;//求数组元素的平均数
	printf("%.1lf ", result);//打印数组元素的平均数
	return 0;
}