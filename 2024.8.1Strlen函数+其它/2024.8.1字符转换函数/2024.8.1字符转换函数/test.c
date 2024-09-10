#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	printf("%c\n", tolower('A'));//a 将大写字母转换成小写字母
	printf("%c\n", tolower('a'));//a 如果本身就是小写字母则返回它本身

	printf("%c\n", toupper('a'));//A 将小写字母转换成大写字母
	printf("%c\n", toupper('A'));//A 如果本身就是大写字母则返回它本身
}