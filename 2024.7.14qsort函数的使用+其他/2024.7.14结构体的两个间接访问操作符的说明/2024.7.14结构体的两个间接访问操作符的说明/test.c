#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
struct stu//stuΪ����ṹ�������
{
	char name[20];//ѧ��������
	int age;//ѧ��������
};

void Test(struct stu* ps)//�����β���ʹ�ýṹ��ָ��ʱ
{
	printf("%s %d\n", ps->name, ps->age);//->���������ڷ��ʽṹ��ָ��ָ��Ľṹ���ڲ��ı���
}

int main()
{
	struct stu s = { "����",18 };//���ṹ�帳ֵ sΪstu��ṹ��һ��������
	printf("%s %d\n", s.name, s.age);
	Test(&s);//���ṹ�����s�ĵ�ַ��Test����
	//�ṹ����.������ ���ʽṹ���ڵı���
	return 0;
}