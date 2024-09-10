#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	printf("%s\n", __FILE__);//进行编译的源文件的名字
	printf("%s\n", __DATE__);//文件被编译的日期
	printf("%s\n", __TIME__);//文件被编译的时间
	printf("%d\n", __LINE__);//代码所在的行号
	//printf("%d\n", __STDC__);//发生报错,说明当前vs2022的环境是不完全支持ANSIC
	return 0;
}