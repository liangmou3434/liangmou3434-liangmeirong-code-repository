#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//二进制数字：0，1组成
	//八进制数字：0，1,2,3,4,5,6,7
	//十进制数字：0,1,2,3,4,5,6,7,8,9
	//十六进制数字：0~9 A=10 B=11 C=12 D=13  E=14 F=15或者（a~f） 
	int a = 15;
	//15转二进制数字 00000000  00000000 00000000 00001111
	//15的八进制数字 17
   //八进制 1*8^1+7*8^0
	printf("%d\n", a);//以十进制数打印
	printf("%o\n", a);//以八进制数打印
	//二进制转八进制
	//01 101 011
	//1   5   3 -> 从右边开始 ，每三位数字转一个八进制数字 最后不够三个数字时  直接换算
	//二进制转十六进制
	//0110 1011
	// 6    b ->从右边开始，每四位数字转一个十六进制数字 最后不够四个数字时 直接换算
	//十进制转十六进制 先把十进制转成二进制 再把二进制转成十六进制 （十进制转八进制同理）
	return 0;
}