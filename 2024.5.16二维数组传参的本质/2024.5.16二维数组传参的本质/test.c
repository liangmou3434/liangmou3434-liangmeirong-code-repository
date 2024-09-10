#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
void print(int (*arr)[5],int x,int y)//传参传的是二维数组的第一行组成的一维数组的地址 故用数组指针接收 
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			//*（arr+i）等价于arr[0]
			printf("%d ", *(*arr + i) + j);//*(*arr+i)+j 等价于arr[i][j]
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);//arr为首元素地址 二维数组由多组一维数组组成 二维数组的首元素为第一行 传过去的为一维数组的地址
	return 0;
}


//void print1(int arr[3][5], int x, int y)//x为行 y为列
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main1()//用传统的传参方式打印二维数组
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//	return 0;
//}