#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;//����һ���ֲ�����
	int* p = &a;//��a�ĵ�ַ����p�� p��һ��ָ����� p��������a���Ӧ������
	*p = 0;//*p �ȼ���a ���ｫa�ĳ�0
	printf("%d ", a);//a���ı��0 ����ӡΪ0
	return 0;
}