#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//λ��ʽ�Ľṹ
struct S
{
	int _a : 2;//ֻռ2������λ
	int _b : 5;//ֻռ5������λ
	int _c : 10;//ֻռ10������λ
	int _d : 30;//ֻռ30������λ
	//����һ������ 32������λ 2+5+10 = 17 +30>32
	//������������ -����int���� 8���ֽ�

};
//int main()
//{
//	struct S s = { 0 };
//	printf("%zd\n", sizeof(s));//���Ϊ8
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 6;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	printf("%zd\n", sizeof(s));//3
	return 0;
}