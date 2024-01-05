#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"Judge_Leap_Years.h"
int main()
{
	int Year;
	scanf("%d", &Year);
	if (Year)
	{
		printf("%d不是闰年！！！", Year);
	}
	else
	{
		printf("%d是闰年！！！", Year);
	}
	return 0;
}