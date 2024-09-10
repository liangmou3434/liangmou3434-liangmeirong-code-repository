#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string>
int main()//链式访问：将一个函数的返回值作为另一个函数的参数
{
	int len = strlen("abcdef");
	prtinf("%d\n", len);//把strlen的返回值作printf的参数
}