#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	scanf("%d%*c%d%*c%d%*c", &a, &b, &c);//输入数字时可携带符号 为打印时删除符号写法
	printf("%d %d %d\n", a, b, c);
	return 0;
}