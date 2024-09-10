#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{     //打印直角三角形
//	for (int i = 1; i <= 5; i++)//嵌套循环的方式打印
//	{
//		for (int j = 1; j <= i; j++)//第一行只有一列，第二行有两列，第三行有三列
//		{
//			char symbol = '*';
//			printf(" %c", symbol);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char symbol = '*';
//	char BlankSpace = ' ';
//	int number = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//			int n = 5;
//			int result = 0;
//			result = n - i;
//			while (result)
//			{
//				printf(" %c", BlankSpace);//打印5-i个空格
//				result--;
//			}
//			int result1 = i;//需要使用一个新的变量，不能直接使用i值否则会改变i的值 导致循环发生错误
//			while (result1)
//			{
//				printf(" %c", symbol);//打印5-i个空格后再打印i行打印i个*
//				result1--;
//			}
//		printf("\n");
//	}
//	return 0;
//}