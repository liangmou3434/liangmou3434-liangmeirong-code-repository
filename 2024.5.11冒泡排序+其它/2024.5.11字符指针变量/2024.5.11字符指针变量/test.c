#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Stdlib.h>
int main()
{
	char arr[10] = "abcdef";
	char* p = arr;//数组名为首元素地址 把arr数组的首元素地址存入指针变量p
	//这种写法可以改变p指向对象的值
	*p = 'w';//把字符串的第一个字符改成w
	printf("%s\n", p);//打印字符串 不需要解引用-》打印字符串只需要提供起始地址
	char* p1 = "abcdef";//这种写法不可更改p1指向对象的值
	char const* p1 = "abcdef";//更准确的写法
	//*p1 = 'w';(x);
	return 0;
}