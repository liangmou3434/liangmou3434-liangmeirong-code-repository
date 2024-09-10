#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p1 = (int*)malloc(5 * sizeof(int));//开辟20个字节的空间
//	if (p1 == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//使用空间
//	for (int i = 0; i < 5; i++)
//	{
//		*(p1 + i) = i + 1;
//	}
//	//把空间调整成40个字节
//	int* p2 = (int*)realloc(p1, 40);//p1为需要调节的空间的起始地址,40为调整后的空间大小
//	if (p2 != NULL)
//	{
//		p1 = p2;
//		//使用四十个字节的空间
//		for (int i = 5; i < 10; i++)
//		{
//			*(p1 + i) = i + 1;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p1 + i));//1 2 3 4 5 6 7 8 9 10
//		}
//		free(p1);//释放p1
//		p1 = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		//调整失败
//		free(p1);
//		p1 = NULL;
//	}
//	return 0;
//}

//realloc函数可以实现和malloc一样的功能
int main()
{
	realloc(NULL, 20);//相当于开辟20个字节的空间
	return 0;
}