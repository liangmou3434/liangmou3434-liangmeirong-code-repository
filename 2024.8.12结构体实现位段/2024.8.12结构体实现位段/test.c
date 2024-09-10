#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//位段式的结构
struct S
{
	int _a : 2;//只占2个比特位
	int _b : 5;//只占5个比特位
	int _c : 10;//只占10个比特位
	int _d : 30;//只占30个比特位
	//开辟一个整型 32个比特位 2+5+10 = 17 +30>32
	//继续开辟整型 -两个int整型 8个字节

};
//int main()
//{
//	struct S s = { 0 };
//	printf("%zd\n", sizeof(s));//结果为8
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 6;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	printf("%zd\n", sizeof(s));//3
	return 0;
}