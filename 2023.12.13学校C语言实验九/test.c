#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	double result[10] = { 0 };
//	int i = 0;
//	printf("�ɼ��Ǽǣ�\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("������%d��ѧ���ĳɼ�:", i + 1);
//		scanf("%lf", &result[i]);
//	}
//	printf("�ɼ����£�\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("��%d��ѧ���ĳɼ���%d\n", i+1, (int)result[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int  result[10] = { 0 };
//	int i = 0;
//	double max = 0;
//	double min = 100;
//	double sum = 0;
//	double average;
//	printf("�ɼ��Ǽ�:\n");
//	for (i=0; i < 10; i++)
//	{
//		printf("�������%d��ѧ���ĳɼ�:", i + 1);
//		scanf("%d", &result[i]);
//	
//		if (max < result[i])
//			max = result[i];
//		else if (max > result[i])
//			min = result[i];
//		sum += result[i];
//	}
//	average = sum / (sizeof(result) / sizeof(result[0]));
//	printf("ͳ�����£�\n");
//	printf("����ѧ������߷�Ϊ��%lf\n", max);
//	printf("����ѧ������ͷ�Ϊ��%lf\n", min);
//	printf("����ѧ����ƽ����Ϊ��%lf\n", average);
//	return 0;
//}
//
// 
//int main()
//{
//
//	char a[20] = { 'H','e','l','l','o',' ' ,'W','o','r','l','d' };
//	int i = 0;
//	printf("����ǰ��\n");
//	for (i = 0; i < 20; i++)
//	{
//		printf("%c", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 20; i++)
//
//	
//		if (a[i] >= 'a' && a[i] <= 'z')
//		{
//			a[i] += 5;
//			if (a[i] >= 'z')
//			{
//				a[i] = 'a' + (a[i] - 'z' - 1);
//			}
//		}
//		else if(a[i]>='A'&&a[i]<='z')
//	    {
//		a[i] += 5;
//		    if (a[i] >='Z')
//		    {
//			    a[i] = 'A' + (a[i] - 'Z' - 1);
//		    }
//	    }
//	printf("���ܺ�:\n");
//	for (i = 0; i < 20; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}