#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
int check_sys(int number)
{
	//if (*((char*)&number) == 1)//���ڴ��� ����ֽ���洢˳�� 00 00 00 01 (������˳��洢)
	//	return 1;              //        С���ֽ���洢˳�� 01 00 00 00 (������˳��洢)
	////&number�õ����͵ĵ�һ���ֽڵĵ�ַ �жϵ�һ���ֽڵĵ�ַ�Ƿ���Ԫ��1 ���������С���ֽ���洢
	//else
	//	return 0;
	return *(char*)&number;
}
int main()
{
	int n = 1;
	int ret = check_sys(n);
	if (ret == 1)
		printf("С���ֽ���ģʽ");//��ǰ������С���ֽ���ģʽ�洢
	else
		printf("����ֽ���ģʽ");
	return 0;
}

//int main()
//{
//	int n = 0x11223344;
//	return 0;
//}