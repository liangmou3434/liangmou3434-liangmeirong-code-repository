#pragma once
#include<stdio.h>
#include<stdlib.h>
//#define N 100
// ��̬˳���
//struct SeqList
//{
//	int arr[N];//��������
//	int size;//˳���ǰ��Ч�����ݸ���
//};
//
////��̬˳���
//typedef int SLDataType;//���������͸���ΪSLDataType ���˳�����Ҫ��������������ʹ��,����ֱ���޸Ĵ��д���
////���ش����޸Ķ�̬˳����ڵĴ���
//struct	SeqList
//{
//	SLDataType* arr;
//	SLDataType size;//��Ч�����ݸ���
//	SLDataType capacity;//ȷ����̬˳���ǰ�ռ��С(��̬˳����ǿ����ݵ�,��С�ᷢ���ı�)
//};

//����̬�ṹ���������
//1)
//typedef int SLDataType;
//struct	SeqList
//{
//	SLDataType* arr;
//	SLDataType size;//��Ч�����ݸ���
//	SLDataType capacity;//ȷ����̬˳���ǰ�ռ��С(��̬˳����ǿ����ݵ�,��С�ᷢ���ı�)
//};
//typedef SeqList SeqList;//�ѽṹ��struct SeqList������ΪSeqList

typedef int SLDataType;
typedef struct  SeqList
{
	SLDataType* arr;
	SLDataType size;//��Ч�����ݸ���
	SLDataType capacity;//ȷ����̬˳���ǰ�ռ��С(��̬˳����ǿ����ݵ�,��С�ᷢ���ı�)
}SL;//�ѽṹ��struct SeqList������ΪSL

//˳���ĳ�ʼ��
void SLIint(SL* ps);//�Ժ�����������

//˳��������
void SLDestroy(SL* ps);

//ͷ������ɾ�� / β������ɾ��
//���뺯���ĵ�һ������,��Ҫ�����˳���ĵ�ַ,�ڶ�������,��Ҫ���������
void SLPushBack(SL* ps, SLDataType x);//β������
void SLPushFront(SL* ps, SLDataType x);//ͷ������

void SLPopBack(SL* ps);//β��ɾ��
void SLPopFront(SL* ps);//ͷ��ɾ��