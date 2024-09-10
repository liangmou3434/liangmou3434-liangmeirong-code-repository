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
void menu()
{
	printf("**************************\n");
	printf("*****1.Add  2.Sub*********\n");
	printf("*****3.Mul  4.Div*********\n");
	printf("*****   0.exit   *********\n");
}
int main()
{
	menu();
	int(*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//没有0时 因为输入1 函数指针会调用下标为1的函数 即Sub 所以会调用错误 需要用0补位 
	int x = 0;
	int y = 0;
	int number = 0;
	int result = 0;
	do
	{
		printf("输入你要使用的功能：> ");
		scanf("%d", &number);
		if (number >= 1 && number <= 4)
		{
			printf("请输入两个操作数：> ");
			scanf("%d%d", &x, &y);
			result = (p[number])(x,y);//函数指针数组的调用 p[i](参数1，参数2)
			printf("%d\n", result);
		}
		else if (number == 0)
		{
			printf("退出计算器！！！");
			break;
		}
		else
				printf("输入错误，请重新输入！！！");

	} while (number);
	return 0;
}