#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
struct S
{
	int arr[1000];
	int n;
	double d;
};

void print2(const struct S* ps)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);//��ӡ�ṹ���������Ԫ��
	}
	printf("%d ", ps->n);
	printf("%lf ", ps->d);//ָ�����Ҫ�ò�����-> ָ��ṹ���ڵ�Ԫ��
}

int main() 
{
	struct S s = { {1,2,3,4,5},100,3.14 };
	print2(&s);
	return 0;
}
