#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ʵ��һ������is_prime���ж�һ�����ǲ���������

//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
void is_prime(int x,int y)//��x��y��Χ������
{
	int n = 1;
	for (int i = x; i < y; i++)
	{
		for (int j = 2; j < x; j++)
		{

			if (i % j == 0)//i�ܱ�2~i-1��ĳ������������Ϊ������i++������һ����
				i++;
			else//��iΪ������n=0
				n = 0;
		}
		if (n == 0)//��ӡ����
			printf("%d ", i);
	}
}

int main()
{
	is_prime(100, 200);//��Χ��100��200������
	return 0;
}
