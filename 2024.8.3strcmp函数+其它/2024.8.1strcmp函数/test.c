#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
	return *str1 - *str2;//str1对应的字符的ASCII码值-str2对应的ASCII码值 返回两个字符之间的ASCII码值差 但结果仍然是函数对应的
	//如果返回的结果大于0 则字符串1大于字符串2 
	//如果返回结果等于0,则字符串1等于字符串2
	//如果返回的结果小于0,则字符串1小于字符串2

}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abq";
	printf("%d\n", my_strcmp(arr1, arr2));//-1 第一个字符串比第二个字符串小,返回小于0的值
	return 0;
}
//int main()
//{
//	int ret = strcmp("abc", "atc");//一个一个字符去比较 a与a比较 b与t比较 比较ascii码值
//	printf("%d ", ret);//-1 当出现不一样的字符时（b与t)，此时字符的大小就是字符串的大小--不再比较后面的字符
//	//第一个字符串大于第二个字符串 输出的值>0
//	//第一个字符串等于第二个字符串 输出的值=0
//	//第一个字符串小于第二个字符串 输出的值<0
//	return 0;
//}