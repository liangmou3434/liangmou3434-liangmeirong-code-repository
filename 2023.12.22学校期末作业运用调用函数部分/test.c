#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void slovequadraticequation(double a, double b, double c)
{

	double discriminant = b * b - 4 * a * c;
	if (discriminant > 0)
	{
		double root1, root2;
		double discriminantroot = sqrt(discriminant);
		root1 = ( - b + discriminantroot) / 2 * a;
		root2 = ( - b - discriminantroot) / 2 * a;
		printf("һԪ���η��̵�������ֱ��ǣ�root1=%.0f,root2=%.0f", root1, root2);
	}
	else if (discriminant == 0)
	{
		double root = -b / 2 * a;
		printf("һԪ���η���ֻ��һ���⣬������ǣ�%.0lf", root);
	}
	else if (discriminant < 0)
	{
		printf("���һԪ���η����޽⣡��!");
	}
}
int leapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int narcissisticnumber(int number)
{

	int singlenumber = number % 10;
	int tennumber = number / 10 % 10;
	int hundrednumber = number / 100;
	double	num1, num2, num3;
	num1 = pow(singlenumber, 3);
	num2 = pow(tennumber, 3);
	num3 = pow(hundrednumber, 3);
	if (num1 + num2 + num3 == number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	printf("�������0�˳���Ϸ\n");
	do
	{
		int figure = 0;
		double a = 0, b = 0, c = 0;
		int year, number;
		printf("��ѡ����Ϸ��\n");
		printf("1.��һԪ���η���\n");
		printf("2.�ж�һ������Ƿ�������\n");
		printf("3.�ж�һ�������Ƿ���ˮ�ɻ���\n");
		printf("��ѡ��������ǣ�");
		scanf("%d", &figure);
		switch (figure)
		{
		case 1:
			printf("������һԪ���η��̵�a*x*x+bx+c�е�a,b,c��");
			scanf("%lf%lf%lf", &a, &b, &c);
			slovequadraticequation(a, b, c);
			break;
		case 2:
			printf("��������ݣ�");
			scanf("%d", &year);
			leapyear(year);
			if (year)
			{
				printf("%d�����꣡! !", year);
			}
			else
			{
				printf("%d�������꣡����", year);
			}
			break;
		case 3:
			printf("������һ����λ����");
			scanf("%d", &number);
			if (narcissisticnumber(number))
			{
				printf("%d�����λ����ˮ�ɻ���������", number);
			}
			else
			{
				printf("%d�����λ������ˮ�ɻ���������", number);
			}
			break;
		default:
			printf("�������˴�������֣�����");
			break;
		case 0:
			goto next;
			break;
		}
		printf("\n");
	} while (1);
	next:
		printf("���Ѿ��˳���Ϸ����");
	return 0;
}