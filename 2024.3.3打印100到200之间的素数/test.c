#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int result = 0;
	for (i = 100; i < 200; i++)//����ķ�Χ��100~200
	{
		for (n = 2; n < i; n++)
		{
			result = i % n;
			if (result == 0)//��i�ܹ���i+1~200��ĳ����������i++
				i++;
			else//���޷�����������Ϊ������ӡi
				j = 0;
		}
		if (j == 0)
			printf("%d ", i);
	}
	return 0;
}