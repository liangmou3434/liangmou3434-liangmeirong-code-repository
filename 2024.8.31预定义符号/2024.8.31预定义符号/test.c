#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	printf("%s\n", __FILE__);//���б����Դ�ļ�������
	printf("%s\n", __DATE__);//�ļ������������
	printf("%s\n", __TIME__);//�ļ��������ʱ��
	printf("%d\n", __LINE__);//�������ڵ��к�
	//printf("%d\n", __STDC__);//��������,˵����ǰvs2022�Ļ����ǲ���ȫ֧��ANSIC
	return 0;
}