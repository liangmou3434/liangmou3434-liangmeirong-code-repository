#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//ö�����͵Ķ��巽ʽ
enum Day
{
   Mon,
   Tues,
   Wed,
   Thur,
   Fri,
   Sat,
   Sun
};

enum Color
{
	//ö�ٵĳ�Ա����,ö�ٳ���
	Red,//0
	Blue,//1
	Green//2
};

int main()
{
	enum Day d = Mon;//�´�����ö�ٱ�������ֵ������ö���ڵ�ֵ
	printf("%d\n", Red);//0
	printf("%d\n", Blue);//1
	printf("%d\n", Green);//2
	return 0;
}