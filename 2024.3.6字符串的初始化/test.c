#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "abcde";//���ֳ�ʼ��ʽ�Դ�\0
	char arr2[] = { 'a','b','c','d','e' };//���ֳ�ʼ����ʽ����\0���ַ����Ľ�β��\0��λ��δ֪��������
	int sz1 = strlen(arr1);              //strlen�������ڼ����ַ�����������\0ֹͣ
	int sz2 = strlen(arr2);
	printf("%d\n", sz1);//���Ϊ5
	printf("%d\n", sz2);//���Ϊ33 ->\0��������䵽��33λ  strlen����\0��ֹͣ
	return 0;
}
