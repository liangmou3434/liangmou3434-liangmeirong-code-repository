#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int main()
{
	int ret = 0;
	int(*pa)(int, int) = Add;//����ָ��
	int(*p[2])(int, int) = { Add,Sub };//����ָ������ 
	for (int i = 0; i < 2; i++)
	{
		ret = p[i](2, 3);//���ú���ָ�����������Ԫ��--p[0]���ú���ָ���������±�Ϊ0�ĺ���
		//(2,3)Ϊ����ȥ�Ĳ���
		printf("%d ", ret);
	}
	return 0;
}