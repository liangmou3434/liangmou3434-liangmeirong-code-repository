#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//��time������Ҫ����ͷ�ļ�time.h
//int main()//rand������һ�㷶Χ0~32767
//{
//	srand((unsigned int) time (NULL));//NULLΪ��ָ�롪������һ��ʱ���
//	printf("%d\n", rand());              //ʱ���Ϊ����ʱ����1970��1��1��0ʱ0��0���ʱ���ֵ-��λΪ��
//	//����a~b������� ����1~100
//	printf("%d\n", rand() % 100 + 1);//������λ�����+1��100 ��Χ��0~100
//	//��������a~b�������
//	//a+rand()%b+1
//	return 0;
//}