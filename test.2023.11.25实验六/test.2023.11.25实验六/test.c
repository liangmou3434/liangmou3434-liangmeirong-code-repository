#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double result = 1.0;
//	int n = 1;
//	while (1)//多次输出阶乘
//	{
//		printf("请输入求阶乘中的n（1~100),输入负数退出程序：");
//		scanf("%d", &n);//输入n的值
//		if (n < 0)
//		{
//			break;//如果n<0则循环结束
//		}
//		else if (n == 0)
//		{
//			continue;//如果n=0，继续后面的代码
//		}
//		else if ((n >= 1) && (n <= 100))
//		{
//			 int result = 1,i;
//			for (i = 1; i <= n; ++i)
//			{
//				result *= i;//计算n的阶乘
//			}
//			printf("%d的阶乘是%d\n", n, result);
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
//	printf("请输入一串字符，按回车结束：");
//	ch = getchar();//写一次接受一个字符，阅读字符串,接收字符串的第一个字符进入循环
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
//			printf("输入不合法\n");
//		}
//		ch = getchar();//在循环内再用一次接收字符
//	}
//
//	printf("大写字母个数：%d\n", upperNum);
//	printf("小写字母个数：%d\n", lowerNum);
//	printf("数字字符个数：%d\n", digitNum);
//	printf("So Easy!!!");
//	return 0;
//}

//int main()
//{
//	double result = 1.0;
//	int n = 1;
//	int i = 1;
//	printf("请输入求阶乘的n(1~100):");//用于计算阶乘
//	scanf("%d", &n);
//	if ((n >= 1) && (n <= 100))
//	{
//		result = 1.0;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//	printf("%d的阶乘是%.0f\n", n, result);
//	return 0;
//}