#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	double result[10] = { 0 };
//	int i = 0;
//	printf("成绩登记：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入%d个学生的成绩:", i + 1);
//		scanf("%lf", &result[i]);
//	}
//	printf("成绩如下：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("第%d个学生的成绩：%d\n", i+1, (int)result[i]);
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
//	printf("成绩登记:\n");
//	for (i=0; i < 10; i++)
//	{
//		printf("请输入第%d个学生的成绩:", i + 1);
//		scanf("%d", &result[i]);
//	
//		if (max < result[i])
//			max = result[i];
//		else if (max > result[i])
//			min = result[i];
//		sum += result[i];
//	}
//	average = sum / (sizeof(result) / sizeof(result[0]));
//	printf("统计如下：\n");
//	printf("所有学生中最高分为：%lf\n", max);
//	printf("所有学生中最低分为：%lf\n", min);
//	printf("所有学生的平均分为：%lf\n", average);
//	return 0;
//}
//
// 
//int main()
//{
//
//	char a[20] = { 'H','e','l','l','o',' ' ,'W','o','r','l','d' };
//	int i = 0;
//	printf("加密前：\n");
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
//	printf("加密后:\n");
//	for (i = 0; i < 20; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}