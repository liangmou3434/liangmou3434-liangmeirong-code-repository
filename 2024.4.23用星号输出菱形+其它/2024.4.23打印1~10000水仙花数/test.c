#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Judgment1(int x)//�ж���λ�������Ƿ���ˮ�ɻ���-->ȫ������λ��������ˮ�ɻ���
{
	int Single = x % 10;//��λ�ϵ�����
	int Ten = x / 10 % 10;//ʮλ�ϵ�����
	double number1 = pow(Single, 2);//������number1�����ܸ�λ����2�η�
	double number2 = pow(Ten, 2);//������number2������ʮλ����2�η�
	if ((int)number1 + (int)number2 == x)
		printf("%d ", x);
}

void Judgment2(int x)//�ж���λ�������Ƿ���ˮ�ɻ���
{
	int Single = x % 10;//��λ�ϵ�����
	int Ten = x / 10 % 10;//ʮλ�ϵ�����
	int hundred = x / 10 / 10 % 10;//��λ�ϵ�����
	double number1 = pow(Single, 3);//������number1�����ܸ�λ����3�η�
	double number2 = pow(Ten, 3);//������number2������ʮλ����3�η�
	double number3 = pow(hundred, 3);//������number3�����ܰ�λ����3�η�
	if (number1 + number2 + number3 == x)
		printf("%d ", x);
}

void Judgment3(int x)//�ж���λ�������Ƿ���ˮ�ɻ���
{
	int Single = x % 10;//��λ�ϵ�����
	int Ten = x / 10 % 10;//ʮλ�ϵ�����
	int hundred = x / 10 / 10 % 10;//��λ�ϵ�����
	int thousand = x / 10 / 10 / 10 % 10;//ǧλ�ϵ�����
	double number1 = pow(Single, 4);//������number1�����ܸ�λ����4�η�
	double number2 = pow(Ten, 4);//������number2������ʮλ����4�η�
	double number3 = pow(hundred, 4);//������number3�����ܰ�λ����4�η�
	double number4 = pow(thousand, 4);//������number4������ǧλ����5�η�
	if (number1 + number2 + number3 + number4 == x)
		printf("%d ", x);
}

void Judgment4(int x)
{

	int Single = x % 10;//��λ�ϵ�����
	int Ten = x / 10 % 10;//ʮλ�ϵ�����
	int hundred = x / 10 / 10 % 10;//��λ�ϵ�����
	int thousand = x / 10 / 10 / 10 % 10;//ǧλ�ϵ�����
	int Tenthousand = x / 10 / 10 / 10 / 10 % 10;
	double number1 = pow(Single, 5);//������number1�����ܸ�λ����5�η�
	double number2 = pow(Ten, 5);//������number2������ʮλ����5�η�
	double number3 = pow(hundred, 5);//������number3�����ܰ�λ����5�η�
	double number4 = pow(thousand, 5);//������number4������ǧλ����5�η�
	double number5 = pow(Tenthousand, 5);//������number5�����ܸ�λ����5�η�
	if (number1 + number2 + number3 + number4 + number5 == x)
		printf("%d ", x);
}
int main()//���0��100000֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
{
	int Single = 0;//��λ�ϵ�����
	int Ten = 0;//ʮλ�ϵ�����
	int hundred = 0;//��λ�ϵ�����
	int n = 0;
	for (int i = 0; i < 100000; i++)
	{
		int count = 0;
		n = i;
		while (i != 0)
		{
			i /= 10;
			count++;
		}
		i = n;
		switch (count)
		{
		case 0:
			printf("%d ", i);
			break;
		case 1:
			printf("%d ", i);//һλ��ȫ��ˮ�ɻ��� ��iΪһλ��ʱ ��ӡ��Щ����
			break;
		case 2:
			Judgment1(i);//��λ��
			break;
		case 3:
			Judgment2(i);//��λ��
			break;
		case 4:
			Judgment3(i);//��λ��
			break;
		case 5:
			Judgment4(i);//��λ��
			break;
		}
	}
	return 0;
}
