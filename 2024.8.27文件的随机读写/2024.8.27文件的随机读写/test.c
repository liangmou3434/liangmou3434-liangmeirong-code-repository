#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
//fseek����
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//�Զ�����ʽ���ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a ������a��λ��
//
//	//���ֱ�Ӷ��������ȡ��f ����˳���ȡ
//	//fseek(pf, 4, SEEK_CUR);//SEEK_CURΪ���ļ����Ŀǰλ�ÿ�ʼ��
//	fseek(pf, 5, SEEK_SET);//SEEK_SETΪ���ļ���ʼλ�ÿ�ʼ��
//fseek(pf, -4, SEEK_END);//���ļ���ĩβ��ʼ��
//
//	//��ʱ�ٶ��ļ� ����f
//    ch = fgetc(pf);
//	printf("%c\n", ch);//a ������a��λ��
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;//��pf��Ϊ��ָ��
//	return 0;
//}

//ftell����-�����ļ��������ʼλ�õ�ƫ����
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//�Զ�����ʽ���ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a ������a��λ��
//	
//	//���ֱ�Ӷ��������ȡ��f ����˳���ȡ
//	fseek(pf, 4, SEEK_CUR);//SEEK_CURΪ���ļ����Ŀǰλ�ÿ�ʼ��
//	printf("%d\n", ftell(pf));//5 �����ļ�ָ��pf��ƫ����
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;//��pf��Ϊ��ָ��
//	return 0;
//}

//rewind���� ���ļ�ָ���λ�ûص��ļ�����ʼλ��
int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "r");//�Զ�����ʽ���ļ�
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//���ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);//a ������a��λ��
	
	//���ֱ�Ӷ��������ȡ��f ����˳���ȡ
	fseek(pf, 4, SEEK_CUR);//SEEK_CURΪ���ļ����Ŀǰλ�ÿ�ʼ��
	 
	//�ù��ص���ʼλ��
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);//a ���ƫ�ƺ�ص�a
	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;//��pf��Ϊ��ָ��
	return 0;
}
