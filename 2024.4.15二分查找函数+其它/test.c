#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int bin_search(int arr[], int left, int right, int key)
{
   // arr 是查找的数组
   //left 数组的左下标
   //right 数组的右下标
   //key 要查找的数字 
	//判断key是否属于数组
	while (left <= right)
	{
		int mid = (left + right) / 2;//数组的中间下标

		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到对应元素后返回下标
		}
	}
	return -1;//退出循环表示数组中没有该元素
}

int main()
{//数组里面的元素为1~10
	int arr[] = { 10,13,22,25,26,30 };
	int key = 0;
	int left = 0;//最左下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//数组的最右下标
	scanf("%d", &key);//需要查找的数字
	int result = bin_search(arr, left, right, key);
	printf("key的下标是： %d ", result);
	return 0;
}