#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//����assert������Ҫ����ͷ�ļ�<assert.h>
//#define NDEBUG//���ڹر�assert���� - �� ����assert����ʱֻ��ע�͵�
int main()
{
	//assert - ��������ʱȷ���������ָ����������������Ͼͱ�����ֹ ��if������� 
	//�ŵ㣺����Ķ�������ܿ�����ر�assert����
	int a = 10;
	int b = 20;
	int* p = &a;
	assert(p != NULL);//p!=��ָ����������� ��p Ϊ��ָ���������ֹ
	printf("%d", *p);
	return 0;
}