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
//	//������ĳ�Ա�����ǹ���һ���ڴ�ռ��,����������Ҳ�й�����
//	//����������ֻ����һ����Ա��ֵ
//	return 0;
//}

//������-vs��Ĭ�϶�����Ϊ8-���Ա������С�Ƚ��еĽ�Сֵ
//union Un
//{
//	char c[5];//5���ֽ�-������Ϊ1 ��������������ȷ���������Ĵ�С
//	int i;//4���ֽ� ������Ϊ4
//	//����������ĳ�Ա������4���ֽ�,��������ܴ�СΪ9���ֽ�,,��������Ϊ4 9��������������������,Ҫ���뵽����������������-8
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));//8
//	return 0;
//}

union Un
{
	short s[7];//short���ʹ�СΪ2���ֽ�
	int i;//4���ֽ� ��������Ϊ4,14+4=18��������������������,Ҫ���뵽���������������� -16
};
int main()
{
	union Un u = { 0 };
	printf("%zd\n", sizeof(u));//9
	return 0;
}
