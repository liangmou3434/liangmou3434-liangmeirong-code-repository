#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p1[10];//指针数组-指针数组为数组 用来存放指针
	//p1优先和[]结合 变成数组 类型是指针类型 故最后形成指针数组
	int(*p2)[10];//数组指针-数组指针为指针 用来存放数组的地址
	//（*p2）p2先和*结合 变成指针 再与[]结合 变成数组指针 用来存放数组的地址
	return 0;
}