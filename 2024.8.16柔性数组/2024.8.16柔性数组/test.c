#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	char c;
//	int n;
//	int arr[];//柔性数组-或写成 int arr[0]
//};

//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%zd\n", sizeof(s));//4-sizeof返回的这种结构大小不包括柔性数组的内存
//	//给带有柔性数组的结构体开辟动态内存空间
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//暂时开辟5个整型大小-20个字节的空间给柔性数组
//	//且可以用realloc调整空间大小,数组的大小是可以调整的
//
//	//给结构体的成员赋值
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//用realloc来调整空间
//    struct S* ptr	= (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//  //第一个参数放需要调整的动态内存空间的起始地址,第二个参数放调整后的空间大小
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	//释放空间
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)//判断空间是否开辟成功
		return 1;
	ps->arr = (int*)malloc(5 * sizeof(int));//利用结构体中的整型指针,指向一块动态开辟的空间
	if (ps->arr == NULL)//判断空间是否开辟成功
		return 1;
	ps->n = 100;
	for (int i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	//调整数组大小
	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	//释放动态内存空间
	free(ps->arr);
	free(ps);
	ps->arr = NULL;
	ps = NULL;
	return 0;
}