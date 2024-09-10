#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//+和-
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = a + b;//2+3 = 5
//	int d = b - a;//3-2 = 1
//	printf("%d\n", c);//5
//	printf("%d\n", d);//1
//	return 0;
//}

//*
//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);//25
//	return 0;
//}

// /
//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%f\n", x);//1.000000
//	printf("%d\n", y);//1
//	return 0;
//}

//浮点数整除法
//int main()
//{
//	float x = 6.0 / 4;
//	printf("%f\n", x);//1.500000
//	return 0;
//}

//取模 %
//int main()
//{
//	int x = 6 % 4;//6整除4后得1余2
//	printf("%d\n", x);//2
//	return 0;
//}

//负数求模
//int main()
//{
//	printf("%d\n", 11 % 5);//1
//	printf("%d\n", -11 % 5);//-1
//	printf("%d\n", 11 % -5);//1
//	return 0;
//}

//连续赋值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = b = a + 3;//连续赋值,从右向左一次赋值的
//	//先把a+3赋给b 再把b赋给c
//	return 0;
//}

//复合赋值符
//int main()
//{
//	int a = 10;
//	a = a + 3;
//	a = a - 2;
//	//可以写成
//	a += 3;
//	a -= 2;
//	return 0;
//}

//自增自减单目运算符
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++,先执行a+1再使用a的值
//	printf("%d\n", b);//11
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++,先使用a的值,把10赋值给b,再a+1,a变成11
//	printf("%d\n", b);//10
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a;//先把执行a-1,再赋值给b
//	printf("%d\n", b);//9
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//先把a的值10赋值给b,再执行a-1
//	printf("%d\n", b);//10
//	printf("%d\n", a);//9
//	return 0;
//}

//强制类型转换
//int main()
//{
//	//int a = 3.14;//a是int类型,3.14是double类型,两边类型不一致,编译器去报警告
//	//为了消除警告,可以进行强制类型转换
//	int a = (int)3.14;//将3.14强制类型转换为int类型,这种强制类型转换只取整数部分
//	return 0;
//}

//占位符的限定高度
//int main()
//{
//	printf("%5d\n", 123);//(  123)默认右对齐,凑齐五个长度
//	return 0;
//}

//限定宽度
int main()
{
	printf("%-5d\n", 123);
	return 0;
}

//限定小数位数
//int main()
//{
//	printf("%.2f", 0.5);//0.50
//	return 0;
//}

//总是显示正负号
//int main()
//{
//	printf("%+d\n", 12);//+12
//	printf("%+d\n", -12);//-12
//	return 0;
//}

//限制宽度和限制小数位数结合使用
//int main()
//{
//	printf("%*.*f\n", 5, 2, 0.5);//打印宽度为5,余两位小数的结果
//	//相当于printf("%6.2f\n",0.5);
//	return 0;
//}

//输出部分字符串
//int main()
//{
//	printf("%.5s\n", "helloworld");//只输出长度为5的字符串
//	//打印结果为hello
//	return 0;
//}