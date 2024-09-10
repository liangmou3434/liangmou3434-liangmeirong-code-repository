#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y)//加法函数
{
	return x + y;
}
int Sub(int x, int y)//减法函数
{
	return x - y;
}
int Mul(int x, int y)//乘法函数
{
	return x * y;
}
int Div(int x, int y)//除法函数
{
	return x / y;
}
void menu()//选择计算器功能的菜单
{
	printf("**************************\n");
	printf("*****1.Add  2.Sub*********\n");
	printf("*****3.Mul  4.Div*********\n");
	printf("*****   0.exit   *********\n");
}
int main()
{
	menu();
	int x = 0;
	int y = 0;
	int result = 0;
	int number = 0;
	do
	{
		printf("输入你要使用的功能：> ");
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			printf("请输入两个操作数：> ");
			scanf("%d%d", &x, &y);
			result = Add(x,y);//函数调用
			printf("%d\n", result);
			break;
		case 2:
			printf("请输入两个操作数：> ");
			scanf("%d%d", &x, &y);
			result = Sub(x, y);//函数调用
			printf("%d\n", result);
			break;
		case 3:
			printf("请输入两个操作数：> ");
			scanf("%d%d", &x, &y);
			result = Mul(x, y);//函数调用
			printf("%d\n", result);
			break;
		case 4:
			printf("请输入两个操作数：> ");
			scanf("%d%d", &x, &y);
			result = Div(x, y);//函数调用
			printf("%d\n", result);
			break;
		case 0:
			printf("退出计算器！！！");
			break;
		default:
			printf("输入错误，请重新输入！！！");
			break;
		}
		
	} while (number);
	return 0;
}