#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p = NULL;
	//int ���͵�ָ�����+1�����ĸ��ֽ�
	printf("%p\n", p);
	printf("%p\n", p + 1);
	char* p1 = NULL;
	printf("%p\n", p1);
	printf("%p\n", p1 + 1);//char ���͵�ָ�����+1����һ���ֽ�
	//�Դ����� ָ�����+1������sizeof�����ͣ�
	return 0;
}