#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int* p = &a;//һ��ָ�� ���a�ĵ�ַ
	int** pp = &p;//����ָ�� ���ָ�����p�ĵ�ַ
	//(int*** ppp = &pp����-�� ����ָ�� �Ϸ���������
	//pp����ָ�������ŵ���ָ�����p�ĵ�ַ ��һ����ָ�����p�д�ŵ�a�ĵ�ַ,��������a��ֵ
	printf("%p\n", *pp);//��ӡָ�����p�д�ŵ�a�ĵ�ַ 
	printf("%p\n", &a);//a�ĵ�ַ
	printf("%d\n", **pp);//��p�ĵ�ַ��һ�������� ��ӡa *ppΪָ�����p�ĵ�ַ*(*pp)��ָ�����p������
	return 0;
}