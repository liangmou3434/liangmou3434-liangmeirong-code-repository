#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int x, y;   //条件运算符的基本格式为 表达式1？表达式2：表达式3-先计算表达式1的值，表达式1为真执行表达式2的值，表达式1为假执行表达式3的值
//	x = 4;
//	y = 3;
//	printf("(x>y?1:1.5)=%2.1f\n", x > y?1 : 1.5);//x=4>y=3表达式1为真，执行表达式2，运行结果为1
//	x = 10;       // %2.1f意义为打印两个长度加一位小数的浮点型数
//	y = 20;
//	printf("(x>y?1:1.5)=%2.1f\n", x > y ? 1 : 1.5);//x=10>y=20表达式1为假，执行表达式3，运行结果为1.5
//	return 0;
//}