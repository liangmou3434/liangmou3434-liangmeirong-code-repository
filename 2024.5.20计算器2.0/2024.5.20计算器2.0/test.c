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
void Caculator(int (*p)(int,int))//�β�����Ϊ����ָ�룬�����ԭ��������ࣨ�����ظ��ʸߣ�����
{
	int x = 0;
	int y = 0;
	int result = 0;
	printf("������������������> ");
	scanf("%d%d", &x, &y);
	result = p(x, y);//����ָ�����
	printf("%d\n", result);
}
void menu()//����ʱ�˵�
{
	printf("**************************\n");
	printf("*****1.Add  2.Sub*********\n");
	printf("*****3.Mul  4.Div*********\n");
	printf("*****   0.exit   *********\n");
}
int main()
{
	menu();
	int result = 0;
	int number = 0;
	do
	{
		printf("������Ҫʹ�õĹ��ܣ�> ");
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			Caculator(Add);//�������� Caculator �������� Add-> ��������Ϊ���ú���ָ����е���
			break;
		case 2:
		    Caculator(Sub);
			break;
		case 3:
			Caculator(Mul);
			break;
		case 4:
			Caculator(Div);
			break;
		case 0:
			printf("�˳�������������");
			break;
		default:
			printf("����������������룡����");
			break;
		}

	} while (number);
	//do whileѭ����ʽ
	//do
	//{
	// 
	//}while ();
	return 0;
}