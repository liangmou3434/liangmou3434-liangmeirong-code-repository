#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//}; b3, b4;//b3和b4为全局变量
//
//struct Book b1;//全局变量
//
//int main()
//{
//	struct Book b2;//局部变量
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	char author[20];
//	float price;
//};
//
//
//
//int main()
//{
//	struct Book b1 = { "liangmou3434","liangmou",29.99f };//按照成员变量创建的顺序来赋值
//	struct Book b2 = { .author = "liangmou",.name = "liangmou3434",.price = 28.88f };//乱序初始化结构体
//	printf("%s %s %f\n", b1.name, b1.author, b1.price);//liangmou3434 liangmou 29.990000
//	printf("%s %f %s\n", b2.author,b2.price, b2.name);//liangmou 28.879999 liangmou3434
//	return 0;
//}

////匿名结构体
//struct
//{
//	char c;
//	int i;
//	double d;
//} s = { 'R',9,3.14};
//
//int main()
//{
//	printf("%c %d %lf\n", s.c, s.i, s.d);//R 9 3.140000
//	return 0;
//}

//struct Node//结构体的自引用
//{
//	int data;//结构体本身的成员变量
//	struct Node* next;//下一个节点的地址-链表的方式
//};


//struct S1
//{
//	char c1;//1个字节
//	int i;//4个字节
//	char c2;//1个字节
//};


//struct S2
//{
//	char c1;//1个字节 第一个成员变量存在离起始地址偏移量为0的位置,占一个字节
//	char c2;//1个字节 vs默认的对齐数为8 与1个字节的较小值为1  存在第二个字节位置
//	int i;//4个字节 vs默认的对齐数为8 与1个字节的较小值为4 存在4的倍数的字节位置 第四个字节位置 4 5 6 7 存放四个字节
//
//};


struct S3
{
	double d;//8个字节 0~7个字节的位置
	char c;//1个字节 第8个字节的位置
	int i;//4个字节 对齐数为4 4的下一个倍数为第十二个字节位置 12 13 14 15 存四个字节 0~15一共偏移(占用了16个字节)
};

struct S4
{
	char c1;//1个字节 放在0字节位置
	struct S3 s3;//16个字节 对齐数为8 8+16 = 24 - 1 = 23 
	double d;//8个字节 24 + 8 = 32-1 = 31 0~31 = 32 
	//如果嵌套了结构体的情况，嵌套的结构体成员对齐到自己的成员中最大对齐数的整数倍处-s3成员的最大对齐数为8 所以s3只要对齐到8的倍数就可以了
	//结构体的整体大小就是所有最大对齐数（含嵌套结构体中成员的对齐数）的整数倍
	//s4最大的对齐数为8 所以s4的大小为8的整数倍
};

//int main()
//{
//	//struct S1 s1 = { 0 };
//	//struct S2 s2 = { 0 };
//	//struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	//printf("%zd\n", sizeof(s1));//12 %zd占位符打印的是无符号整型
//	//printf("%zd\n", sizeof(s2));//8
//	//printf("%zd\n", sizeof(s3));//16- 到16的起始位置
//	 	printf("%zd\n", sizeof(s4));//16- 到16的起始位置
//	//结构体的大小为成员变量最大对齐数的倍数
//	return 0;
//}

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	struct A sa = { 0 };
	//scanf("%d", &(sa._b));//这是错误的由于位段是使用字节内的比特位,对于上一个字节剩下的比特位下一个成员变量如果足够,会继续使用
	//而比特位在内存中是没有地址的,所以不能使用scanf直接给变量输入赋值

	//正确示范
	int b = 0;
	scanf("%d", &b);
	sa._b = b;
	//需要重新创建一个变量,用scanf给变量输入值,再把值赋值给结构体内的成员变量
	return 0;
}
//

