#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void BubblesSort(int arr[10], int sz)
{
	//数组10个元素 九趟
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;//每次进入循环前 将flag的值改为1
		//每经过一趟后 需要排序的数字减少一个 交换次数随之减少 第一趟为9对相邻数比较并交换 第二趟为8对
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//若进入该循环  flag的值改为0
			}
			if (flag == 1)//若flag = 1 则证明程序没有进入第二个for循环 证明数组已经排好成升序数组
				break;
		}
	}
	for (int i = 0; i < sz; i++)//打印完成冒泡排序后的数组
	{
		printf("%d ", arr[i]);
	}
}
int main()//冒泡排序：两两相邻的元素比较 对数组进行处理 把乱序数组排成升序或降序
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };//逆序数组换成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)//打印进行冒泡排序之前的数组
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	BubblesSort(arr, sz);//将数组换成升序
	return 0;
}