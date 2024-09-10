#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "abcde";//这种初始方式自带\0
	char arr2[] = { 'a','b','c','d','e' };//这种初始化方式不带\0在字符串的结尾，\0的位置未知，但会有
	int sz1 = strlen(arr1);              //strlen函数用于计算字符串长度遇到\0停止
	int sz2 = strlen(arr2);
	printf("%d\n", sz1);//结果为5
	printf("%d\n", sz2);//结果为33 ->\0被随机分配到第33位  strlen遇到\0后停止
	return 0;
}
