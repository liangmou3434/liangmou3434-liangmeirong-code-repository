#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//+��-
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = a + b;//2+3 = 5
//	int d = b - a;//3-2 = 1
//	printf("%d\n", c);//5
//	printf("%d\n", d);//1
//	return 0;
//}

//*
//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);//25
//	return 0;
//}

// /
//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%f\n", x);//1.000000
//	printf("%d\n", y);//1
//	return 0;
//}

//������������
//int main()
//{
//	float x = 6.0 / 4;
//	printf("%f\n", x);//1.500000
//	return 0;
//}

//ȡģ %
//int main()
//{
//	int x = 6 % 4;//6����4���1��2
//	printf("%d\n", x);//2
//	return 0;
//}

//������ģ
//int main()
//{
//	printf("%d\n", 11 % 5);//1
//	printf("%d\n", -11 % 5);//-1
//	printf("%d\n", 11 % -5);//1
//	return 0;
//}

//������ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//������ֵ,��������һ�θ�ֵ��
//	//�Ȱ�a+3����b �ٰ�b����c
//	return 0;
//}

//���ϸ�ֵ��
//int main()
//{
//	int a = 10;
//	a = a + 3;
//	a = a - 2;
//	//����д��
//	a += 3;
//	a -= 2;
//	return 0;
//}

//�����Լ���Ŀ�����
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++,��ִ��a+1��ʹ��a��ֵ
//	printf("%d\n", b);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++,��ʹ��a��ֵ,��10��ֵ��b,��a+1,a���11
//	printf("%d\n", b);//10
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a;//�Ȱ�ִ��a-1,�ٸ�ֵ��b
//	printf("%d\n", b);//9
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//�Ȱ�a��ֵ10��ֵ��b,��ִ��a-1
//	printf("%d\n", b);//10
//	printf("%d\n", a);//9
//	return 0;
//}

//ǿ������ת��
//int main()
//{
//	//int a = 3.14;//a��int����,3.14��double����,�������Ͳ�һ��,������ȥ������
//	//Ϊ����������,���Խ���ǿ������ת��
//	int a = (int)3.14;//��3.14ǿ������ת��Ϊint����,����ǿ������ת��ֻȡ��������
//	return 0;
//}

//ռλ�����޶��߶�
//int main()
//{
//	printf("%5d\n", 123);//(  123)Ĭ���Ҷ���,�����������
//	return 0;
//}

//�޶����
int main()
{
	printf("%-5d\n", 123);
	return 0;
}

//�޶�С��λ��
//int main()
//{
//	printf("%.2f", 0.5);//0.50
//	return 0;
//}

//������ʾ������
//int main()
//{
//	printf("%+d\n", 12);//+12
//	printf("%+d\n", -12);//-12
//	return 0;
//}

//���ƿ�Ⱥ�����С��λ�����ʹ��
//int main()
//{
//	printf("%*.*f\n", 5, 2, 0.5);//��ӡ���Ϊ5,����λС���Ľ��
//	//�൱��printf("%6.2f\n",0.5);
//	return 0;
//}

//��������ַ���
//int main()
//{
//	printf("%.5s\n", "helloworld");//ֻ�������Ϊ5���ַ���
//	//��ӡ���Ϊhello
//	return 0;
//}