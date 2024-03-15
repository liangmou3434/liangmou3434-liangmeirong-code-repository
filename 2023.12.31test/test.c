#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"Judge-Leap-Years.h"
int main()
{
	int Year;
	scanf("%d", &Year);
	if (judge_Leap_Years(Year))
	{
		printf("%d年是闰年！！！", Year);
	}
	else
	{
		
		printf("%d年不是闰年！！！", Year);
	}
	return 0;
}