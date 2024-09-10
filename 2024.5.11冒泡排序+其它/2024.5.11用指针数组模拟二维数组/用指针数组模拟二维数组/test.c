#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//指针数组-》存放指针的数组
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* arr[] = { arr1,arr2,arr3 };//存放arr1，arr2,arr3首元素的地址
	//打印该指针数组 类似二维数组的打印方法
	for (int i = 0; i < 3; i++)//3为指针数组中的元素个数
	{
		for (int j = 0; j < 5; j++)//j为一维数组中的元素个数
		{
			printf("%d ", arr[i][j]);//i为指针数组的下标，j为一维数组的下标 例：当i=1时 arr1[j]-访问arr1下标为j的元素
		}
		printf("\n");
	}
	return 0;
}