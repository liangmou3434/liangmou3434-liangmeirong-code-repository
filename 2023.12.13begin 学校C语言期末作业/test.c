#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double  slove Euadratic equation(double a, double b, double c)//һԪ���η���-�Զ���һ������ -a*x*x-bx+c=0
{
	//��д�б�ʽ  b*b-4*a*c
	double Discriminant = b * b - 4 * a * c;//�ȳ�ʼ���б�ʽ
	if (Discriminant > 0)//����б�ʽ>0 ���������� ��if�жϾ�ʽ
	{
		double Discriminant root = sqrt(Discriminant);//���б�ʽ��ƽ��
		root1 = -b + Discriminant root / 2 * a;
		root2 = -b - Discriminant root / 2 * a;
		printf("һԪ���η��̵�������ֱ��ǣ�root1=%.0lf,root2=%.0lf", root1, root2);
	}
	else if (Discriminant == 0)//����б�ʽ=0����ֻ��һ����
	{
		root = -b / 2 * a;
		printf("һԪ���η���ֻ��һ���⣬������ǣ�%.0lf", root);
	}
	else if (Discriminant < 0)
	{
		printf("���һԪ���η����޽⣡��!");
	}

}
int Leap Year(int Year)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
	{
		printf("%d�������꣡", Year);

	}
	else
	{
		printf("%d�겻������", Year);

	}
}
//ˮ�ɻ�����һ����λ��ÿ��λ���ϵ����ֵ�ƽ��֮�͵��������� ����153=1^3+5^3+3^3//�ó�ÿ��ÿ��λ���ϵ�����
int Narcissistic number��int  number)//����153
{
	number in a single digi = number % 10;//153%10=3 ��λ�ϵ�����
	number on the ten digits = number / 10 % 10;//153/10=15-15%10=5 //ʮλ�ϵ�����
	number on a hundred digits = number / 100// ��λ�ϵ�����
	num1 = pow(number in a single digi, 3);//�����⺯��
	num2 = pow(number in a ten digi, 3);
	num3 = pow(number in a hundred digi, 3);
	if (num1 + num2 + num3 == number)
	{
		printf("%d�����λ����ˮ�ɻ���", number);
	}
	else
	{
		printf("%d���������ˮ�ɻ���", number);
	}
}
int main()
{
	int Figure = 0;
	double a, b, c;
	int Year,number;
	printf("��ѡ����Ϸ��");
	printf("1.��һԪ���η���\n");
	printf("2.�ж�һ������Ƿ�������\n");
	printf("3.�ж�һ�������Ƿ���ˮ�ɻ���\n");
	scanf("%d",Figure)
		switch (Figure)
		{
		case 1:
			printf("������һԪ���η��̵�a*x*x+bx+c�е�a,b,c��");
			scanf("%.0lf%.0lf%.0lf", a, b, b);
			solve Euadratic equation(a, b, c);
			break;
		case 2:
			printf("������һ����ݣ�");
			scanf("%d", Year);
			Leap Year(Year);
			break;
		case 3:
			printf("������һ����λ����")��
				scanf("%d", number);
			Narcissistic number��number);
			break;
	    }
	 

	    
	return 0;
}