#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//指针-指针的意义：两个指针之间的元素个数
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%zd\n", &arr[9] - &arr[0]);//第十位元素的地址减第一位元素的地址 中间有九个元素 
	printf("%zd\n", &arr[0] - &arr[9]);//结果为-9
	//计算的前提条件 - 两个指针指向同一块空间
	return 0;
}