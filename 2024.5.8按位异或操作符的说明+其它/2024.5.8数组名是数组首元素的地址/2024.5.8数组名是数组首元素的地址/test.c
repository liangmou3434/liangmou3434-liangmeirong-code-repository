#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//������Ϊ������Ԫ�صĵ�ַ ���������������
	//���1 ��sizeof���������������鳤��ʱ
	//���2 &������ -- ��ʾ������������ĵ�ַ
	printf("%p\n", arr);//������Ԫ�ص�ַ
	printf("%p\n", &arr);//��������ĵ�ַ --��ӡ�����ͬ ��ʵ��һ������
	printf("%p\n", arr+1);//�����ĸ��ֽ�
	printf("%p\n", &arr+1);//������ʮ���ֽ� ��������
	return 0;
}