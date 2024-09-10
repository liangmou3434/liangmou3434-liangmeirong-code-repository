#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#define PTR_T int*
typedef int* ptr_t;//typedef和#define重定义的区别
int main()
{
	ptr_t p1, p2;//p1 和 p2 都是指针变量
	PTR_T p3, p4;//p3 是指针变量 p4是整型变量 （int *p3,p4）//*和p3结合 将p3变为指针变量 但p4仍然是整型变量
	return 0;
}

typedef unsigned int u_int;//将unsigned int 类型更名为 u_int
int main1()//typedef关键字的作用 类型重定义
{
	unsigned int a1 = 10;
	u_int a2 = 10;//a1 和 a2 的类型都是unsigned int
	return 0;
}

typedef int(*parr_t)[5];
//把数组指针 int（*）[5] 类型 更名为 parr_t
typedef void(*pf_t)(int);
//把函数指针 void（*）（int）类型更名 pf_t
int main2()//特殊说明数组指针和函数指针用typedef关键字
{
	parr_t p1;
	int(*p2)[5];//p1 和p2 都是数组指针类型
	pf_t p3;
	void(*p4)(int);//p3 和p4 都是函数指针类型
	return 0;
}