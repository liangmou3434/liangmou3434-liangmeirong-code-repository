#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)//�ӷ�����
{
	return x + y;
}
int Sub(int x, int y)//��������
{
	return x - y;
}
int Mul(int x, int y)//�˷�����
{
	return x * y;
}
int Div(int x, int y)//��������
{
	return x / y;
}
void menu()
{
	printf("**************************\n");
	printf("*****1.Add  2.Sub*********\n");
	printf("*****3.Mul  4.Div*********\n");
	printf("*****   0.exit   *********\n");
}
int main()
{
	menu();
	int(*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//û��0ʱ ��Ϊ����1 ����ָ�������±�Ϊ1�ĺ��� ��Sub ���Ի���ô��� ��Ҫ��0��λ 
	int x = 0;
	int y = 0;
	int number = 0;
	int result = 0;
	do
	{
		printf("������Ҫʹ�õĹ��ܣ�> ");
		scanf("%d", &number);
		if (number >= 1 && number <= 4)
		{
			printf("������������������> ");
			scanf("%d%d", &x, &y);
			result = (p[number])(x,y);//����ָ������ĵ��� p[i](����1������2)
			printf("%d\n", result);
		}
		else if (number == 0)
		{
			printf("�˳�������������");
			break;
		}
		else
				printf("����������������룡����");

	} while (number);
	return 0;
}