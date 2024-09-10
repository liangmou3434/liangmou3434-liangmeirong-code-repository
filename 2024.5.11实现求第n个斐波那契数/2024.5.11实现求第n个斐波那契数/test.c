#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)//预处理器指令-目的是告诉编译器在编译过程中忽略或禁用某个特定的警告消息。
//6031: 忽略因返回值被忽略的警告
#include<stdio.h>
#include<stdlib.h>
int Fun(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fun(n-1) + Fun(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);//输入求的是第几个斐波那契数
	int result = Fun(n);
	printf("%d\n", result);
	return 0;
}


int main1()//斐波那契数：1,1,2,3，5,8……（后一个数是前两个数的和）
{
	int number = 0;
	scanf("%d", &number);//输入number求第n个数的斐波那契数 
	int n = 1;
	int j = 1;
	int result = 0;
	switch (number)
	{
	case 1 ://第一个斐波那契数
		printf("1");
		break;
	case 2:
		printf("1");//第二个斐波那契数
		break;
	default:
		while (number >= 3)//第3位或大于3位的斐波那契数
		{
			result = j + n;
			j = n;
			n = result;
			number--;
		}
		printf("%d\n", result);
		break;
	}
	return 0;
}