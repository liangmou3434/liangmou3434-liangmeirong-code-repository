#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Judgment1(int x)//判断两位数的数是否是水仙花数-->全部的两位数都不是水仙花数
{
	int Single = x % 10;//个位上的数字
	int Ten = x / 10 % 10;//十位上的数字
	double number1 = pow(Single, 2);//用数字number1来接受个位数的2次方
	double number2 = pow(Ten, 2);//用数字number2来接受十位数的2次方
	if ((int)number1 + (int)number2 == x)
		printf("%d ", x);
}

void Judgment2(int x)//判断三位数的数是否是水仙花数
{
	int Single = x % 10;//个位上的数字
	int Ten = x / 10 % 10;//十位上的数字
	int hundred = x / 10 / 10 % 10;//百位上的数字
	double number1 = pow(Single, 3);//用数字number1来接受个位数的3次方
	double number2 = pow(Ten, 3);//用数字number2来接受十位数的3次方
	double number3 = pow(hundred, 3);//用数字number3来接受百位数的3次方
	if (number1 + number2 + number3 == x)
		printf("%d ", x);
}

void Judgment3(int x)//判断四位数的数是否是水仙花数
{
	int Single = x % 10;//个位上的数字
	int Ten = x / 10 % 10;//十位上的数字
	int hundred = x / 10 / 10 % 10;//百位上的数字
	int thousand = x / 10 / 10 / 10 % 10;//千位上的数字
	double number1 = pow(Single, 4);//用数字number1来接受个位数的4次方
	double number2 = pow(Ten, 4);//用数字number2来接受十位数的4次方
	double number3 = pow(hundred, 4);//用数字number3来接受百位数的4次方
	double number4 = pow(thousand, 4);//用数字number4来接受千位数的5次方
	if (number1 + number2 + number3 + number4 == x)
		printf("%d ", x);
}

void Judgment4(int x)
{

	int Single = x % 10;//个位上的数字
	int Ten = x / 10 % 10;//十位上的数字
	int hundred = x / 10 / 10 % 10;//百位上的数字
	int thousand = x / 10 / 10 / 10 % 10;//千位上的数字
	int Tenthousand = x / 10 / 10 / 10 / 10 % 10;
	double number1 = pow(Single, 5);//用数字number1来接受个位数的5次方
	double number2 = pow(Ten, 5);//用数字number2来接受十位数的5次方
	double number3 = pow(hundred, 5);//用数字number3来接受百位数的5次方
	double number4 = pow(thousand, 5);//用数字number4来接受千位数的5次方
	double number5 = pow(Tenthousand, 5);//用数字number5来接受个位数的5次方
	if (number1 + number2 + number3 + number4 + number5 == x)
		printf("%d ", x);
}
int main()//求出0～100000之间的所有“水仙花数”并输出。“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
{
	int Single = 0;//个位上的数字
	int Ten = 0;//十位上的数字
	int hundred = 0;//百位上的数字
	int n = 0;
	for (int i = 0; i < 100000; i++)
	{
		int count = 0;
		n = i;
		while (i != 0)
		{
			i /= 10;
			count++;
		}
		i = n;
		switch (count)
		{
		case 0:
			printf("%d ", i);
			break;
		case 1:
			printf("%d ", i);//一位数全是水仙花数 当i为一位数时 打印这些数字
			break;
		case 2:
			Judgment1(i);//两位数
			break;
		case 3:
			Judgment2(i);//三位数
			break;
		case 4:
			Judgment3(i);//四位数
			break;
		case 5:
			Judgment4(i);//五位数
			break;
		}
	}
	return 0;
}
