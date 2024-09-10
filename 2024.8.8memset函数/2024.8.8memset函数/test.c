#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

int main()
{
 //以字节为单位设置的
	char arr[] = " hello world";
	memset(arr, 'x', 5);//把arr字符数组的前五个字节的位置设置成x
	printf("%s", arr);//xxxxxo world
	return 0;
}