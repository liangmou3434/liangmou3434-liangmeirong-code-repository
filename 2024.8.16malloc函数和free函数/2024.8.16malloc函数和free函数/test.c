#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//开辟20个字节的空间用来存放5个整型
	int* p = (int*)malloc(20);//开辟20个字节的空间,但是malloc函数返回的结果是void*所以需要进行强制类型转换
	//开辟空间后,判断开辟是否成功,开辟失败返回null,开辟成功返回开辟空间的起始地址
	if (p == NULL)
	{
		perror("malloc");
		return 1;//开辟失败直接返回1
	}
	//开辟空间成功后使用空间
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;//空间内放置1 2 3 4 5 
	}

	//释放内存-把空间使用的操作权限还给操作系统
	free(p);
	p = NULL;//但p还是指向原来的地址,所以需要将p设置成空指针
	return 0;
}