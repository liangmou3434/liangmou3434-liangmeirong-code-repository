#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//��islowerΪ��-Сд��ĸa~z
//�����Сд��ĸa~z�򷵻�һ������ֵ,�������Сд��ĸa~z�򷵻���
int main()
{
	int ret1 = islower('a');
	printf("%d\n", ret1);//2
	int ret2 = islower('A');
	printf("%d\n", ret2);//0
	return 0;
}
