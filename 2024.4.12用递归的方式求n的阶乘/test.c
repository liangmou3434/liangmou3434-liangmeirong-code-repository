#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fact(unsigned int x)
{
	if (x == 0)
		return 1;
	else
		return  x* fact(x - 1);//���� x = 3,return 3*f(2)=3*2*f(1)=3*2*1
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fact(n);//ʹ�ֲ�����ret���ս׳˵�ֵ
	printf("%d", ret);//��ӡ�׳˵Ľ��
	return 0;
}