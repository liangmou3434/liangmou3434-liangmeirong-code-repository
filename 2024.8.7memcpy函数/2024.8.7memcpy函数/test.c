#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)//此函数需要返回目标空间的起始地址
{
	void* ret = dest;
	assert(dest && src);//先断言,dest和src都不能是空指针
	while (num--)
	{
		//dest和src都是void* 泛型指针,需要强转成字符指针
		*(char*)dest = *(char*)src;
		src = (char*)src + 1;
		dest = (char*)dest + 1;
	}
	return ret;
}

int main()
{
	//strcpy字符串的拷贝
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	//memcpt-针对内存块进行拷贝
	my_memcpy(arr2, arr1, 20);//把数据从arr1拷贝到arr2上,拷贝20个字节 整型-5个元素长度为20个字节
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);//1 2 3 4 5 0 0 0 0 0 0 0 0 0 0  0 0 0 0 0 
	}
	return 0;
}

//int main()
//{
//	//strcpy字符串的拷贝
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//memcpt-针对内存块进行拷贝
//	memcpy(arr2, arr1, 20);//把数据从arr1拷贝到arr2上,拷贝20个字节 整型-5个元素长度为20个字节
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);//1 2 3 4 5 0 0 0 0 0 0 0 0 0 0  0 0 0 0 0 
//	}
//	return 0;
//}