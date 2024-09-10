#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#define Print(n,format) printf("the value "#n" is " format"\n",n)
//#运算符的运用
//#n 将n的位置替换成相对应的字符串常量 a-#n替换成"a"
//int main()
//{
//	int a = 10;
//	//printf("the vaule a is %d\n", a);
//	Print(a,"%d");
//
//	int b = 20;
//	//printf("the vaule b is %d\n", b);
//	Print(b, "%d");
//
//	float f = 5.6f;
//	//printf("the vaule f is %f\n", f);
//	Print(f, "%f");
//	return 0;
//}

//##运算符的应用   \为宏的换行符 当宏的内容过长过多,就需要再代码语句末尾加上\ 再换行
#define GNEERIC_MAX(type) \
	type type##_max(type x,type y)\
	{             \
	   return  x>y?x:y; \
	}
//GNEERIC_MAX(int)
	//int int_max(int x, int y)\
	//{             \
	//return  x > y ? x : y; \
	//}
GNEERIC_MAX(int);
GNEERIC_MAX(float);//先在主函数外引用宏,生成对应的函数在main函数内使用函数
int main()
{
	int r1 = int_max(3, 5);//利用宏生成了一个函数,可以直接使用函数
	printf("%d\n", r1);

	float r2 = float_max(3.4f, 4.5f);
	printf("%f\n", r2);
	return 0;
}