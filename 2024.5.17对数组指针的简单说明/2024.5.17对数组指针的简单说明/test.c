#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* p1[10];//ָ������-ָ������Ϊ���� �������ָ��
	//p1���Ⱥ�[]��� ������� ������ָ������ ������γ�ָ������
	int(*p2)[10];//����ָ��-����ָ��Ϊָ�� �����������ĵ�ַ
	//��*p2��p2�Ⱥ�*��� ���ָ�� ����[]��� �������ָ�� �����������ĵ�ַ
	return 0;
}