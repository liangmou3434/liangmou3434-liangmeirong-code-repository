#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int main()//����ָ�������ָ��-��������ź�����ַ ָ����
{
	//��ӡ������ַ
	int c = Add(2, 3);
	printf("%p\n", &Add);//&�������ͺ��������Ǻ����ĵ�ַ ���������ַ������ܴ�ӡ
	printf("%p\n", Add);
	//�������ĵ�ַ�������ָ�������
	int (*p)(int, int) = Add;
	//����ָ���д�� int��*��������
	//int Ϊָ�����ķ������� pΪ����ָ��ı����� ��int��int��Ϊָ�����Ĳ������͵ĸ����Ľ���
	return 0;
}