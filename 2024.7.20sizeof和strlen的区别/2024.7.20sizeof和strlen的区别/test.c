#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
int main()
{
	//strlen��c���ԵĿ⺯��,����ֵΪsize_t,ֻ����ͳ���ַ�������,����\0ֹͣ����
	size_t len = strlen("abcdef");
	printf("%zd\n", len);
	//����
	const char* str = "abcdef";//char*����str���������ַ��������ַ��ĵ�ַ���ַ�ָ�������ͳ���ַ�������
	//�ַ���������һ��,���ڴ���Ҳ��������ŵ�,���ַ����鲻ͬ�����ַ������ڴ�����\0��β
	printf("%zd\n", strlen(str));
	//����
	char arr[] = "abcdef";
	printf("%zd\n", strlen(arr));//������������Ԫ�ص�ַ,����Ԫ�ؿ�ʼ�����������\0ֹͣ

	int a = 10;
	short s = 2;
	printf("%zd\n", sizeof(s = (a + 2)));//���Ϊ2 aΪint���� ��a�Ӽ���2ҲΪint���� �ŵ�short���͵ı����ڻᷢ���ضϱ��2
	return 0;
}

int main1()
{
	int a = 10;
	printf("%zd\n", sizeof(a));//sizeof���Ǻ���
	printf("%zd\n", sizeof a);
	printf("%zd\n", sizeof(int));//sizeofֻ��עռ���ڴ�Ĵ�С���������ڴ��зŵ���ʲô����

	return 0;
}