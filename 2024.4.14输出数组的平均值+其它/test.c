#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double sum = 0;
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);//���������Ԫ��
	}
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];//�������Ԫ�ؼ�����
	}
	double result = sum / (double)n ;//������Ԫ�ص�ƽ����
	printf("%.1lf ", result);//��ӡ����Ԫ�ص�ƽ����
	return 0;
}