#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	asser(src != NULL);
//	assser(dest != NULL);
//	//����\0ǰ����ַ�
//	while (*src != '\0')
//	{
//		/**dest = *src;
//		dest++;
//		src++;*/
//		*dest++ = *src++;//�Ȱ�*src��ֵ��*dest��++
//    }
//	*dest = *src;//����\0�ַ�
//}


char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while(*dest++ = *src++)//��src��\0ʱ,\0��ASCII��ֵΪ0 whileѭ��ֹͣ
	{
		;
	}
	return ret;//���ؿ������ַ������������ʼ��ַ
}

int main()
{
	char arr1[] = "guangzhou";
	char arr2[20] = { 0 };
	char* ret = my_strcpy(arr2, arr1);//��arr1�ַ���������ݿ���arr2�ַ�������
	printf("%s\n", ret);//guangzhou
	return 0;
}

//char* p = "abcdef";Ϊ�����ַ���,�����ַ����ĳ��Ⱥ������ǲ��ɱ��
//int main()
//{
//	char arr1[] = "guangzhou";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);//��arr1�ַ���������ݿ���arr2�ַ�������
//	printf("%s\n", arr2);//guangzhou
//	return 0;
//}