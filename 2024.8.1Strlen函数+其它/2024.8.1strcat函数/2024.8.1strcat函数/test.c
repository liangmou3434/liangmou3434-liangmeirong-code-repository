#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//strcat ���������ַ���
char* my_strcat(char* dest,const char* src)
{
	assert(*dest && *src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
		;//�����-whileѭ��û�����ݵ���Ҫдһ�����-�����
	return ret;
	
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	char* ret = my_strcat(arr1,arr2);//�Լ����Ը��Լ�׷��
	printf("%s\n", ret);//hello hello
	return 0;
}


//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, arr1);//�Լ����Ը��Լ�׷��
//	printf("%s\n", arr1);//hello hello
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);//��arr2������׷�ӵ�arr1��
//	printf("%s\n", arr1);//hello world
//	return 0;
//}