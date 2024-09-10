#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//malloc函数开辟空间
	//int* p1 = (int*)malloc(5 * sizeof(int));//开辟20个字节的空间
	//if (p1 == NULL)
	//{
	//	perror("malloc");
	//	return 1;
	//}

	//calloc开辟空间-且calloc函数会把开辟的空间的值初始化为0
	int* p2 = (int*)calloc(5, sizeof(int));//开辟5个整型的空间
	if (p2 == NULL)
	{
		perror("calloc");
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(p2 + i));//	0 0 0 0 0
	
	}
	free(p2);
	p2 = NULL;
	
	return 0;
}
