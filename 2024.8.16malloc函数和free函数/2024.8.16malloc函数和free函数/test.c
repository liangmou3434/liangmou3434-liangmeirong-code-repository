#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//����20���ֽڵĿռ��������5������
	int* p = (int*)malloc(20);//����20���ֽڵĿռ�,����malloc�������صĽ����void*������Ҫ����ǿ������ת��
	//���ٿռ��,�жϿ����Ƿ�ɹ�,����ʧ�ܷ���null,���ٳɹ����ؿ��ٿռ����ʼ��ַ
	if (p == NULL)
	{
		perror("malloc");
		return 1;//����ʧ��ֱ�ӷ���1
	}
	//���ٿռ�ɹ���ʹ�ÿռ�
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;//�ռ��ڷ���1 2 3 4 5 
	}

	//�ͷ��ڴ�-�ѿռ�ʹ�õĲ���Ȩ�޻�������ϵͳ
	free(p);
	p = NULL;//��p����ָ��ԭ���ĵ�ַ,������Ҫ��p���óɿ�ָ��
	return 0;
}