#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
	return *str1 - *str2;//str1��Ӧ���ַ���ASCII��ֵ-str2��Ӧ��ASCII��ֵ ���������ַ�֮���ASCII��ֵ�� �������Ȼ�Ǻ�����Ӧ��
	//������صĽ������0 ���ַ���1�����ַ���2 
	//������ؽ������0,���ַ���1�����ַ���2
	//������صĽ��С��0,���ַ���1С���ַ���2

}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abq";
	printf("%d\n", my_strcmp(arr1, arr2));//-1 ��һ���ַ����ȵڶ����ַ���С,����С��0��ֵ
	return 0;
}
//int main()
//{
//	int ret = strcmp("abc", "atc");//һ��һ���ַ�ȥ�Ƚ� a��a�Ƚ� b��t�Ƚ� �Ƚ�ascii��ֵ
//	printf("%d ", ret);//-1 �����ֲ�һ�����ַ�ʱ��b��t)����ʱ�ַ��Ĵ�С�����ַ����Ĵ�С--���ٱȽϺ�����ַ�
//	//��һ���ַ������ڵڶ����ַ��� �����ֵ>0
//	//��һ���ַ������ڵڶ����ַ��� �����ֵ=0
//	//��һ���ַ���С�ڵڶ����ַ��� �����ֵ<0
//	return 0;
//}