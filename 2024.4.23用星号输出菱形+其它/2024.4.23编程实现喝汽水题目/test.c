#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
{
	int money = 0;
	printf("���������ж���Ǯ�� ");
	scanf("%d", &money);//�������ж���Ǯ
	int count = 0;
	count = money + money / 2;//���Ժȵ���ˮƿ��
	printf("��һ�����Ժ�%dƿ��ˮ\n", count);
	return 0;
}