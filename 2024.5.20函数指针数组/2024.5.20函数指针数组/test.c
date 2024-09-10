#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int main()
{
	int ret = 0;
	int(*pa)(int, int) = Add;//函数指针
	int(*p[2])(int, int) = { Add,Sub };//函数指针数组 
	for (int i = 0; i < 2; i++)
	{
		ret = p[i](2, 3);//调用函数指针数组里面的元素--p[0]调用函数指针数组内下标为0的函数
		//(2,3)为传过去的参数
		printf("%d ", ret);
	}
	return 0;
}