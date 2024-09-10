#define _CRT_SRCURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	while (line <= 200)//括号内语句为真执行循环语句，等循环至括号内语句为假则停止循环
	{
		printf("liangmeirong %d\n",line);
		line++;
	}
	return 0;
}
