#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p1 = (int*)malloc(5 * sizeof(int));//����20���ֽڵĿռ�
//	if (p1 == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	//ʹ�ÿռ�
//	for (int i = 0; i < 5; i++)
//	{
//		*(p1 + i) = i + 1;
//	}
//	//�ѿռ������40���ֽ�
//	int* p2 = (int*)realloc(p1, 40);//p1Ϊ��Ҫ���ڵĿռ����ʼ��ַ,40Ϊ������Ŀռ��С
//	if (p2 != NULL)
//	{
//		p1 = p2;
//		//ʹ����ʮ���ֽڵĿռ�
//		for (int i = 5; i < 10; i++)
//		{
//			*(p1 + i) = i + 1;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p1 + i));//1 2 3 4 5 6 7 8 9 10
//		}
//		free(p1);//�ͷ�p1
//		p1 = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		//����ʧ��
//		free(p1);
//		p1 = NULL;
//	}
//	return 0;
//}

//realloc��������ʵ�ֺ�mallocһ���Ĺ���
int main()
{
	realloc(NULL, 20);//�൱�ڿ���20���ֽڵĿռ�
	return 0;
}