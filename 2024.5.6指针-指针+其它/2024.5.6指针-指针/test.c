#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//ָ��-ָ������壺����ָ��֮���Ԫ�ظ���
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%zd\n", &arr[9] - &arr[0]);//��ʮλԪ�صĵ�ַ����һλԪ�صĵ�ַ �м��оŸ�Ԫ�� 
	printf("%zd\n", &arr[0] - &arr[9]);//���Ϊ-9
	//�����ǰ������ - ����ָ��ָ��ͬһ��ռ�
	return 0;
}