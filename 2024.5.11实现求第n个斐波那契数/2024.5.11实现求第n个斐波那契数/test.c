#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)//Ԥ������ָ��-Ŀ���Ǹ��߱������ڱ�������к��Ի����ĳ���ض��ľ�����Ϣ��
//6031: �����򷵻�ֵ�����Եľ���
#include<stdio.h>
#include<stdlib.h>
int Fun(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fun(n-1) + Fun(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);//��������ǵڼ���쳲�������
	int result = Fun(n);
	printf("%d\n", result);
	return 0;
}


int main1()//쳲���������1,1,2,3��5,8��������һ������ǰ�������ĺͣ�
{
	int number = 0;
	scanf("%d", &number);//����number���n������쳲������� 
	int n = 1;
	int j = 1;
	int result = 0;
	switch (number)
	{
	case 1 ://��һ��쳲�������
		printf("1");
		break;
	case 2:
		printf("1");//�ڶ���쳲�������
		break;
	default:
		while (number >= 3)//��3λ�����3λ��쳲�������
		{
			result = j + n;
			j = n;
			n = result;
			number--;
		}
		printf("%d\n", result);
		break;
	}
	return 0;
}