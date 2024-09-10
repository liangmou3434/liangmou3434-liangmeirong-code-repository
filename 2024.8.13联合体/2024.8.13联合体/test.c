#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));//4
//	printf("%p\n", &u);//008FFCF4
//	printf("%p\n", &(u.i));//008FFCF4
//	printf("%p\n", &(u.c));//008FFCF4
//	//联合体的成员变量是共用一块内存空间的,所以联合体也叫共用体
//	//所以联合体只能用一个成员的值
//	return 0;
//}

//对齐数-vs的默认对齐数为8-与成员变量大小比较中的较小值
//union Un
//{
//	char c[5];//5个字节-对齐数为1 按照数据类型来确定对齐数的大小
//	int i;//4个字节 对齐数为4
//	//联合体的最大的成员变量是4个字节,联合体的总大小为9个字节,,最大对齐数为4 9不是最大对齐数的整数倍,要对齐到最大对齐数的整数倍-8
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));//8
//	return 0;
//}

union Un
{
	short s[7];//short类型大小为2个字节
	int i;//4个字节 最大对齐数为4,14+4=18不是最大对齐数的整数倍,要对齐到最大对齐数的整数倍 -16
};
int main()
{
	union Un u = { 0 };
	printf("%zd\n", sizeof(u));//9
	return 0;
}
