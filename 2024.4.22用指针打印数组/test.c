#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ʼ������
//	int* p = &arr[0];//��arr������0�±�ĵ�ַ��ָ�����p
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������м���Ԫ��
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);//�ȴ�ӡ*p = arr[0]
//		p++;//p++Ϊp+1 ��ΪpΪָ��int���͵�ָ�� ����p+1�����ĸ��ֽ� ÿ+1 ָ�����p��ַΪ��һ��Ԫ�صĵ�ַ
//	}
//	return 0;
//}

int main()//�Ż���
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ʼ������
	int* p = &arr[0];//��arr������0�±�ĵ�ַ��ָ�����p
	int sz = sizeof(arr) / sizeof(arr[0]);//�����������м���Ԫ��
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));//�ȴ�ӡ*p = arr[0]
	   //p+1 Ϊ�ڶ���Ԫ���±�Ϊ1�ĵ�ַ p+2Ϊ������Ԫ���±�Ϊ2�ĵ�ַ�Դ�����
	}
	return 0;
}