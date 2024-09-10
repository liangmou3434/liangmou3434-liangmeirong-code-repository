#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
struct stu//stu为大类结构体的名字
{
	char name[20];//学生的名字
	int age;//学生的年龄
};

void Test(struct stu* ps)//函数形参中使用结构体指针时
{
	printf("%s %d\n", ps->name, ps->age);//->操作符用于访问结构体指针指向的结构体内部的变量
}

int main()
{
	struct stu s = { "张三",18 };//给结构体赋值 s为stu类结构体一个变量名
	printf("%s %d\n", s.name, s.age);
	Test(&s);//传结构体变量s的地址到Test函数
	//结构体名.变量名 访问结构体内的变量
	return 0;
}