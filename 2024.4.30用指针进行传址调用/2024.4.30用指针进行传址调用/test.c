#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int* x, int* y)//��ָ�����x��ָ�����y�ֱ���ֲܾ�����a�ĵ�ַ�;ֲ�����b�ĵ�ַ
{
	int tmp = 0;//��������������ֵ
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰa=%d,b=%d\n", a, b);//��ӡ����ǰ�������ֲ�����
	swap(&a,&b);//���ֲ�����a,�ֲ�����b�ĵ�ַ��ȥ
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}