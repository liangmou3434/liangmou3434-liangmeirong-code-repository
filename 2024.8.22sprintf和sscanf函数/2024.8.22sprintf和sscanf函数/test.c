#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>

struct S
{
	char name[20];
	int age;
	float score;
};
int main()
{
	char buf[200] = { 0 };
	struct S s = { "zhangsan",20,65.5f };
	sprintf(buf,"%s %d %f", s.name, s.age, s.score);//把结构体转换成字符串到拷贝到buf

	printf("%s\n", buf);//以字符串的形式打印
	struct S t = { 0 };
	sscanf(buf,"%s %d %f", t.name, &(t.age), &(t.score));//把buf里的数据读到结构体变量t中
	printf("%s %d %f", t.name, t.age, t.score);//按照格式打印
	return 0;
}