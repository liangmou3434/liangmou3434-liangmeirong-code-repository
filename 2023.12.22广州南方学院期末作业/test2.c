#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int Figure = 0;
	double a=0, b=0, c=0;
	int Year, number;
	printf("�������0�˳���Ϸ\n");
	while (1)
	{
		printf("��ѡ����Ϸ��\n");
		printf("1.��һԪ���η���\n");
		printf("2.�ж�һ������Ƿ�������\n");
		printf("3.�ж�һ�������Ƿ���ˮ�ɻ���\n");
		printf("��ѡ��������ǣ�");
		scanf("%d", &Figure);
		switch (Figure)
		{
		case 1:
			printf("������һԪ���η��̵�a*x*x+bx+c�е�a,b,c��");
			scanf("%lf,%lf,%lf", &a, &b, &c);
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			double Discriminant = b * b - 4 * a * c;//�ȳ�ʼ���б�ʽ
			if (Discriminant > 0)//����б�ʽ>0 ���������� ��if�жϾ�ʽ
			{
				double root1, root2;
				double Discriminantroot = sqrt(Discriminant);//���б�ʽ��ƽ��
				root1 = (-b + Discriminantroot) / 2 * a;
				root2 = (-b - Discriminantroot) / 2 * a;
				printf("һԪ���η��̵�������ֱ��ǣ�root1=%.0f,root2=%.0f", root1, root2);
			}
			else if (Discriminant == 0)//����б�ʽ=0����ֻ��һ����
			{
				double root = -b / 2 * a;
				printf("һԪ���η���ֻ��һ���⣬�������:root=%.0lf", root);
			}
			else if (Discriminant < 0)
			{
				printf("���һԪ���η����޽⣡��!");
			}
			break;
		case 2:
			printf("������һ����ݣ�");
			scanf("%d", &Year);
			if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
			{
				printf("%d�������꣡", Year);
			}
			else
			{
				printf("%d�겻������!", Year);
			}
			break;
		case 3:
			printf("������һ����λ����");
			scanf("%d", &number);
			int singlenumber = number % 10;//153%10=3 ��λ�ϵ�����
			int tennumber = number / 10 % 10;//153/10=15-15%10=5 //ʮλ�ϵ�����
			int hundrednumber = number / 100;// ��λ�ϵ�����
			double	num1, num2, num3;
			num1 = pow(singlenumber, 3);//�����⺯��
			num2 = pow(tennumber, 3);
			num3 = pow(hundrednumber, 3);
			if (num1 + num2 + num3 == number)
			{
				printf("%d�����λ����ˮ�ɻ���!", number);
			}
			else
			{
				printf("%d���������ˮ�ɻ���!", number);
			}
			break;
		case 0:
			goto next;
		default:
			printf("�������˴�������֣�����\n");
			break;
		}
		printf("\n");
	}
        next:
	        printf("���Ѿ��˳�����Ϸ����\n");
	return 0;
}