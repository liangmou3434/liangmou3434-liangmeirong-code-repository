#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)//�˺�����Ҫ����Ŀ��ռ����ʼ��ַ
{
	void* ret = dest;
	assert(dest && src);//�ȶ���,dest��src�������ǿ�ָ��
	while (num--)
	{
		//dest��src����void* ����ָ��,��Ҫǿת���ַ�ָ��
		*(char*)dest = *(char*)src;
		src = (char*)src + 1;
		dest = (char*)dest + 1;
	}
	return ret;
}

int main()
{
	//strcpy�ַ����Ŀ���
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	//memcpt-����ڴ����п���
	my_memcpy(arr2, arr1, 20);//�����ݴ�arr1������arr2��,����20���ֽ� ����-5��Ԫ�س���Ϊ20���ֽ�
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);//1 2 3 4 5 0 0 0 0 0 0 0 0 0 0  0 0 0 0 0 
	}
	return 0;
}

//int main()
//{
//	//strcpy�ַ����Ŀ���
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//memcpt-����ڴ����п���
//	memcpy(arr2, arr1, 20);//�����ݴ�arr1������arr2��,����20���ֽ� ����-5��Ԫ�س���Ϊ20���ֽ�
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);//1 2 3 4 5 0 0 0 0 0 0 0 0 0 0  0 0 0 0 0 
//	}
//	return 0;
//}