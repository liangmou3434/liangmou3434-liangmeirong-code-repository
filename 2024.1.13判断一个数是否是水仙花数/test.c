#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()//水仙花数：一个三位数，个位数和十位数和百位数的三次方加起来为原数例：153=1x1x1+5x5x5+3x3x3
//{
//	int number = 0;
//	int singlenumber = 0;
//	int tennumber = 0;
//	int hundrenumber = 0;
//	double number1, number2, number3;
//	scanf("%d", &number);
//	singlenumber = number % 10;//153%10=3
//	tennumber = number / 10 % 10;//153/10=15 15%10=5
//	hundrenumber = number / 10/10;//153/10=15 15%10=1
//	number1 = pow(singlenumber, 3);
//	number2 = pow(tennumber, 3);
//	number3 = pow(hundrenumber, 3);
//	if (number == number1 + number2 + number3)
//	{
//		printf("%d这个三位数是水仙花数", number);
//	}
//	else
//	{
//		printf("%d这个三位数不是水仙花数", number);
//	}
//	return 0;
//}