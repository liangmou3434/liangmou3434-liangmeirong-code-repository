#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int number = 0;
//	int Figure = 0;
//	//������ķ�ΧΪ0~32767
//	srand((unsigned int)time(NULL));//���ú������ɲ�ͬ�������
//	//time�������Է���һ��ʱ�����ʱ���-����ʱ����1970��1��1��0ʱ0��0���ʱ���ֵ����λΪ�� ��������Ϊtime_t����
//	//����0~100�������//time_t��������ʵ����32����64λ������������
//	number = rand() % 100 + 1;//���ַ�ΧΪ0~100
//	while (scanf("%d",&Figure)!=EOF)
//	{
//		if (Figure > number)
//		{
//			printf("���ֲ´��ˣ�����\n");
//		}
//		else if (Figure < number)
//		{
//			printf("���ֲ�С�ˣ�����\n");
//		}
//		if (Figure == number)
//			goto next;
//	}
//next:
//	printf("��¶���,������%d", number);
//	return 0;
//}