#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//#undef用来移除宏
#define MAX 100
int main()
{
	printf("%d\n", MAX);
#undef MAX
	//printf("%d\n", MAX);//移除宏后出现宏的位置会发生报错
	return 0;
}