#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//以islower为例-小写字母a~z
//如果是小写字母a~z则返回一个非零值,如果不是小写字母a~z则返回零
int main()
{
	int ret1 = islower('a');
	printf("%d\n", ret1);//2
	int ret2 = islower('A');
	printf("%d\n", ret2);//0
	return 0;
}
