#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double result = 1.0;
//	int n = 1;
//	while (1)//�������׳�
//	{
//		printf("��������׳��е�n��1~100),���븺���˳�����");
//		scanf("%d", &n);//����n��ֵ
//		if (n < 0)
//		{
//			break;//���n<0��ѭ������
//		}
//		else if (n == 0)
//		{
//			continue;//���n=0����������Ĵ���
//		}
//		else if ((n >= 1) && (n <= 100))
//		{
//			 int result = 1,i;
//			for (i = 1; i <= n; ++i)
//			{
//				result *= i;//����n�Ľ׳�
//			}
//			printf("%d�Ľ׳���%d\n", n, result);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}




//int main()
//{
//	char ch = 0;
//	int upperNum = 0;
//	int lowerNum = 0;
//	int digitNum = 0;
//	printf("������һ���ַ������س�������");
//	ch = getchar();//дһ�ν���һ���ַ����Ķ��ַ���,�����ַ����ĵ�һ���ַ�����ѭ��
//	while (ch != '\n')
//	{
//		if ((ch >= 'A') && (ch <= 'Z'))
//		{
//			upperNum++;
//		}
//		else if ((ch >= 'a') && (ch <= 'z'))
//		{
//			lowerNum++;
//		}
//		else if((ch>='0')&&(ch<='9'))
//		{
//			digitNum++;
//		}
//		else
//		{
//			printf("���벻�Ϸ�\n");
//		}
//		ch = getchar();//��ѭ��������һ�ν����ַ�
//	}
//
//	printf("��д��ĸ������%d\n", upperNum);
//	printf("Сд��ĸ������%d\n", lowerNum);
//	printf("�����ַ�������%d\n", digitNum);
//	printf("So Easy!!!");
//	return 0;
//}

//int main()
//{
//	double result = 1.0;
//	int n = 1;
//	int i = 1;
//	printf("��������׳˵�n(1~100):");//���ڼ���׳�
//	scanf("%d", &n);
//	if ((n >= 1) && (n <= 100))
//	{
//		result = 1.0;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//	printf("%d�Ľ׳���%.0f\n", n, result);
//	return 0;
//}