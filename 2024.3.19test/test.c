#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 6;
	int b = 10;
	int set = 0;
	int result = 0;
	set = a > 5 && b++ == 10;
	printf("%d", result,b);
	result = a > 8 && b++ == 10;
	printf("%d %d", result, b);
	return 0;
}