#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Times(int x,int y)//后一个数为a+（a*10）的位数-1次方
{                      //若a为两位数 则x10
	                    //若a为三位数 则x10x10
	int count = 0;
	int n = x;
	while (x > 0)
	{
		x = x / 10;
		count++;
	}
	x = n;
	while (count)
	{
		y = y * 10;
		count--;
	}
	return x+y;//
}
int main()
{
	int number = 0; 
	scanf("%d", &number);//输入一个一位数a
	int sum = 0;
	int Initianumber = number;//原始的数字a
	for (int i = 0; i < 5; i++)
	{
		sum += number;
	    number = Times(number, Initianumber);//返回值为新的a
	}
	printf("Sn的总和为：%d", sum);
	return 0;
}