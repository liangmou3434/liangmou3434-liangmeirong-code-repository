#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//f9������ȡ���ϵ� �ϵ�-���������ڳ�����κ�λ�ã����ڳ���ִ�е�ĳ���ط�����ִͣ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("�����Ϸ�ѧԺ\n");
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("��ɽ��ѧ�Ϸ�ѧԺ\n");
//	}
//	return 0;
//}

int main()//�鿴��������
{//fn+f10->��ʼ���� fn+f5��������
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int j = 0; j < 10; j++)
	{
		printf(" %d", arr[j])
	}
	return 0;
}