#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void slovequadraticequation(double a, double b, double c)
{

	double discriminant = b * b - 4 * a * c;
	if (discriminant > 0)
	{
		double root1, root2;
		double discriminantroot = sqrt(discriminant);
		root1 = ( - b + discriminantroot) / 2 * a;
		root2 = ( - b - discriminantroot) / 2 * a;
		printf("一元二次方程的两个解分别是：root1=%.0f,root2=%.0f", root1, root2);
	}
	else if (discriminant == 0)
	{
		double root = -b / 2 * a;
		printf("一元二次方程只有一个解，这个解是：%.0lf", root);
	}
	else if (discriminant < 0)
	{
		printf("这个一元二次方程无解！！!");
	}
}
int leapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int narcissisticnumber(int number)
{

	int singlenumber = number % 10;
	int tennumber = number / 10 % 10;
	int hundrednumber = number / 100;
	double	num1, num2, num3;
	num1 = pow(singlenumber, 3);
	num2 = pow(tennumber, 3);
	num3 = pow(hundrednumber, 3);
	if (num1 + num2 + num3 == number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	printf("玩家输入0退出游戏\n");
	do
	{
		int figure = 0;
		double a = 0, b = 0, c = 0;
		int year, number;
		printf("请选择游戏：\n");
		printf("1.解一元二次方程\n");
		printf("2.判断一个年份是否是闰年\n");
		printf("3.判断一个数字是否是水仙花数\n");
		printf("你选择的数字是：");
		scanf("%d", &figure);
		switch (figure)
		{
		case 1:
			printf("请输入一元二次方程的a*x*x+bx+c中的a,b,c：");
			scanf("%lf%lf%lf", &a, &b, &c);
			slovequadraticequation(a, b, c);
			break;
		case 2:
			printf("请输入年份：");
			scanf("%d", &year);
			leapyear(year);
			if (year)
			{
				printf("%d是闰年！! !", year);
			}
			else
			{
				printf("%d不是闰年！！！", year);
			}
			break;
		case 3:
			printf("请输入一个三位数：");
			scanf("%d", &number);
			if (narcissisticnumber(number))
			{
				printf("%d这个三位数是水仙花数！！！", number);
			}
			else
			{
				printf("%d这个三位数不是水仙花数！！！", number);
			}
			break;
		default:
			printf("您输入了错误的数字！！！");
			break;
		case 0:
			goto next;
			break;
		}
		printf("\n");
	} while (1);
	next:
		printf("您已经退出游戏啦！");
	return 0;
}