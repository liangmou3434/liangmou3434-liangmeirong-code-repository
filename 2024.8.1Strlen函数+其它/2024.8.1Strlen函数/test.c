#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//�������汾
//size_t my_strlen(const char* s)
//{
//	assert(s);//�ж�s�Ƿ���Ұָ��
//	int count = 0;
//	while(*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//���ܴ�����ʱ����-�ݹ�˼��
//size_t my_strlen(const char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//	//�����һ������\0,��return 1 + my_strlen("bcedf")
//	//return 1+1+my_strlen("cedf")-�Դ�����
//}

//ָ��-ָ��
size_t my_strlen(const char* s)
{
	assert(s);
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;//p����\0ֹͣ ���ַ������һ���ַ��ĵ�ֵַ-���ַ��ĵ�ֵַ
}

int main()
{
	char arr[] = "abcdef";
	size_t len = my_strlen(arr);
	printf("%zd\n", len);
	return 0;
}