#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

int main()
{
 //���ֽ�Ϊ��λ���õ�
	char arr[] = " hello world";
	memset(arr, 'x', 5);//��arr�ַ������ǰ����ֽڵ�λ�����ó�x
	printf("%s", arr);//xxxxxo world
	return 0;
}