#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��Ŀһ��
//�������-�ڴ�й¶���� ����ռ��û���ͷ�
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//��str����ȥ,strΪNULL,p����100���ֽں����������,str��Ȼ��NULL
//	strcpy(str, "hello world");//��NULL���н����ò���,�������
//	printf(str);
//}

//������ʽһ����
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//����ַ��������,�õ�������100���ֽڿռ����ʼ��ַ
//	strcpy(str, "hello world");
//	printf(str);//hello world
//	free(str);//�Զ�̬�ڴ�ռ���м�ʱ�ͷ�
//}

//������ʽ������
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;//���ؿ��ٵĶ�̬�ռ����ʼ��ַ
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
int main()
{
	Test();
	return 0;
}

//��Ŀ����
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;//����ջ�ռ��ַ������-���ܷ�����ʱ�����ĵ�ַ,���ǿ��Է�����ʱ������ֵ
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//������Getmemory�������غ�,ʹ��strָ��ȥ��������,���ǷǷ�����,��Ϊp������ڴ��Ѿ��ں������ý����������ϵͳ��
//	//str��Ұָ��
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ��:
//void GetMemory(char* p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, 100);
//	printf(str);
//	//Ψһ������,û���ͷŶ�̬���ڴ�ռ�
//	//���ĺ����:
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ��:
//void Test(void)
//{
//	char* str = (char*)malloc(169);
//	strcpy(str, "hello");
//	free(str);//������Ķ�̬�ڴ�ռ���ǰ�ͷ���-�ռ���Ȼ��,���Ѿ�û�з���Ȩ����
//	str = NULL;//���ĺ����-�޷�����if���-������ɷǷ�����
//	if (str != NULL)
//	{
//		strcpy(str, "world");//��ɷǷ������ڴ�ռ�
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
