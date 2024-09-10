#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[] = { 1,2,3,4,8,8,8,8 };
	memcmp(arr1, arr2, 20);//-1  arr1数组的内容比arr2数组的内容大
	//比较20个字节,5的元素-比较40个字节,但是比较到第五个元素的时候就能分出大小,后面不会再比较
	//num是最多比较几个字节,但是可以提前分出大小,后面的不会再比较
	return 0;
}