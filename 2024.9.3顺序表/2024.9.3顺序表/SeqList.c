#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"SeqList.h"
//˳���ĳ�ʼ��
void SLIint(SL* ps)
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;//�Խṹ���ڵĳ�Ա���г�ʼ��
}

//˳��������
void SLDestroy(SL* ps)
{
	if (ps->arr)//�ж�arr�������Ƿ�Ϊ��
	{
		free(ps->arr);//�����Ϊ��,��free�ͷſռ�
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;//��˳����ڵ�����ҲҪ��Ϊ0
}

//β������Ԫ��
void SLPushBack(SL* ps, SLDataType x)
{
	//����β������Ԫ��,�ٸ�������ĳ���
	//ps->arr[ps->size] = x;
	//++ps->size;
	//����
	ps->arr[ps->size++] = x;
	//����++,�Ȳ���Ԫ��,size��++
	//����֮ǰҪ�ж�˳����ڵ������Ƿ��㹻
	if (ps->capacity == ps->size)
	{
		//�����Ч���ݸ���(size)�պõ���˳���Ŀռ��С(capacity)
		//��Ҫ���пռ�����

	}
}