#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

int main()
{
	//��Ҫ׷�ӵ��ַ�������Դ�ַ�������
	char arr1[] = "abcdef";
	char arr2[20] = "xx";
	char* ret = strncat(arr2, arr1, 8);//��arr1�ַ�������Ϊ8׷�ӵ�arr2��,����׷�ӳ���Ϊ7���ַ���
	printf("%s", ret);//xxabcdef
	return 0;
}

//int main()
//{
//	//��Ҫ׷�ӵ��ַ���С��Դ�ַ�������
//	char arr1[] = "abcdef";
//	char arr2[20] = "xx";
//	char* ret = strncat(arr2, arr1, 3);//��arr1�ַ�������Ϊ3׷�ӵ�arr2��,��׷�ӵ�Ϊabc\0
//	printf("%s", ret);//xxabc �ڴ�����ʵ��ŵ���xxabc\0
//	return 0;
//}