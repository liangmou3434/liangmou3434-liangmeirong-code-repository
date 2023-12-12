#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int b = 3;//全局变量 用于所有函数
//int main()
//{
//	int a = 2;//局部变量 在主函数内部使用
//	return 0; //局部变量和全局变量变量名相同时 优先展示局部变量
//}

//int jiecheng(int n)
//{
//	int result = 1;
//	if (n < 1)
//		return -1;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			result = result * i;
//		}
//		return result;
//	}
//}
//int main()
//{
//	int result = 1;
//	int n = 2;
//
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("请输入一个整数：");
//		printf("%d的阶乘为：%d\n", n, jiecheng(n));//实验三调用函数计算阶乘
//		if (n == 0)
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	float i = 0.0;
//	float result = 1.0;
//	float num = 0.0;
//	float n = 0.0;
//	for (i = 1.0; i <= 99.0; i++)
//	{
//		n=result/i;
//		num += n;
//		
//	}
//	printf("%f", num);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			n++;
//		if (i / 10 == 9)
//			n++;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int year=0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num1=0, num2=0, num3=0, num4=0, num5=0;
//	int num6=0, num7=0, num8=0, num9=0, num=0;
//	int temp=0;
//	scanf("%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5);
//	scanf("%d,%d,%d,%d,%d", &num6, &num7, &num8, &num9, &num);
//	printf("num1=%d,num2=%d,num3=%d,num4=%d,num5=%d\n", num1, num2, num3, num4, num5);
//	printf("num6=%d,num7=%d,num8=%d,num9=%d,num=%d\n", num6, num7, num8, num9, num);
//
//	if (num9 > num8)
//	{
//		temp = num8;
//		num8 = num9;
//		num9 = temp;
//	}
//	else
//	{
//		num9 = num9;
//		num8 = num8;
//	}
//	if (num8 > num7)
//	{
//		temp = num7;
//		num7 = num8;
//		num8 = temp;
//	}
//	else
//	{
//		num8 = num8;
//		num7 = num7;
//	}
//    if (num7> num6)
//	{
//		temp = num6;
//		num6 = num7;
//		num7 = temp;
//	}
//	else
//	{
//		num7 = num7;
//		num6 = num6;
//	}
//    if (num6 > num5)
//	{
//		temp = num5;
//		num5 = num6;
//		num6 = temp;
//	}
//	else
//	{
//		num6 = num6;
//		num5 = num5;
//	}
//    if (num5 > num4)
//	{
//		temp = num4;
//		num4 = num5;
//		num5 = temp;
//	}
//	else
//	{
//		num5 = num5;
//		num4 = num4;
//	}
//    if (num4 > num3)
//	{
//		temp = num3;
//		num3 = num4;
//		num4 = temp;
//	}
//	else
//	{
//		num4 = num4;
//		num3 = num3;
//	}
//	if (num3 > num2)
//	{
//		temp = num2;
//		num2 = num3;
//		num3 = temp;
//	}
//	else
//	{
//		num3 = num3;
//		num2 = num2;
//	}
//	 if (num2 > num1)
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	 else
//	 {
//		 num1 = num1;
//		 num2 = num2;
//	 }
//	 if (num1 > num)
//	{
//		temp = num;
//		num = num1;
//		num1 = temp;
//	}
//	 else
//	 {
//		 num = num;
//		 num1 = num1;
//	 }
//	printf("%d", num);
//	return 0;
//}