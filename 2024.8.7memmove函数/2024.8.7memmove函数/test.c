#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num)//�����귵��Ŀ��ռ����ʼ��ַ
{
	assert(dest && src);
	void* ret = dest;//��һ������ָ���¼Ŀ��ռ����ʼ��ַ
	if (dest < src)
	{
		//Ԫ����ǰ���󸲸�
		while (num--)
		{
			*(char*)dest = *(char*)src;
			src = (char*)src + 1;
			dest = (char*)dest + 1;
		}
	}
	else
	{
		//Ԫ�شӺ���ǰ����
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��1 2 3 4 5 ������3 4 5 6 7��
	my_memmove(arr + 2, arr, 5 * sizeof(int));//arrΪ��Ԫ�ص�ַ,arr+2-������Ԫ�ص���ʼ��ַ
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��1 2 3 4 5 ������3 4 5 6 7��
//	memmove(arr + 2, arr, 5 * sizeof(int));//arrΪ��Ԫ�ص�ַ,arr+2-������Ԫ�ص���ʼ��ַ
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//1 2 1 2 3 4 5 8 9 10
//	}
//	return 0;
//}