#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//malloc�������ٿռ�
	//int* p1 = (int*)malloc(5 * sizeof(int));//����20���ֽڵĿռ�
	//if (p1 == NULL)
	//{
	//	perror("malloc");
	//	return 1;
	//}

	//calloc���ٿռ�-��calloc������ѿ��ٵĿռ��ֵ��ʼ��Ϊ0
	int* p2 = (int*)calloc(5, sizeof(int));//����5�����͵Ŀռ�
	if (p2 == NULL)
	{
		perror("calloc");
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(p2 + i));//	0 0 0 0 0
	
	}
	free(p2);
	p2 = NULL;
	
	return 0;
}
