#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ret = strcmp("abc", "atc");//һ��һ���ַ�ȥ�Ƚ� a��a�Ƚ� b��t�Ƚ� �Ƚ�ascii��ֵ
    printf("%d ", ret);//�����ֲ�һ�����ַ�ʱ��b��t)����ʱ�ַ��Ĵ�С�����ַ����Ĵ�С--���ٱȽϺ�����ַ�
	//��һ���ַ������ڵڶ����ַ��� �����ֵ>0
	//��һ���ַ������ڵڶ����ַ��� �����ֵ=0
	//��һ���ַ���С�ڵڶ����ַ��� �����ֵ<0
	return 0;
}