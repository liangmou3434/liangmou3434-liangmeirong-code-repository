#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y;
	x = 5;
	printf("x=%d\n", x);//x=5   
	y = (x = 10 / 3, x * 5);//逗号运算符从左向右依次计算，但整个表达式结果为最后一个表达式的结果，
	printf("x=%d,y=%d\n", x, y);//故有x=3 y=15
	y = ((x = 10 / 3, x * 5), x + 5);//x=3 y=3+5=8
	printf("x=%d,y=%d\n", x, y);//x=3,y=8
	return 0;
}