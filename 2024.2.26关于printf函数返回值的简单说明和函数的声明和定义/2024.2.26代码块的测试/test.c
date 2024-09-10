#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"Add.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}