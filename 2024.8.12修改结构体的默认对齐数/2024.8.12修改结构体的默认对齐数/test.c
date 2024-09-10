#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#pragma pack(1)//把默认对齐数改成1
struct S
{
	char c1;
	int i;
	char c2;
};
//上面代码按照对齐数1计算
#pragma pack()//还原默认对齐数
int main()
{
	struct S s = { 0 };
	printf("%zd\n", sizeof(s));//没有修改默认对齐数的情况 -12
	printf("%zd\n", sizeof(s));//修改默认对齐数后的情况 -6
	return 0;
}

