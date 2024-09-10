#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double  slove Euadratic equation(double a, double b, double c)//一元二次方程-自定义一个函数 -a*x*x-bx+c=0
{
	//先写判别式  b*b-4*a*c
	double Discriminant = b * b - 4 * a * c;//先初始化判别式
	if (Discriminant > 0)//如果判别式>0 则有两个解 用if判断句式
	{
		double Discriminant root = sqrt(Discriminant);//给判别式开平方
		root1 = -b + Discriminant root / 2 * a;
		root2 = -b - Discriminant root / 2 * a;
		printf("一元二次方程的两个解分别是：root1=%.0lf,root2=%.0lf", root1, root2);
	}
	else if (Discriminant == 0)//如果判别式=0，则只有一个解
	{
		root = -b / 2 * a;
		printf("一元二次方程只有一个解，这个解是：%.0lf", root);
	}
	else if (Discriminant < 0)
	{
		printf("这个一元二次方程无解！！!");
	}

}
int Leap Year(int Year)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
	{
		printf("%d年是闰年！", Year);

	}
	else
	{
		printf("%d年不是闰年", Year);

	}
}
//水仙花数：一个三位数每个位置上的数字的平方之和等于它本身 例如153=1^3+5^3+3^3//得出每个每个位置上的数字
int Narcissistic number（int  number)//例如153
{
	number in a single digi = number % 10;//153%10=3 个位上的数字
	number on the ten digits = number / 10 % 10;//153/10=15-15%10=5 //十位上的数字
	number on a hundred digits = number / 100// 百位上的数字
	num1 = pow(number in a single digi, 3);//立方库函数
	num2 = pow(number in a ten digi, 3);
	num3 = pow(number in a hundred digi, 3);
	if (num1 + num2 + num3 == number)
	{
		printf("%d这个三位数是水仙花数", number);
	}
	else
	{
		printf("%d这个数不是水仙花数", number);
	}
}
int main()
{
	int Figure = 0;
	double a, b, c;
	int Year,number;
	printf("请选择游戏：");
	printf("1.解一元二次方程\n");
	printf("2.判断一个年份是否是闰年\n");
	printf("3.判断一个数字是否是水仙花数\n");
	scanf("%d",Figure)
		switch (Figure)
		{
		case 1:
			printf("请输入一元二次方程的a*x*x+bx+c中的a,b,c：");
			scanf("%.0lf%.0lf%.0lf", a, b, b);
			solve Euadratic equation(a, b, c);
			break;
		case 2:
			printf("请输入一个年份：");
			scanf("%d", Year);
			Leap Year(Year);
			break;
		case 3:
			printf("请输入一个三位数：")；
				scanf("%d", number);
			Narcissistic number（number);
			break;
	    }
	 

	    
	return 0;
}