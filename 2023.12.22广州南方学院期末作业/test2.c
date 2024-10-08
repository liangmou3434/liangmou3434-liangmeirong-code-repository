#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int Figure = 0;
	double a=0, b=0, c=0;
	int Year, number;
	printf("玩家输入0退出游戏\n");
	while (1)
	{
		printf("请选择游戏：\n");
		printf("1.解一元二次方程\n");
		printf("2.判断一个年份是否是闰年\n");
		printf("3.判断一个数字是否是水仙花数\n");
		printf("你选择的数字是：");
		scanf("%d", &Figure);
		switch (Figure)
		{
		case 1:
			printf("请输入一元二次方程的a*x*x+bx+c中的a,b,c：");
			scanf("%lf,%lf,%lf", &a, &b, &c);
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			double Discriminant = b * b - 4 * a * c;//先初始化判别式
			if (Discriminant > 0)//如果判别式>0 则有两个解 用if判断句式
			{
				double root1, root2;
				double Discriminantroot = sqrt(Discriminant);//给判别式开平方
				root1 = (-b + Discriminantroot) / 2 * a;
				root2 = (-b - Discriminantroot) / 2 * a;
				printf("一元二次方程的两个解分别是：root1=%.0f,root2=%.0f", root1, root2);
			}
			else if (Discriminant == 0)//如果判别式=0，则只有一个解
			{
				double root = -b / 2 * a;
				printf("一元二次方程只有一个解，这个解是:root=%.0lf", root);
			}
			else if (Discriminant < 0)
			{
				printf("这个一元二次方程无解！！!");
			}
			break;
		case 2:
			printf("请输入一个年份：");
			scanf("%d", &Year);
			if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
			{
				printf("%d年是闰年！", Year);
			}
			else
			{
				printf("%d年不是闰年!", Year);
			}
			break;
		case 3:
			printf("请输入一个三位数：");
			scanf("%d", &number);
			int singlenumber = number % 10;//153%10=3 个位上的数字
			int tennumber = number / 10 % 10;//153/10=15-15%10=5 //十位上的数字
			int hundrednumber = number / 100;// 百位上的数字
			double	num1, num2, num3;
			num1 = pow(singlenumber, 3);//立方库函数
			num2 = pow(tennumber, 3);
			num3 = pow(hundrednumber, 3);
			if (num1 + num2 + num3 == number)
			{
				printf("%d这个三位数是水仙花数!", number);
			}
			else
			{
				printf("%d这个数不是水仙花数!", number);
			}
			break;
		case 0:
			goto next;
		default:
			printf("您输入了错误的数字！！！\n");
			break;
		}
		printf("\n");
	}
        next:
	        printf("您已经退出该游戏啦！\n");
	return 0;
}