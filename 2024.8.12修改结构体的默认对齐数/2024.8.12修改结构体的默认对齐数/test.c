#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#pragma pack(1)//��Ĭ�϶������ĳ�1
struct S
{
	char c1;
	int i;
	char c2;
};
//������밴�ն�����1����
#pragma pack()//��ԭĬ�϶�����
int main()
{
	struct S s = { 0 };
	printf("%zd\n", sizeof(s));//û���޸�Ĭ�϶���������� -12
	printf("%zd\n", sizeof(s));//�޸�Ĭ�϶����������� -6
	return 0;
}

