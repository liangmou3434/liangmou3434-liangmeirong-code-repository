#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	printf("%c\n", tolower('A'));//a ����д��ĸת����Сд��ĸ
	printf("%c\n", tolower('a'));//a ����������Сд��ĸ�򷵻�������

	printf("%c\n", toupper('a'));//A ��Сд��ĸת���ɴ�д��ĸ
	printf("%c\n", toupper('A'));//A ���������Ǵ�д��ĸ�򷵻�������
}