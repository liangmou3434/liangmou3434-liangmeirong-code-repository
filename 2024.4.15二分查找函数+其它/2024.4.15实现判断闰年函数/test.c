#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Judge_leap_year()
{
	int Year = 0;
	scanf("%d", &Year);
	if (Year % 4 == 0 && Year % 100 != 0)
	{
		printf("%d��������",Year);
	}
	else if (Year % 400 == 0)
	{
		printf("%d��������",Year);
	}
	else
		printf("%d�겻������",Year);
}
int main()
{
	Judge_leap_year();//�ж��Ƿ�������ĺ���
	return 0;
}