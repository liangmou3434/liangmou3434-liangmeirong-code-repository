#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#define PTR_T int*
typedef int* ptr_t;//typedef��#define�ض��������
int main()
{
	ptr_t p1, p2;//p1 �� p2 ����ָ�����
	PTR_T p3, p4;//p3 ��ָ����� p4�����ͱ��� ��int *p3,p4��//*��p3��� ��p3��Ϊָ����� ��p4��Ȼ�����ͱ���
	return 0;
}

typedef unsigned int u_int;//��unsigned int ���͸���Ϊ u_int
int main1()//typedef�ؼ��ֵ����� �����ض���
{
	unsigned int a1 = 10;
	u_int a2 = 10;//a1 �� a2 �����Ͷ���unsigned int
	return 0;
}

typedef int(*parr_t)[5];
//������ָ�� int��*��[5] ���� ����Ϊ parr_t
typedef void(*pf_t)(int);
//�Ѻ���ָ�� void��*����int�����͸��� pf_t
int main2()//����˵������ָ��ͺ���ָ����typedef�ؼ���
{
	parr_t p1;
	int(*p2)[5];//p1 ��p2 ��������ָ������
	pf_t p3;
	void(*p4)(int);//p3 ��p4 ���Ǻ���ָ������
	return 0;
}