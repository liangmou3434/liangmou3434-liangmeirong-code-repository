#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	char c;
//	int n;
//	int arr[];//��������-��д�� int arr[0]
//};

//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%zd\n", sizeof(s));//4-sizeof���ص����ֽṹ��С����������������ڴ�
//	//��������������Ľṹ�忪�ٶ�̬�ڴ�ռ�
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//��ʱ����5�����ʹ�С-20���ֽڵĿռ����������
//	//�ҿ�����realloc�����ռ��С,����Ĵ�С�ǿ��Ե�����
//
//	//���ṹ��ĳ�Ա��ֵ
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//��realloc�������ռ�
//    struct S* ptr	= (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//  //��һ����������Ҫ�����Ķ�̬�ڴ�ռ����ʼ��ַ,�ڶ��������ŵ�����Ŀռ��С
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	//�ͷſռ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)//�жϿռ��Ƿ񿪱ٳɹ�
		return 1;
	ps->arr = (int*)malloc(5 * sizeof(int));//���ýṹ���е�����ָ��,ָ��һ�鶯̬���ٵĿռ�
	if (ps->arr == NULL)//�жϿռ��Ƿ񿪱ٳɹ�
		return 1;
	ps->n = 100;
	for (int i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	//���������С
	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	//�ͷŶ�̬�ڴ�ռ�
	free(ps->arr);
	free(ps);
	ps->arr = NULL;
	ps = NULL;
	return 0;
}