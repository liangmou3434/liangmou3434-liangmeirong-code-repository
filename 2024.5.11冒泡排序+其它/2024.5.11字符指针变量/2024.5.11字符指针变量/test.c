#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Stdlib.h>
int main()
{
	char arr[10] = "abcdef";
	char* p = arr;//������Ϊ��Ԫ�ص�ַ ��arr�������Ԫ�ص�ַ����ָ�����p
	//����д�����Ըı�pָ������ֵ
	*p = 'w';//���ַ����ĵ�һ���ַ��ĳ�w
	printf("%s\n", p);//��ӡ�ַ��� ����Ҫ������-����ӡ�ַ���ֻ��Ҫ�ṩ��ʼ��ַ
	char* p1 = "abcdef";//����д�����ɸ���p1ָ������ֵ
	char const* p1 = "abcdef";//��׼ȷ��д��
	//*p1 = 'w';(x);
	return 0;
}