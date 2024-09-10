#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Judge_leap_year()
{
	int Year = 0;
	scanf("%d", &Year);
	if (Year % 4 == 0 && Year % 100 != 0)
	{
		printf("%d年是闰年",Year);
	}
	else if (Year % 400 == 0)
	{
		printf("%d年是闰年",Year);
	}
	else
		printf("%d年不是闰年",Year);
}
int main()
{
	Judge_leap_year();//判断是否是闰年的函数
	return 0;
}