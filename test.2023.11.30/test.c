#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18)
		printf("已成年，可以谈恋爱");
	else
		printf("未成年，不可以谈恋爱");
	return 0;
}
