#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//f9创建和取消断点 断点-可以设置在程序的任何位置，用于程序执行到某个地方后暂停执行
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("广州南方学院\n");
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("中山大学南方学院\n");
//	}
//	return 0;
//}

int main()//查看数组数据
{//fn+f10->开始调试 fn+f5结束调试
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int j = 0; j < 10; j++)
	{
		printf(" %d", arr[j])
	}
	return 0;
}