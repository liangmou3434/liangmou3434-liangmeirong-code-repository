#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
{
	int money = 0;
	printf("请输入你有多少钱： ");
	scanf("%d", &money);//输入你有多少钱
	int count = 0;
	count = money + money / 2;//可以喝的汽水瓶数
	printf("你一共可以喝%d瓶汽水\n", count);
	return 0;
}