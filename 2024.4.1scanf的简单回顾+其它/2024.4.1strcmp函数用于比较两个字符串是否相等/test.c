#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ret = strcmp("abc", "atc");//一个一个字符去比较 a与a比较 b与t比较 比较ascii码值
    printf("%d ", ret);//当出现不一样的字符时（b与t)，此时字符的大小就是字符串的大小--不再比较后面的字符
	//第一个字符串大于第二个字符串 输出的值>0
	//第一个字符串等于第二个字符串 输出的值=0
	//第一个字符串小于第二个字符串 输出的值<0
	return 0;
}