#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//#define name stuff
#define Max 1000//定义常量
#define STR "liangmou"//定义字符串
#define forever for(;;) //形成一个死循环
#define SQUARE(x) ((x)*(x))
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int m = Max;
//	printf("%d\n", m);
//	printf("%s\n", STR);
//	return 0;
//}

//实现一个宏,计算一个数的平方
//int main()
//{
//	int a = 5;
//	int ret = SQUARE(a);
//	printf("%d\n", ret);//25
//	return 0;
//}

//写一个宏求两个数的最大值
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int m1 = MAX(a, b);
//	printf("%d\n", m1);//5
//	int m2 = MAX(a++, b++);//先使用a和b的值,再++
//	//int m2 = ((a++)>(b++)?(a++):(b++))
//	        //    3     5 - >运算符计算后 a变成4,b变成6 所以m2为6,用完b=6后再++变成7
//	printf("%d\n", m2);//6 m2的结果为6 
//	printf("a=%d\n", a);//4 a的结果为4
//	printf("b=%d\n", b);//7 所以  b的结果为7
//	return 0;
//}

//宏的参数可以出现类型
#define Malloc(n,type) (type*)malloc(n*sizeof(type))
int main()
{
	//正常情况下用malloc开辟动态空间
	int* p = (int)malloc(10 * sizeof(int));//开辟40个字节的空间

	//利用宏来开辟空间
	int* ptr = Malloc(10, int);
	return 0;
}