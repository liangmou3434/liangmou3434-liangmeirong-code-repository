#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdbool.h>
//int main()
//{
//	printf("%zd\n", sizeof(char));//1
//	printf("%zd\n", sizeof(_Bool));//1
//	printf("%zd\n", sizeof(short));//2
//	printf("%zd\n", sizeof(int));//4
//	printf("%zd\n", sizeof(long));//4
//	printf("%zd\n", sizeof(long long));//8
//	printf("%zd\n", sizeof(float));//4
//	printf("%zd\n", sizeof(double));//8
//	printf("%zd\n", sizeof(long double));//8
//	return 0;
//}

//sizeof�б��ʽ������
//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%d\n", sizeof(s = b + 1));//2
//	//��b+1���Ҳ�����short����,b+1��int����,��ǿ��ת����short����
//	printf("%d\n", s);//�����ʽ�������
//	return 0;
//}