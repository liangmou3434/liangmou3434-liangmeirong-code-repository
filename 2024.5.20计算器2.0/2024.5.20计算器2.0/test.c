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
void Caculator(int (*p)(int,int))//形参类型为函数指针，解决了原计算机冗余（代码重复率高）问题
{
	int x = 0;
	int y = 0;
	int result = 0;
	printf("请输入两个操作数：> ");
	scanf("%d%d", &x, &y);
	result = p(x, y);//函数指针调用
	printf("%d\n", result);
}
void menu()//进入时菜单
{
	printf("**************************\n");
	printf("*****1.Add  2.Sub*********\n");
	printf("*****3.Mul  4.Div*********\n");
	printf("*****   0.exit   *********\n");
}
int main()
{
	menu();
	int result = 0;
	int number = 0;
	do
	{
		printf("输入你要使用的功能：> ");
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			Caculator(Add);//主调函数 Caculator 被调函数 Add-> 被调函数为运用函数指针进行调用
			break;
		case 2:
		    Caculator(Sub);
			break;
		case 3:
			Caculator(Mul);
			break;
		case 4:
			Caculator(Div);
			break;
		case 0:
			printf("退出计算器！！！");
			break;
		default:
			printf("输入错误，请重新输入！！！");
			break;
		}

	} while (number);
	//do while循环格式
	//do
	//{
	// 
	//}while ();
	return 0;
}