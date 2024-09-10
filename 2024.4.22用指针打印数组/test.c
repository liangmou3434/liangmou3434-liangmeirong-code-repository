#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//初始化数组
//	int* p = &arr[0];//将arr数组中0下标的地址给指针变量p
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内有几个元素
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);//先打印*p = arr[0]
//		p++;//p++为p+1 因为p为指向int类型的指针 所以p+1跳过四个字节 每+1 指针变量p地址为下一个元素的地址
//	}
//	return 0;
//}

int main()//优化版
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//初始化数组
	int* p = &arr[0];//将arr数组中0下标的地址给指针变量p
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组内有几个元素
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));//先打印*p = arr[0]
	   //p+1 为第二个元素下标为1的地址 p+2为第三个元素下标为2的地址以此类推
	}
	return 0;
}