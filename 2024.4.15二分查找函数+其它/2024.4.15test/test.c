#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d]=%p\n",i, &arr[i]);
	}
	return 0;
}

int main()
{
	return 0;//函数遇到return语句会停止 不会再继续执行
	printf("广州南方学院");
}