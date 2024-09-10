#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cur = str1;
	if (*str2 == '\0')
		return (char*)str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr[] = "abbcdef";
	const char* p = "bbc";
	char* ret = my_strstr(arr, p);//��arr����Ѱ��p ���ش�p��һ�γ��ֵ�λ�õĵ�ַ
	printf("%s\n", ret);
	return 0;
}

//int main()
//{
//	char arr[] = "this is an apple";
//	const char* p = "An";
//	char* ret = strstr(arr, p);//��arr����Ѱ��p ���ش�p��һ�γ��ֵ�λ�õĵ�ַ
//	printf("%s\n", ret);//���p������,�򷵻ؿ�ָָ��
//	//��ӡ���Ϊ(null)
//	return 0;
//}

//int main()
//{
//	char arr[] = "this is an apple";
//	const char* p = "is";
//	char* ret = strstr(arr, p);//��arr����Ѱ��p ���ش�p��һ�γ��ֵ�λ�õĵ�ַ
//	printf("%s\n", ret);//��p��һ���ֵ�λ�ÿ�ʼ����ӡ��\0ֹͣ
//	//��ӡ���Ϊis is an apple
//	return 0;
//}