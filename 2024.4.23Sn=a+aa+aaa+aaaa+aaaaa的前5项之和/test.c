#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Times(int x,int y)//��һ����Ϊa+��a*10����λ��-1�η�
{                      //��aΪ��λ�� ��x10
	                    //��aΪ��λ�� ��x10x10
	int count = 0;
	int n = x;
	while (x > 0)
	{
		x = x / 10;
		count++;
	}
	x = n;
	while (count)
	{
		y = y * 10;
		count--;
	}
	return x+y;//
}
int main()
{
	int number = 0; 
	scanf("%d", &number);//����һ��һλ��a
	int sum = 0;
	int Initianumber = number;//ԭʼ������a
	for (int i = 0; i < 5; i++)
	{
		sum += number;
	    number = Times(number, Initianumber);//����ֵΪ�µ�a
	}
	printf("Sn���ܺ�Ϊ��%d", sum);
	return 0;
}