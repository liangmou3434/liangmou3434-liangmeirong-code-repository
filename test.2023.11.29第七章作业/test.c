#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int i = 0;
//int f(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)//利用循环判断n是否是素数，若n能被某个数整除，则返回0
//			return 0;//若a不是素数返回0，若是素数返回1
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//输入a的值
//	if (f(a) == 1)//调用函数判断a是否是素数，若a返回的不是0，而是1证明a是素数
//	{
//		printf("%d是素数", a);
//	}
//	else
//	{
//		printf("%d不是素数", a);
//	}
//	return 0;
//}






//int f(int n)
//{   
//	if ((n % 3 != 0) && (n % 5 == 0))//输入一个n 判断n是否是n不是3的倍数但n是5的倍数时返回1，否则返回0
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	
//	for (int i = 1; i <= 100; ++i)//判断1~100中有哪些不是3的倍数而是5的倍数
//	{
//		if (f(i) == 1)
//			printf("%d ",i);//打印这些数
//	}
//	return 0;
//}

//int f(int i)
//{
//	int m = 0;
//	i += m++;// i=i+m++;
//	return i;
//}
//int main()
//{
//	int i;
//	i = f(f(1));//调用两次函数//计算f(1)的值为i=1；
//	printf("i=%d", i);//m的初始化导致m在第二次调用时又变回0，故第二次调用时i仍为1
//	return 0;
//}

//int a = 10;
//void f()
//{
//	int a;
//    a = 8;
//}
//int main()
//{
//	f();//a的作用域在函数好中
//	printf("a=%d\n", a);//此处没有调用函数，所以只能使用全局变量a=10，打印最后结果为10
//	return 0;
//}

//int f(int n)
//{
//	return n;
//}
//int main()
//{
//	double m = 3.14;
//	m = f(m);//将double类型的数据转变成int类型发生截断变成int m=3
//	printf("%lf\t", m);//将转变成int类型的数据用浮点型打印出来结果为3.000000
//	return 0;//\t-水平制表符，将打印的数据补到八位
//}


//int a = 0, b = 0;
//void f()
//{
//	int a = 5;
//	printf("%d,%d\n", a, b);
//}
//int main()
//{
//	b = 5;
//	f();//调用函数打印a，b且b重新赋值为5，故打印结果为5，5
//	printf("%d,%d\b", a, b);//这里没有调用函数所以a使用全局变量-a=0，b=5
//	return 0;//但使用了转义字符\b-退格因此不打印b的值
//}