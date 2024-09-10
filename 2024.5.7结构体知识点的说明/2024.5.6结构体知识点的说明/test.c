#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct student//结构体是一些值的集合 ，这些值称为成员变量，结构的每个成员都可以是不同类型的变量
{
	char name[20];//名字//成员变量
	int age;//年龄
	int high;//身高
	int weight;//体重
};
int main4()//结构体-自定义的数据类型-》用来描述一个复杂的对象  -- 定义在main函数外
{

	return 0;
}

struct student s1;
struct student s2;//s1,s2为局部变量
struct student
{
	int age;
}; s5，s6，s7;//s5,s6,s7为全局变量
int main3()
{

	return 0;
}

struct student
{
	char name[20];
	int age;
	int high;
	int weight;
};
int main2()//结构体变量的初始化
{
	struct student s1 = { "梁某", 19 , 155 ,50 };//->按顺序初始化
	struct student s2 = { .age = 19,.high = 155,.name = "梁某",.weight = 50 };//->不按顺序初始化
	return 0;
}

struct S
{
	char c;
	int n;
};
struct B
{
	struct S s;//此处为结构体的嵌套
	int* p;
	char arr[10];
	float Sc;
};
int main1()
{
	//初始化嵌套的结构体
	struct B b = { {'w',19},NULL,"hehe",85.5f };//先用大括号对结构体S 进行初始化 再继续对构体B初始化
	return 0;
}

struct student
{
	char name[20];
	int age;
	int high;
	int weight;
};
int main()//打印结构体
{
	struct student s1 = { "梁某", 19 , 155 ,50 };//->按顺序初始化解结构体
	struct student s2 = { .age = 19,.high = 155,.name = "梁某",.weight = 50 };//->不按顺序初始化结构体
	printf("%s现在%d岁的,身高是%d,体重是%d\n", s1.name, s1.age, s1.high, s1.weight);
	printf("%d岁身高为%d的%s现在体重是%d\n", s2.age, s2.high, s2.name, s2.weight);
	return 0;
}