#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组名为数组首元素的地址 但有两种例外情况
	//情况1 用sizeof（数组名）求数组长度时
	//情况2 &数组名 -- 表示的是整个数组的地址
	printf("%p\n", arr);//数组首元素地址
	printf("%p\n", &arr);//整个数组的地址 --打印结果相同 其实有一定区别
	printf("%p\n", arr+1);//跳过四个字节
	printf("%p\n", &arr+1);//跳过四十个字节 整个数组
	return 0;
}