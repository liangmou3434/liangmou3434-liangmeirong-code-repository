#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//前置++，先执行a+1再赋值给c
//	b = a++;//后置++，先赋值再执行a+1
//	printf("%d %d\n", c, b);//c=6 b=6
//	return 0;
//}

//int main()
//{
//	int x = (4, 5, 6, 7, 8, 9);//逗号表达式 执行所有表达式 但把最后一个表达式的值赋值给x
//	int a = 5;
//	int b = 6;
//	int c = 0;
//	//a++ 将a的值赋给c再++ a=5+1=6 c=5-> b++=6+1=7-> c++=5+1=6->++a=6+1=7 a=7 b=7 c=6
//	c = a++, b++, c++, ++a;//非逗号表达式 将a++赋值给c 后执行后面的表达式
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}
