#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "123.Linagmou@3434";
	char arr2[30] = { 0 };
	strcpy(arr2, arr1);//��arr1�����鿽����arr2�ϣ���������ı�ԭ�����ַ���
	char* p = "@.";//��@��.��λ���Ͻ����и�,��arr2��@��.λ�ñ��\0 @��.����˳��
	char* ret = NULL;
	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	//printf("%s\n",strtok(arr2, p));//123  ���ص�Ϊ1�ĵ�ַ��һ����ǵĵط��ĳ�\0 123
	//printf("%s\n",strtok(NULL, p));//liangmou  �ӵ�һ����ǵĵ�ַ��ʼ����ҵڶ�����ǵĵط� ���ص�һ����ǵĵ�ַ-����L�ĵ�ַ��@��λ�øĳ�\0
	//printf("%s\n",strtok(NULL, p));//3434
	return 0;
}