#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int(*p)(int, int) = Add;
	int c = Add(2, 3);//����������
	int d = (*p)(3, 4);//����ָ�����
	int e = p(3, 4);//����ָ�����->������д��
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	return 0;
}
