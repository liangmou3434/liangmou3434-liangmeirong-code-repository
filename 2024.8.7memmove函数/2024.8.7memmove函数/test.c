#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num)//拷贝完返回目标空间的起始地址
{
	assert(dest && src);
	void* ret = dest;//用一个泛型指针记录目标空间的起始地址
	if (dest < src)
	{
		//元素由前往后覆盖
		while (num--)
		{
			*(char*)dest = *(char*)src;
			src = (char*)src + 1;
			dest = (char*)dest + 1;
		}
	}
	else
	{
		//元素从后往前覆盖
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//把1 2 3 4 5 拷贝到3 4 5 6 7上
	my_memmove(arr + 2, arr, 5 * sizeof(int));//arr为首元素地址,arr+2-第三个元素的起始地址
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//把1 2 3 4 5 拷贝到3 4 5 6 7上
//	memmove(arr + 2, arr, 5 * sizeof(int));//arr为首元素地址,arr+2-第三个元素的起始地址
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
//	}
//	return 0;
//}