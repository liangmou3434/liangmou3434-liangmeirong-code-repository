#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	int arr2[] = { 1,2,3,4,8,8,8,8 };
	memcmp(arr1, arr2, 20);//-1  arr1��������ݱ�arr2��������ݴ�
	//�Ƚ�20���ֽ�,5��Ԫ��-�Ƚ�40���ֽ�,���ǱȽϵ������Ԫ�ص�ʱ����ֳܷ���С,���治���ٱȽ�
	//num�����Ƚϼ����ֽ�,���ǿ�����ǰ�ֳ���С,����Ĳ����ٱȽ�
	return 0;
}