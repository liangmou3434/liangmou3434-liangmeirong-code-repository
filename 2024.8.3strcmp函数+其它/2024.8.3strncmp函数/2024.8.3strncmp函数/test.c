#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "abqedfhi";
	int ret = strncmp(arr1, arr2, 6);//���Ƚ�6���ַ������������ַ�ʱ,�ڶ����ַ���arr2�Ѿ����ڵ�һ���ַ���arr1,�����ٱȽϺ�����ַ�
	printf("%d\n", ret);//-1
	return 0;
}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abqedfhi";
//	int ret = strncmp(arr1, arr2, 2);//ֻ�Ƚ������ַ�,�����ַ�����ǰ�����ַ����,���Է���0
//	printf("%d\n", ret);//0
//	return 0;
//}