#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18)
		printf("�ѳ��꣬����̸����");
	else
		printf("δ���꣬������̸����");
	return 0;
}
