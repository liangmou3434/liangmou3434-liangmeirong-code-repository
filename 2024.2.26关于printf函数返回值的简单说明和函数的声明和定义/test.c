#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int len = strlen("abcdef");
	printf("%d\n", len);
	//��strlen�ķ���ֵ��6�� ��Ϊprintfd�Ĳ���
	//printf�ķ���ֵ�Ǵ�ӡ����Ļ�ϵĸ���
	return 0;
}

����������ֿ�
//int Add(int x, int y);//�ȶ���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	printf("a=");
//	scanf("%d", &a);
//	printf("b=");
//	scanf("%d", &b);
//	z = Add(a, b);
//	printf("a+b=%d\n", z);
//   	return 0;
//}
//int Add(int x, int y)//������
//{
//	return x + y;
//}