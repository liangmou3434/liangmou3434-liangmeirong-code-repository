#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//枚举类型的定义方式
enum Day
{
   Mon,
   Tues,
   Wed,
   Thur,
   Fri,
   Sat,
   Sun
};

enum Color
{
	//枚举的成员变量,枚举常量
	Red,//0
	Blue,//1
	Green//2
};

int main()
{
	enum Day d = Mon;//新创建的枚举变量赋的值必须是枚举内的值
	printf("%d\n", Red);//0
	printf("%d\n", Blue);//1
	printf("%d\n", Green);//2
	return 0;
}